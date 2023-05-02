sudo ip route add 192.168.1.10/32 via 10.0.2.2 dev enp0s3
export ROS_IP=192.168.1.16
export ROS_MASTER_URI=http://192.168.1.16:11311
