import numpy as np
import cv2

# Load the depth image (assuming it's a grayscale image)
depth_image = cv2.imread('./videos/human1.png', cv2.IMREAD_GRAYSCALE)

# Normalize depth values to [0, 1]
normalized_depth = cv2.normalize(depth_image.astype(np.float32), None, 0, 1, cv2.NORM_MINMAX)

# Create an empty HSV image with the same dimensions as the depth image
hsv_image = np.zeros((*normalized_depth.shape, 3), dtype=np.float32)

hue_margin = 0.01
hue_padding = 0.01

# Convert depth values to HSV colors
for i in range(normalized_depth.shape[0]):
    for j in range(normalized_depth.shape[1]):
        hue = (1 - hue_margin - hue_padding) * normalized_depth[i, j] + hue_margin / 2
        hsv_image[i, j] = np.array([hue * 180, 1, 1])  # hue: [0, 180], saturation: 1, value: 1

# Convert the HSV image to RGB image
rgb_image = cv2.cvtColor(hsv_image, cv2.COLOR_HSV2BGR)

# Convert the RGB image back to the range [0, 255] and save it
rgb_image = (rgb_image * 255).astype(np.uint8)
cv2.imwrite('./videos/rgb1.png', rgb_image)

processed_depth = np.zeros_like(normalized_depth, dtype=np.float32)

# Convert RGB values back to hue values and denormalize them back to the original depth range
for i in range(rgb_image.shape[0]):
    for j in range(rgb_image.shape[1]):
        # Convert RGB color to HSV color
        hsv_color = cv2.cvtColor(np.array([[rgb_image[i, j].astype(np.float32) / 255.0]]), cv2.COLOR_BGR2HSV)[0, 0]
        hue = hsv_color[0] / 180.0
        processed_depth[i, j] = (hue - hue_margin / 2) / (1 - hue_margin - hue_padding)

# Scale the processed depth to the original depth range
min_depth, max_depth = depth_image.min(), depth_image.max()
processed_depth = (processed_depth * (max_depth - min_depth) + min_depth).astype(np.uint8)

# Calculate the difference between the original depth and the processed depth
depth_difference = np.abs(depth_image.astype(np.float32) - processed_depth.astype(np.float32))
print("Standard deviation:", np.std(depth_difference))
depth_sum = np.sum(depth_difference)
print("Sum:",np.mean(depth_difference))
# Concatenate the original depth, processed depth, and the difference images
output_image = np.hstack([depth_image, processed_depth, depth_difference.astype(np.uint8)])

# Save the output image
cv2.imwrite('./videos/1.png', output_image)
