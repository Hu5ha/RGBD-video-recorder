import os
import av
import certifi
import cv2
import numpy as np
import torch
import detectron2
from detectron2.config import get_cfg
from detectron2.data import MetadataCatalog
from detectron2.engine import DefaultPredictor
from detectron2 import model_zoo

os.environ["SSL_CERT_FILE"] = certifi.where()

fixed_colors = [
    (255,0,0),
    (215,0,0),
    (195,0,0),
    (165,0,0),
    (135,0,0),
    (105,0,0),
    (85,0,0),
    (65,0,0),
    (55,0,0),
    (25,0,0)
]



def load_mask_rcnn():
    cfg = get_cfg()
    cfg.merge_from_file(model_zoo.get_config_file("COCO-InstanceSegmentation/mask_rcnn_R_50_FPN_3x.yaml"))
    cfg.MODEL.ROI_HEADS.SCORE_THRESH_TEST = 0.5
    cfg.MODEL.WEIGHTS = model_zoo.get_checkpoint_url("COCO-InstanceSegmentation/mask_rcnn_R_50_FPN_3x.yaml")
    cfg.MODEL.DEVICE = "cuda" if torch.cuda.is_available() else "cpu"
    predictor = DefaultPredictor(cfg)
    return predictor



def find_human_centers(masks):
    centers = []
    for mask in masks:
        y, x = np.where(mask)
        center = (int(np.mean(x)), int(np.mean(y)))
        centers.append(center)
    return centers


def find_closest_human_index(center, prev_centers):
    min_distance = float("inf")
    min_index = -1
    for i, prev_center in enumerate(prev_centers):
        distance = np.sqrt((center[0] - prev_center[0]) ** 2 + (center[1] - prev_center[1]) ** 2)
        if distance < min_distance:
            min_distance = distance
            min_index = i
    return min_index


import random

def generate_new_color():
    return (random.randint(0, 255),0,0)

def process_frame(frame, predictor, prev_centers=None, prev_colors=None):
    outputs = predictor(frame)
    instances = outputs["instances"]
    person_indices = instances.pred_classes == MetadataCatalog.get("coco_2017_val").thing_classes.index("person")

    masks = instances.pred_masks[person_indices].cpu().numpy()
    centers = find_human_centers(masks)

    if prev_centers is not None and prev_colors is not None:
        assigned_colors = [None] * len(centers)
        available_colors = prev_colors.copy()
        for i, center in enumerate(centers):
            closest_human_index = find_closest_human_index(center, prev_centers)
            if closest_human_index >= 0 and prev_colors[closest_human_index] in available_colors:
                assigned_colors[i] = prev_colors[closest_human_index]
                available_colors.remove(assigned_colors[i])
            else:
                if available_colors:
                    assigned_colors[i] = available_colors[0]
                    available_colors = available_colors[1:]
                else:
                    assigned_colors[i] = generate_new_color()
    else:
        assigned_colors = fixed_colors[:len(centers)]

    mask_image = np.zeros_like(frame)
    for mask, color in zip(masks, assigned_colors):
        mask = mask.astype(np.uint8)
        color_mask = np.zeros((*mask.shape, 3), dtype=np.uint8)
        color_mask[mask > 0] = color
        mask_image = cv2.add(mask_image, color_mask)

    return mask_image, centers, assigned_colors



def extract_human(input_file, output_file):
    cap = cv2.VideoCapture(input_file)
    width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
    height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
    fps = int(cap.get(cv2.CAP_PROP_FPS))

    out = cv2.VideoWriter(output_file, cv2.VideoWriter_fourcc(*'mp4v'), fps, (width, height))

    predictor = load_mask_rcnn()

    prev_centers = None
    prev_colors = None

    while cap.isOpened():
        ret, frame = cap.read()
        if not ret:
            break

        top_right_quarter = frame[:height//2, width//2:]
        human_detect_quarter, centers, colors = process_frame(top_right_quarter, predictor, prev_centers, prev_colors)

        combined_frame = frame.copy()
        combined_frame[height//2:, width//2:] = cv2.resize(human_detect_quarter, (width//2, height//2))

        out.write(combined_frame)

        prev_centers = centers
        prev_colors = colors

    cap.release()
    out.release()


input_file = './videos/2.MP4'
output_file = './videos/file1.mp4'
extract_human(input_file, output_file)