import cv2
import numpy as np
from pyzed import sl

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

        # Concatenate images to create the output frame
        top_row = np.hstack((depth_colored, cv2_image))


        # Write frame to video
        video_writer.write(top_row)


    # Release resources
    zed.close()
    video_writer.release()

if __name__ == "__main__":
    main()
