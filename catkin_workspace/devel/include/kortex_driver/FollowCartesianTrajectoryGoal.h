// Generated by gencpp from file kortex_driver/FollowCartesianTrajectoryGoal.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_FOLLOWCARTESIANTRAJECTORYGOAL_H
#define KORTEX_DRIVER_MESSAGE_FOLLOWCARTESIANTRAJECTORYGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CartesianWaypoint.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct FollowCartesianTrajectoryGoal_
{
  typedef FollowCartesianTrajectoryGoal_<ContainerAllocator> Type;

  FollowCartesianTrajectoryGoal_()
    : trajectory()
    , goal_time_tolerance()
    , use_optimal_blending(false)  {
    }
  FollowCartesianTrajectoryGoal_(const ContainerAllocator& _alloc)
    : trajectory(_alloc)
    , goal_time_tolerance()
    , use_optimal_blending(false)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >> _trajectory_type;
  _trajectory_type trajectory;

   typedef ros::Duration _goal_time_tolerance_type;
  _goal_time_tolerance_type goal_time_tolerance;

   typedef uint8_t _use_optimal_blending_type;
  _use_optimal_blending_type use_optimal_blending;





  typedef boost::shared_ptr< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FollowCartesianTrajectoryGoal_

typedef ::kortex_driver::FollowCartesianTrajectoryGoal_<std::allocator<void> > FollowCartesianTrajectoryGoal;

typedef boost::shared_ptr< ::kortex_driver::FollowCartesianTrajectoryGoal > FollowCartesianTrajectoryGoalPtr;
typedef boost::shared_ptr< ::kortex_driver::FollowCartesianTrajectoryGoal const> FollowCartesianTrajectoryGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator1> & lhs, const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator2> & rhs)
{
  return lhs.trajectory == rhs.trajectory &&
    lhs.goal_time_tolerance == rhs.goal_time_tolerance &&
    lhs.use_optimal_blending == rhs.use_optimal_blending;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator1> & lhs, const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df06af45264ea735bb204bc1057fde50";
  }

  static const char* value(const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdf06af45264ea735ULL;
  static const uint64_t static_value2 = 0xbb204bc1057fde50ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/FollowCartesianTrajectoryGoal";
  }

  static const char* value(const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#The trajectory to follow\n"
"CartesianWaypoint[] trajectory\n"
"duration goal_time_tolerance\n"
"bool use_optimal_blending\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianWaypoint\n"
"\n"
"Pose pose\n"
"uint32 reference_frame\n"
"float32 maximum_linear_velocity\n"
"float32 maximum_angular_velocity\n"
"float32 blending_radius\n"
"================================================================================\n"
"MSG: kortex_driver/Pose\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
;
  }

  static const char* value(const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory);
      stream.next(m.goal_time_tolerance);
      stream.next(m.use_optimal_blending);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowCartesianTrajectoryGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::FollowCartesianTrajectoryGoal_<ContainerAllocator>& v)
  {
    s << indent << "trajectory[]" << std::endl;
    for (size_t i = 0; i < v.trajectory.size(); ++i)
    {
      s << indent << "  trajectory[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.trajectory[i]);
    }
    s << indent << "goal_time_tolerance: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.goal_time_tolerance);
    s << indent << "use_optimal_blending: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_optimal_blending);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_FOLLOWCARTESIANTRAJECTORYGOAL_H