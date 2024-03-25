#!/usr/bin/env python3

import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from geometry_msgs.msg import Point
import imutils

class BallDetector:
    def __init__(self):
        self.bridge = CvBridge()
        topic = '/usb_cam/image_raw'
        self.image_sub = rospy.Subscriber(topic, Image, self.image_callback)
        self.center_pub = rospy.Publisher("/ball_center", Point, queue_size=1)
        self.img_pub = rospy.Publisher("/ball_circle", Image, queue_size=5)

    def image_callback(self, msg):
        # Convert ROS Image message to OpenCV image
        img = self.bridge.imgmsg_to_cv2(msg, "bgr8")

        # Convert image to grayscale
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        # Threshold the image to find the ball
        ret, thresh = cv2.threshold(gray, 127, 255, 0)

        # Find contours in the image
        contours, hierarchy = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

        # Find the contour with the largest area
        max_area = 0
        max_contour = None
        for contour in contours:
            area = cv2.contourArea(contour)
            if area > max_area:
                max_area = area
                max_contour = contour

        # Find the center of the ball
        if max_contour is not None:
            ((x, y), radius) = cv2.minEnclosingCircle(max_contour)

            M = cv2.moments(max_contour)
            cx = int(M['m10'] / M['m00'])
            cy = int(M['m01'] / M['m00'])

            # Publish the center of the ball to a new ROS topic
            center_msg = Point()
            center_msg.x = cx
            center_msg.y = cy
            self.img_pub.publish(self.bridge.cv2_to_imgmsg(cv2.circle(img, (cx, cy), int(radius), color = (255, 0, 0)), 'bgr8'))
            self.center_pub.publish(center_msg)

if __name__ == '__main__':
    rospy.init_node('ball_detector')
    detector = BallDetector()
    rospy.spin()

