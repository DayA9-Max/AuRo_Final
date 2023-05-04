#!/usr/bin/env python

import rospy
import numpy as np
from geometry_msgs.msg import Pose, Point
import socket
HOST = "192.168.1.16"  # Standard loopback interface address (localhost)
PORT = 65432  # Port to listen on (non-privileged ports are > 1023)

# Transformation from camera to arm 1.
Tca1 = np.array([[0,-1,0.3032],[1,0,-0.058],[0,0,1]])
# Transformation from camera to arm 2.
Tca2 = np.array([[0,-1,0.274],[1,0,0.119],[0,0,1]])

# Transformation from arm 1 to arm 2.
px = 0.472; py = 0.604; pz = 0.0;
Ta1a2 = np.array([[-1.0,0.0,0.0,px],[0.,-1.,0.,py],[0.,0.,1.,pz],[0.,0.,0.,1.]])

# Transformation from camera to arm 2.
#Tca2 = np.dot(Ta1a2,Tca1)

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

def transform_cam_a2(pose):
    new_pose = pose
    print("input pose")
    print(pose.position.x, pose.position.y, pose.position.z)
    p_cam = np.array([[pose.position.x],[pose.position.y],[1]])
    p_arm2 = np.matmul(Tca2,p_cam)
    print("cam pose")
    print(p_cam)
    print(np.shape(p_cam))
    print("arm 2 pose")
    print(p_arm2)
    print(np.shape(p_arm2))
    new_pose.position.x = p_arm2[0][0]
    new_pose.position.y = p_arm2[1][0]
    new_pose.position.z = 0.01
    return new_pose

def transform_cam_a1(pose):
    new_pose = pose
    print("input pose")
    print(pose.position.x, pose.position.y, pose.position.z)
    p_cam = np.array([[pose.position.x],[pose.position.y],[1]])
    p_arm1 = np.matmul(Tca1,p_cam)
    print("cam pose")
    print(p_cam)
    print(np.shape(p_cam))
    print("arm 1 pose")
    print(p_arm1)
    print(np.shape(p_arm1))
    new_pose.position.x = p_arm1[0][0]
    new_pose.position.y = p_arm1[1][0]
    new_pose.position.z = 0.01
    return new_pose

def arm2_callback(pose):
    # Transform points and publish to their topics
    #pub_arm1.publish(transform(point, Tca1))
    print("Callback")
    arm1_sub.unregister()
    print("Flushing")
    for i in range(10):
	garb = conn.recv(1024)
    data_in = None
    print("getting location")
    while data_in is None:
        data_in = conn.recv(15)
        print("data in")
        print(data_in)
    data = np.array(str(data_in).split(" "), dtype=np.float64)
    print(data)
    pose.position.x = data[0]
    pose.position.y = data[1]
    pose.position.z = 0.01
    p = transform_cam_a2(pose)
    for i in range(10):
        arm2_pub.publish(p)
        rospy.sleep(1.)
    rospy.signal_shutdown("Ending")

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
    global conn
    global addr

    # Initialize the ROS node
    rospy.init_node('talker', disable_signals=True)
    rate = rospy.Rate(2)

    # Create a subscriber to the point topic
    arm1_sub = rospy.Subscriber('arm1/arm_result_pose', Pose, arm2_callback)

    # Create publishers to the two point topics
    arm1_pub = rospy.Publisher('arm1/arm_pose', Pose, queue_size=1)
    arm2_pub = rospy.Publisher('arm2/arm_pose', Pose, queue_size=1)

    # Spin the node so the subscriber and publishers are active
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((HOST, PORT))
    s.listen(0)
    conn, addr = s.accept()

    """
    p = Pose()
    p.position.x = 0.25
    p.position.y = -0.25
    p.position.z = 0.01
    """
    p = Pose()
    data = None
    while data is None:
    	data = np.array(str(conn.recv(15)).split(" "), dtype=np.float64)
        if abs(data[0]) > 0.5 or abs(data[1]) > 0.5:
	    data = None
            continue
	print(data)
    p.position.x = data[0]
    p.position.y = data[1]
    p.position.z = 0.01
    p = transform_cam_a1(p)
    
    for i in range(10):
        arm1_pub.publish(p)
        rospy.sleep(1.)

    rospy.spin()
