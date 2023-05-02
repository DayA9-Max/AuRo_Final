#!/usr/bin/env python

import rospy
import numpy as np
from geometry_msgs.msg import Pose

# Transformation from camera to arm 1.
Tca1 = np.array([[1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1]])
# Transformation from arm 1 to arm 2.
px = 0; py = 0
Ta1a2 = np.array([[-1,0,0,0],[0,-1,0,0],[0,0,1,0],[px,py,0,1]])

# Transformation from camera to arm 2.
Tca2 = Ta1a2@Tca1

# Transform ball center from camera frame to one of the arm frames
def transform(point_cam, T):
    p_cam = np.array([[point_cam.x],[point_cam.y],[point_cam.z],[1]])
    p_arm = T@p_cam
    point_arm = Point(x=p_arm[0], y=p_arm[1], z=p_arm[2])
    return point_arm



def arm1_callback(pose):
    # Transform points and publish to their topics
    #pub_arm1.publish(transform(point, Tca1))
    pub_arm2.publish(pose)

if __name__ == '__main__':
    global sub
    global pub_arm2
    # Initialize the ROS node
    rospy.init_node('transformer')

    # Create a subscriber to the point topic
    sub = rospy.Subscriber('/arm1/arm_pose', Pose, arm1_callback)

    # Create publishers to the two point topics
    #pub_arm1 = rospy.Publisher('/arm1/ball_center', Point, queue_size=1)
    pub_arm2 = rospy.Publisher('/arm2/arm_pose', Pose, queue_size=1)

    # Spin the node so the subscriber and publishers are active
    rospy.spin()
