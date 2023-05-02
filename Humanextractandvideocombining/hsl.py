import numpy as np
import cv2

# Load the depth image (assuming it's a grayscale image)
depth_image = cv2.imread('./videos/human1.png', cv2.IMREAD_GRAYSCALE)

# Normalize depth values to [0, 1]
normalized_depth = cv2.normalize(depth_image.astype(np.float32), None, 0, 1, cv2.NORM_MINMAX)

# Create an empty RGB image with the same dimensions as the depth image
rgb_image = np.zeros((*normalized_depth.shape, 3), dtype=np.float32)

hue_margin = 0.01
hue_padding = 0.01

def hue2rgb(hue):
    h = hue * 6 - 2
    r = np.abs(h - 1) - 1
    g = 2 - np.abs(h)
    b = 2 - np.abs(h - 2)
    return np.clip(np.array([r, g, b]), 0, 1)

def HSLtoRGB(HSL):
    RGB = hue2rgb(HSL[0])
    C = (1 - abs(2 * HSL[2] - 1)) * HSL[1]
    RGB = (RGB - 0.5) * C + HSL[2]
    return RGB

def RGBtoHSL(RGB):
    R, G, B = np.squeeze(RGB)
    Cmax, Cmin = np.max(RGB), np.min(RGB)
    Delta = Cmax - Cmin

    # Hue calculation
    H = np.where(Cmax == R, (((G - B) / Delta) % 6) / 6.0, 0)
    H = np.where(Cmax == G, (((B - R) / Delta) + 2) / 6.0, H)
    H = np.where(Cmax == B, (((R - G) / Delta) + 4) / 6.0, H)
    H = np.where(Delta == 0, 0, H)

    # Lightness calculation
    L = (Cmax + Cmin) / 2

    # Saturation calculation
    S = np.where(Delta == 0, 0, Delta / (1 - np.abs(2 * L - 1)))

    return np.array([H, S, L])

for i in range(normalized_depth.shape[0]):
    for j in range(normalized_depth.shape[1]):
        hue = np.round(normalized_depth[i, j] * (1 - hue_padding * 2) + hue_padding, 6)
        hue = np.clip(hue, 0, 1) * (1 - hue_margin * 2) + hue_margin
        lightness = 0.1 + 0.8 * normalized_depth[i, j]  # Scale the Lightness channel within the range [0.1, 0.9]
        rgb_image[i, j] = HSLtoRGB(np.array([hue, 1, lightness]))

# Convert the RGB image back to the range [0, 255] and save it
rgb_image = (rgb_image*255).astype(np.uint8)
cv2.imwrite('./videos/hslrgb1.png', rgb_image)

processed_depth = np.zeros_like(normalized_depth, dtype=np.float32)
for i in range(rgb_image.shape[0]):
    for j in range(rgb_image.shape[1]):
        hsl_color = RGBtoHSL((rgb_image[i, j].astype(np.float32) / 255).reshape(1,1, 3))  # Modified line
        hue = hsl_color[0]  # Modified line
        hue = (hue - hue_margin) / (1 - hue_margin * 2)
        hue = (hue - hue_padding) / (1 - hue_padding * 2)
        processed_depth[i, j] = np.interp(hue, (0, 1), (depth_image.min(), depth_image.max()), period=1)

# Calculate the difference between the original depth and the processed depth
depth_difference = np.abs(depth_image.astype(np.float64) - processed_depth)

# Concatenate the original depth, processed depth, and the difference images
output_image = np.hstack([depth_image, processed_depth.astype(np.uint8), depth_difference.astype(np.uint8)])
print("Standard deviation:", np.std(depth_difference))
depth_sum = np.sum(depth_difference)
print("Sum:",np.mean(depth_difference))
# Save the output image
cv2.imwrite('./videos/hsl1.png', output_image)
