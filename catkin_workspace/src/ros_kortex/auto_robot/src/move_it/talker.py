#!/usr/bin/env python

import rospy
import numpy as np
from geometry_msgs.msg import Pose, Point

# Transformation from camera to arm 1.
Tca1 = np.array([[1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1]])
# Transformation from arm 1 to arm 2.
px = -0.05; py = 0.1; pz = 0.0;
Ta1a2 = np.array([[1.0,0.0,0.0,px],[0.,1.,0.,py],[0.,0.,1.,pz],[0.,0.,0.,1.]])

# Transformation from camera to arm 2.
Tca2 = np.dot(Ta1a2,Tca1)

# Transform ball center from camera frame to one of the arm frames
def transform_cam(point_cam, T):
    p_cam = np.array([[point_cam.x],[point_cam.y],[point_cam.z],[1]])
    p_arm = np.dot(T,p_cam)
    point_arm = Point(x=p_arm[0], y=p_arm[1], z=p_arm[2])
    return point_arm

def transform_a1a2(pose):
    new_pose = pose
    print("input pose")
    print(pose.position.x, pose.position.y, pose.position.z)
    p_arm1 = np.array([[pose.position.x],[pose.position.y],[pose.position.z],[1]])
    p_arm2 = np.matmul(Ta1a2,p_arm1)
    print("arm 1 pose")
    print(p_arm1)
    print(np.shape(p_arm1))
    print("arm 2 pose")
    print(p_arm2)
    print(np.shape(p_arm2))
    new_pose.position.x = p_arm2[0][0]
    new_pose.position.y = p_arm2[1][0]
    new_pose.position.z = p_arm2[2][0]  
    return new_pose

def arm1_callback(pose):
    # Transform points and publish to their topics
    #pub_arm1.publish(transform(point, Tca1))
    print("Callback")
    arm1_sub.unregister()
    for i in range(10):
        arm2_pub.publish(transform_a1a2(pose))
        rospy.sleep(1.)
    rospy.signal_shutdown("Ending")

if __name__ == '__main__':
    global arm1_sub
    global arm2_pub
    # Initialize the ROS node
    rospy.init_node('talker', disable_signals=True)
    rate = rospy.Rate(2)

    # Create a subscriber to the point topic
    arm1_sub = rospy.Subscriber('arm1/arm_result_pose', Pose, arm1_callback)

    # Create publishers to the two point topics
    arm1_pub = rospy.Publisher('arm1/arm_pose', Pose, queue_size=1)
    arm2_pub = rospy.Publisher('arm2/arm_pose', Pose, queue_size=1)

    # Spin the node so the subscriber and publishers are active
    p = Pose()
    p.position.x = 0.25
    p.position.y = -0.25
    p.position.z = 0.01
    for i in range(60):
        arm1_pub.publish(p)
        rospy.sleep(1.)
    rospy.spin()
