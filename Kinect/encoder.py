import cv2
import numpy as np
from pyzed import sl
import struct

def float_to_binary(value):
    packed_value = struct.pack('!f', value)
    int_value = int.from_bytes(packed_value, byteorder='big')
    return format(int_value, '032b')


def get_metadata(zed):
    # Get camera parameters
    calibration_params = zed.get_camera_information().camera_configuration.calibration_parameters
    left_cam_params = calibration_params.left_cam
    right_cam_params = calibration_params.right_cam

    # Get camera pose
    pose = sl.Pose()
    runtime_params = sl.RuntimeParameters()
    zed.grab(runtime_params)
    zed.get_position(pose)
    translation = pose.get_translation().get()

    # Get timestamp
    timestamp = zed.get_timestamp(sl.TIME_REFERENCE.IMAGE).get_seconds()
    scale_factor = 1e6
    timestamp_int = int(timestamp * scale_factor)
    timestamp_high = timestamp_int // 2**16
    timestamp_low = timestamp_int % 2**16
    timestamp1 = float(timestamp_high) / scale_factor
    timestamp2 = float(timestamp_low) / scale_factor

    # Create a metadata array
    metadata = [
        left_cam_params.fx, left_cam_params.fy,
        left_cam_params.cx, left_cam_params.cy,
        right_cam_params.fx, right_cam_params.fy,
        right_cam_params.cx, right_cam_params.cy,
        translation[0], translation[1], translation[2],
        timestamp1, timestamp2
    ]

    return metadata


def create_metadata_graph(metadata):
    height, width = len(metadata), 32
    graph = np.zeros((height, width, 3), dtype=np.uint8)

    for i, value in enumerate(metadata):
        binary = float_to_binary(value)
        for j, bit in enumerate(binary):
            color = (0, 0, 255) if bit == '1' else (0, 0, 0)
            graph[i, j] = color

    return graph


def main():
    input_svo_file = "Room2042.svo"
    output_video_file = "1.avi"

    # Create ZED objects
    zed = sl.Camera()
    init_params = sl.InitParameters()
    init_params.set_from_svo_file(input_svo_file)
    init_params.svo_real_time_mode = False

    # Open the ZED camera
    err = zed.open(init_params)
    if err != sl.ERROR_CODE.SUCCESS:
        print("Failed to open ZED camera:", err)
        exit(1)

    # Get camera information
    camera_info = zed.get_camera_information()
    camera_resolution = camera_info.camera_configuration.resolution
    width = camera_resolution.width
    height = camera_resolution.height

    runtime_parameters = sl.RuntimeParameters()

    # Create OpenCV window and video writer
    video_writer = cv2.VideoWriter(output_video_file, cv2.VideoWriter_fourcc(*"XVID"), 30, (2 * width, height))

    # Create ZED image and depth objects
    image = sl.Mat()
    depth = sl.Mat()

    while zed.grab(runtime_parameters) == sl.ERROR_CODE.SUCCESS:
        # Retrieve RGB and depth data
        zed.retrieve_image(image, sl.VIEW.LEFT)
        zed.retrieve_measure(depth, sl.MEASURE.DEPTH)

        # Convert ZED images to OpenCV format
        cv2_image = image.get_data()
        depth_data = depth.get_data() / 32
        depth_data = np.nan_to_num(depth_data, nan=0, posinf=0, neginf=0)
        cv2_depth = np.uint8(depth_data)

        # Convert cv2_image to a 3-channel RGB image
        cv2_image = cv2.cvtColor(cv2_image, cv2.COLOR_RGBA2RGB)

        # Convert depth data to a colored format
        depth_colored = cv2.applyColorMap(cv2_depth, cv2.COLORMAP_JET)

        # Extract and encode metadata
        metadata = get_metadata(zed)
        graph = create_metadata_graph(metadata)

        # Copy the graph onto the black image at the bottom left corner
       # graph_height, graph_width, _ = graph.shape
      #  black_image[-graph_height:, :graph_width] = graph


        # Concatenate images to create the output frame
        top_row = np.hstack((depth_colored, cv2_image))

        black_frame = np.zeros_like(top_row)
        graph_height, graph_width, _ = graph.shape
        black_frame[-graph_height:, :graph_width] = graph
        output_frame = np.vstack((top_row, black_frame))
        resized_frame = cv2.resize(output_frame, (width, height))

        # Write frame to video
        video_writer.write(resized_frame)


    # Release resources
    zed.close()
    video_writer.release()

if __name__ == "__main__":
    main()
