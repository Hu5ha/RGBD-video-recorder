import numpy as np
import cv2

# Load the depth image (assuming it's a grayscale image)
depth_image = cv2.imread('./videos/room.png', cv2.IMREAD_GRAYSCALE)

# Normalize depth values to [0, 1]
normalized_depth = cv2.normalize(depth_image.astype(np.float32), None, 0, 1, cv2.NORM_MINMAX)

# Create an empty RGB image with the same dimensions as the depth image
rgb_image = np.zeros((*normalized_depth.shape, 3), dtype=np.float32)

hue_margin = 0.01
hue_padding = 0.01

HCLgamma = 3
HCLy0 = 100
HCLmaxL = 0.530454533953517  # == exp(HCLgamma / HCLy0) - 0.5
PI = 3.1415926536


def HCLtoRGB(HCL):
    RGB = np.zeros(3)
    if HCL[2] != 0:
        H = HCL[0]
        C = HCL[1]
        L = HCL[2] * HCLmaxL
        Q = np.exp((1 - C / (2 * L)) * (HCLgamma / HCLy0))
        U = (2 * L - C) / (2 * Q - 1)
        V = C / Q
        A = (H + min(H % 2 / 4, -H % 2 / 8)) * PI * 2
        T = np.tan(A)
        H *= 6
        if H <= 0.999:
            RGB[0] = 1
            RGB[1] = T / (1 + T)
        elif H <= 1.001:
            RGB[0] = 1
            RGB[1] = 1
        elif H <= 2:
            RGB[0] = (1 + T) / T
            RGB[1] = 1
        elif H <= 3:
            RGB[1] = 1
            RGB[2] = 1 + T
        elif H <= 3.999:
            RGB[1] = 1 / (1 + T)
            RGB[2] = 1
        elif H <= 4.001:
            RGB[1] = 0
            RGB[2] = 1
        elif H <= 5:
            RGB[0] = -1 / T
            RGB[2] = 1
        else:
            RGB[0] = 1
            RGB[2] = -T
        RGB = RGB * V + U
    return RGB


def RGBtoHCL(RGB):
    HCL = np.zeros(3)
    H = 0
    U = np.min(RGB)
    V = np.max(RGB)
    Q = HCLgamma / HCLy0
    HCL[1] = V - U
    if HCL[1] != 0:
        H = np.arctan2(RGB[1] - RGB[2], RGB[0] - RGB[1]) / PI
        Q *= U / V
    Q = np.exp(Q)
    HCL[0] = (H / 2 - min(H % 1,-H % 1) / 6) % 1
    HCL[1] *= Q
    HCL[2] = np.interp(Q, [0, 1], [-U, V]) / (HCLmaxL * 2)
    return HCL

for i in range(normalized_depth.shape[0]):
   for j in range(normalized_depth.shape[1]):
     hue = np.round(normalized_depth[i, j] * (1 - hue_padding * 2) + hue_padding, 6)
     hue = np.clip(hue, 0, 1) * (1 - hue_margin * 2) + hue_margin
     lightness = 0.1 + 0.8 * normalized_depth[i, j] # Scale the Lightness channel within the range [0.1, 0.9]
     rgb_image[i, j] = HCLtoRGB(np.array([hue, 1, lightness]))

rgb_image = (rgb_image*255).astype(np.uint8)
cv2.imwrite('./videos/hclrgb1.png', rgb_image)

processed_depth = np.zeros_like(normalized_depth, dtype=np.float32)

for i in range(rgb_image.shape[0]):
    for j in range(rgb_image.shape[1]):
       hcl_color = RGBtoHCL((rgb_image[i, j].astype(np.float32) / 255)) # Modified line
       hue = hcl_color[0] # Modified line
       hue = (hue - hue_margin) / (1 - hue_margin * 2)
       hue = (hue - hue_padding) / (1 - hue_padding * 2)
       processed_depth[i, j] = np.interp(hue, (0, 1), (depth_image.min(), depth_image.max()), period=1)


depth_difference = np.abs(depth_image.astype(np.float64) - processed_depth)
print("Standard deviation:", np.std(depth_difference))
depth_sum = np.sum(depth_difference)
print("Sum:",np.mean(depth_difference))
output_image = np.hstack([depth_image, processed_depth.astype(np.uint8), depth_difference.astype(np.uint8)])

cv2.imwrite('./videos/hcl1.png', output_image)