import numpy as np
import cv2

depth_image = cv2.imread('./videos/room.png', cv2.IMREAD_GRAYSCALE)

# Normalize depth values to [0, 1]
normalized_depth = cv2.normalize(depth_image.astype(np.float32), None, 0, 1, cv2.NORM_MINMAX)

# Create an empty RGB image with the same dimensions as the depth image
rgb_image = np.zeros((*normalized_depth.shape, 3), dtype=np.float32)

hue_margin = 0.01
hue_padding = 0.01

HCYwts = np.array([0.299, 0.587, 0.114])

def Hue2RGB(hue):
    h = hue * 6.0
    r = np.abs(h - 3) - 1
    g = 2 - np.abs(h - 2)
    b = 2 - np.abs(h - 4)
    return np.array([np.clip(r, 0, 1), np.clip(g, 0, 1), np.clip(b, 0, 1)])


def RGB2Hue(RGB):
    Cmax = np.max(RGB)
    Cmin = np.min(RGB)
    delta = Cmax - Cmin

    if delta == 0:
        hue = 0
    elif Cmax == RGB[0]:
        hue = (((RGB[1] - RGB[2]) / delta) % 6) / 6.0
    elif Cmax == RGB[1]:
        hue = (((RGB[2] - RGB[0]) / delta) + 2) / 6.0
    else:
        hue = (((RGB[0] - RGB[1]) / delta) + 4) / 6.0

    return np.array([hue, delta / Cmax, Cmax])

def HCYtoRGB(HCY):
    RGB = Hue2RGB(HCY[0])
    Z = np.dot(RGB, HCYwts)
    if HCY[2] < Z:
        HCY[1] *= HCY[2] / Z
    else:
        HCY[1] *= (1 - HCY[2]) / (1 - Z)
    return (RGB - Z) * HCY[1] + HCY[2]


def RGBtoHCY(RGB):
    HCV = RGB2Hue(RGB)
    Y = np.dot(RGB, HCYwts)
    Z = np.dot(Hue2RGB(HCV[0]), HCYwts)
    if Y < Z:
        HCV[1] *= Z / (Y + np.finfo(float).eps)
    else:
        HCV[1] *= (1 - Z) / (1 - Y + np.finfo(float).eps)
    return np.array([HCV[0], HCV[1], Y])

for i in range(normalized_depth.shape[0]):
   for j in range(normalized_depth.shape[1]):
     hue = np.round(normalized_depth[i, j] * (1 - hue_padding * 2) + hue_padding, 6)
     hue = np.clip(hue, 0, 1) * (1 - hue_margin * 2) + hue_margin
     lightness = 0.1 + 0.8 * normalized_depth[i, j] # Scale the Lightness channel within the range [0.1, 0.9]
     rgb_image[i, j] = HCYtoRGB(np.array([hue, 1, lightness]))

rgb_image = (rgb_image*255).astype(np.uint8)
cv2.imwrite('./videos/hcyrgb1.png', rgb_image)

processed_depth = np.zeros_like(normalized_depth, dtype=np.float32)

for i in range(rgb_image.shape[0]):
    for j in range(rgb_image.shape[1]):
       hcl_color = RGBtoHCY((rgb_image[i, j].astype(np.float32) / 255)) # Modified line
       hue = hcl_color[0] # Modified line
       hue = (hue - hue_margin) / (1 - hue_margin * 2)
       hue = (hue - hue_padding) / (1 - hue_padding * 2)
       processed_depth[i, j] = np.interp(hue, (0, 1), (depth_image.min(), depth_image.max()), period=1)


depth_difference = np.abs(depth_image.astype(np.float64) - processed_depth)
print("Standard deviation:", np.std(depth_difference))
depth_sum = np.sum(depth_difference)
print("Sum:",np.mean(depth_difference))
output_image = np.hstack([depth_image, processed_depth.astype(np.uint8), depth_difference.astype(np.uint8)])

cv2.imwrite('./videos/hcy1.png', output_image)