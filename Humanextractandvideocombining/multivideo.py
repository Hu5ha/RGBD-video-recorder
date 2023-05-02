import cv2
import numpy as np
from moviepy.editor import VideoFileClip, concatenate_videoclips, clips_array
from moviepy.editor import ImageClip

def get_timestamp(frame):
    height, width, _ = frame.shape
    middle = height // 2
    timestamp = 0
    for col in range(width - 1, -1, -1):
        if frame[middle, col][0] > 128:  # Blue channel value > 128
            break
        timestamp = (timestamp << 1) | (1 if frame[middle, col][2] < 128 else 0)
    return timestamp

def read_timestamp(video_file):
    cap = cv2.VideoCapture(video_file)
    ret, frame = cap.read()
    if ret:
        timestamp = get_timestamp(frame)
        cap.release()
        return timestamp
    else:
        raise Exception(f"Could not read frame from {video_file}")

def create_black_frame(width, height, duration):
    black_frame = np.zeros((height, width, 3), dtype=np.uint8)
    return ImageClip(black_frame).set_duration(duration)

def process_video(input_files, output_file):
    timestamps = [read_timestamp(file) for file in input_files]
    min_timestamp = min(timestamps)
    video_clips = [VideoFileClip(file) for file in input_files]
    start_delays = [timestamp - min_timestamp for timestamp in timestamps]
    durations = [clip.duration for clip in video_clips]

    max_duration = max([duration + delay for duration, delay in zip(durations, start_delays)])
    black_frames = [create_black_frame(clip.w, clip.h, max_duration - clip.duration) for clip in video_clips]

    delayed_videos = [concatenate_videoclips([create_black_frame(clip.w, clip.h, delay), clip, black_frames[i]])
                      for i, (clip, delay) in enumerate(zip(video_clips, start_delays))]

    final_video = clips_array([[delayed_videos[0], delayed_videos[1]], [delayed_videos[2], delayed_videos[3]]])
    final_video.write_videofile(output_file, codec='libx264', audio_codec='aac')

input_files = ['./videos/1.MP4', './videos/2.MP4', './videos/3.MP4', './videos/4.MP4']
output_file = './videos/combined.mp4'

process_video(input_files, output_file)
