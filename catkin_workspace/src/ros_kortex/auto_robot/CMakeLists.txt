
cmake_minimum_required(VERSION 2.8.3)
project(auto_robot)

add_compile_options(-std=c++11)
add_definitions(-D_OS_UNIX)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs message_generation actionlib_msgs actionlib kortex_driver)

## Declare a catkin package
catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})
include_directories(include ${PROJECT_SOURCE_DIR}/src)
include_directories(include ${PROJECT_SOURCE_DIR}/../kortex_api/include/client)
include_directories(include ${PROJECT_SOURCE_DIR}/../kortex_api/include/client_stubs)
include_directories(include ${PROJECT_SOURCE_DIR}/../kortex_api/include/messages)
include_directories(include ${PROJECT_SOURCE_DIR}/../kortex_api/include/common)

add_service_files(
  FILES 
  AddTwoInts.srv
  AutoService.srv
)

# Install

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
catkin_install_python(PROGRAMS src/move_it/example_move_it_trajectories.py src/move_it/talker.py 
                      DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
