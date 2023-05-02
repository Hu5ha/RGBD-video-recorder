import cv2
import numpy as np

fixed_colors = [
    (255, 0, 0), (0, 255, 0), (0, 0, 255),
    (255, 255, 0), (255, 0, 255), (0, 255, 255),
    (128, 0, 0), (0, 128, 0), (0, 0, 128),
    (128, 128, 128)
]
def load_yolo():
    net = cv2.dnn.readNet("./yolov4/yolov4.weights", "./yolov4/yolov4.cfg")
    with open("yolov4/coco.names", "r") as f:
        classes = [line.strip() for line in f.readlines()]
    layer_names = net.getLayerNames()
    output_layers_indices = net.getUnconnectedOutLayers().flatten()
    output_layers = [layer_names[i - 1] for i in output_layers_indices]
    return net, classes, output_layers
def process_frame(frame, net, classes, output_layers):
    height, width, channels = frame.shape
    blob = cv2.dnn.blobFromImage(frame, 0.00392, (416, 416), (0, 0, 0), True, crop=False)
    net.setInput(blob)
    outs = net.forward(output_layers)

    class_ids = []
    confidences = []
    boxes = []

    for out in outs:
        for detection in out:
            scores = detection[5:]
            class_id = np.argmax(scores)
            confidence = scores[class_id]
            if confidence > 0.5 and classes[class_id] == "person":
                center_x = int(detection[0] * width)
                center_y = int(detection[1] * height)
                w = int(detection[2] * width)
                h = int(detection[3] * height)
                x = int(center_x - w / 2)
                y = int(center_y - h / 2)
                boxes.append([x, y, w, h])
                confidences.append(float(confidence))
                class_ids.append(class_id)

    indexes = cv2.dnn.NMSBoxes(boxes, confidences, 0.5, 0.4)

    # Create a black background mask with the same dimensions as the input frame
    black_background = np.zeros_like(frame)

    for idx, i in enumerate(indexes.flatten()):
        if idx < len(fixed_colors):
            x, y, w, h = boxes[i]
            label = classes[class_ids[i]]
            color = fixed_colors[idx]  # Assign color from fixed_colors array
            cv2.rectangle(black_background, (x, y), (x + w, y + h), color, -1)  # Fill the rectangle with the assigned color
            cv2.rectangle(frame, (x, y), (x + w, y + h), color, 2)
            cv2.putText(frame, label, (x, y - 5), cv2.FONT_HERSHEY_SIMPLEX, 0.5, color, 2)

    # Combine the input frame and the black background mask
    result = cv2.addWeighted(frame, 1, black_background, 0.5, 0)

    return result


def extract_and_label_humans(input_file, output_file):
    net, classes, output_layers = load_yolo()

    cap = cv2.VideoCapture(input_file)
    fourcc = cv2.VideoWriter_fourcc(*'mp4v')
    out = cv2.VideoWriter(output_file, fourcc, 30.0, (int(cap.get(3)), int(cap.get(4))))

    while cap.isOpened():
        ret, frame = cap.read()
        if not ret:
            break

        processed_frame = process_frame(frame, net, classes, output_layers)
        out.write(processed_frame)

        cv2.imshow('frame', processed_frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cap.release()
    out.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    input_file = './videos/IMG_0238.MOV'
    output_file = './videos/file.mp4'
    extract_and_label_humans(input_file, output_file)
