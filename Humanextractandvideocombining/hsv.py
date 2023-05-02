import numpy as np
import cv2

# Load the depth image (assuming it's a grayscale image)
depth_image = cv2.imread('./videos/human.png', cv2.IMREAD_GRAYSCALE)

# Normalize depth values to [0, 1]
normalized_depth = cv2.normalize(depth_image.astype(np.float32), None, 0, 1, cv2.NORM_MINMAX)

# Create an empty RGB image with the same dimensions as the depth image
rgb_image = np.zeros((*normalized_depth.shape, 3), dtype=np.float32)

hue_margin = 0.01
hue_padding = 0.01


epsilon = 1e-10;


def hsv2rgb(c):
    K = np.array([1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0])
    p = np.abs(np.mod(c[0] * 6.0 + K[:3], 6) - K[3])
    return c[2] * np.where(p < K[0], p + K[0], np.clip(K[0] - p, 0, 1)) * c[1]



def rgb2hsv(RGB):
    RGB = np.squeeze(RGB)  # Added line
    P = np.where(RGB[1] < RGB[2], [RGB[2], RGB[1], -1.0, 2.0 / 3.0], [RGB[1], RGB[2], 0.0, -1.0 / 3.0])
    Q = np.where(RGB[0] < P[0], [P[0], P[1], P[2], RGB[0]], [RGB[0], P[1], P[3], P[0]])
    C = Q[0] - np.minimum(Q[3], Q[1])
    H = np.abs((Q[3] - Q[1]) / (6 * C + epsilon) + Q[2])
    return np.array([H, C, Q[0]])  # Modified line



# Convert depth values to RGB colors
for i in range(normalized_depth.shape[0]):
    for j in range(normalized_depth.shape[1]):
        hue = np.round(normalized_depth[i, j] * (1 - hue_padding * 2) + hue_padding, 6)
        hue = np.clip(hue, 0, 1) * (1 - hue_margin * 2) + hue_margin
        rgb_image[i, j] = hsv2rgb(np.array([hue, 1, 1]))

# Convert the RGB image back to the range [0, 255] and save it
rgb_image = (rgb_image*255 ).astype(np.uint8)
cv2.imwrite('./videos/hsvrgb1.png', rgb_image)

processed_depth = np.zeros_like(normalized_depth, dtype=np.float32)


for i in range(rgb_image.shape[0]):
    for j in range(rgb_image.shape[1]):
        hsv_color = rgb2hsv((rgb_image[i, j].astype(np.float32) / 255).reshape(1, 1, 3))  # Modified line
        hue = hsv_color[0]  # Modified line
        hue = (hue - hue_margin) / (1 - hue_margin * 2)
        hue = (hue - hue_padding) / (1 - hue_padding * 2)
        processed_depth[i, j] = np.interp(hue, (0, 1), (depth_image.min(), depth_image.max()), period=1)



# Calculate the difference between the original depth and the processed depth
depth_difference = np.abs(depth_image.astype(np.float64) - processed_depth)
print("Standard deviation:", np.std(depth_difference))
depth_sum = np.sum(depth_difference)
print("Sum:",np.mean(depth_difference))
# Concatenate the original depth, processed depth, and the difference images
output_image = np.hstack([depth_image, processed_depth.astype(np.uint8), depth_difference.astype(np.uint8)])

# Save the output image
cv2.imwrite('./videos/hsv1.png', output_image)