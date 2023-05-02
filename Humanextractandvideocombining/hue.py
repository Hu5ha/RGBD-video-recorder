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

def rgb2hue(c):
    c = c.astype(np.float64)
    minc = np.min(c)
    maxc = np.max(c)
    div = 1 / (6 * np.maximum(maxc - minc, 1e-5))
    r = (c[1] - c[2]) * div
    g = 1.0 / 3 + (c[2] - c[0]) * div
    b = 2.0 / 3 + (c[0] - c[1]) * div
    d = np.where(c[0] < np.maximum(c[1], c[2]), np.where(c[1] < c[2], g, b), r)
    return np.mod(d + 1 - hue_padding / 2, 1) + hue_padding / 2

# Convert depth values to RGB colors
for i in range(normalized_depth.shape[0]):
    for j in range(normalized_depth.shape[1]):
        normalized_depth[i, j] = normalized_depth[i, j] * (1 - hue_padding * 2) + hue_padding
        normalized_depth[i, j] = np.clip(normalized_depth[i, j], 0, 1) * (1 - hue_margin * 2) + hue_margin
        rgb_image[i, j] = hue2rgb(normalized_depth[i, j])

# Convert the RGB image back to the range [0, 255] and save it
rgb_image = (rgb_image * 255).astype(np.uint8)
cv2.imwrite('./videos/huergb1.png', rgb_image)

processed_depth = np.zeros_like(normalized_depth, dtype=np.float32)




for i in range(rgb_image.shape[0]):
    for j in range(rgb_image.shape[1]):
        hue = rgb2hue(rgb_image[i, j].astype(np.float32) / 255.0)
        hue = (hue - hue_margin) / (1 - hue_margin * 2)
        hue = (hue - hue_padding) / (1 - hue_padding * 2)
        processed_depth[i, j] = np.interp(hue, (0, 1), (depth_image.min(), depth_image.max()))


# Calculate the difference between the original depth and the processed depth
depth_difference = np.abs(depth_image.astype(np.float64) - processed_depth)
print("Standard deviation:", np.std(depth_difference))
depth_sum = np.sum(depth_difference)
print("Sum:",np.mean(depth_difference))
# Concatenate the original depth, processed depth, and the difference images
output_image = np.hstack([depth_image, processed_depth.astype(np.uint8), depth_difference.astype(np.uint8)])

# Save the output image
cv2.imwrite('./videos/hue1.png', output_image)