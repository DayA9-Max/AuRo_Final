// Generated by gencpp from file kortex_driver/PlayPreComputedJointTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_PLAYPRECOMPUTEDJOINTTRAJECTORYREQUEST_H
#define KORTEX_DRIVER_MESSAGE_PLAYPRECOMPUTEDJOINTTRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/PreComputedJointTrajectory.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct PlayPreComputedJointTrajectoryRequest_
{
  typedef PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> Type;

  PlayPreComputedJointTrajectoryRequest_()
    : input()  {
    }
  PlayPreComputedJointTrajectoryRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::PreComputedJointTrajectory_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlayPreComputedJointTrajectoryRequest_

typedef ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<std::allocator<void> > PlayPreComputedJointTrajectoryRequest;

typedef boost::shared_ptr< ::kortex_driver::PlayPreComputedJointTrajectoryRequest > PlayPreComputedJointTrajectoryRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::PlayPreComputedJointTrajectoryRequest const> PlayPreComputedJointTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aeae20ca1c0bda9416421b8eed245ccd";
  }

  static const char* value(const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaeae20ca1c0bda94ULL;
  static const uint64_t static_value2 = 0x16421b8eed245ccdULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/PlayPreComputedJointTrajectoryRequest";
  }

  static const char* value(const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PreComputedJointTrajectory input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/PreComputedJointTrajectory\n"
"\n"
"uint32 mode\n"
"PreComputedJointTrajectoryElement[] trajectory_elements\n"
"================================================================================\n"
"MSG: kortex_driver/PreComputedJointTrajectoryElement\n"
"\n"
"float32[] joint_angles\n"
"float32[] joint_speeds\n"
"float32[] joint_accelerations\n"
"float32 time_from_start\n"
;
  }

  static const char* value(const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlayPreComputedJointTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::PlayPreComputedJointTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::PreComputedJointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_PLAYPRECOMPUTEDJOINTTRAJECTORYREQUEST_H