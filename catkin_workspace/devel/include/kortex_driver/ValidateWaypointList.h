// Generated by gencpp from file kortex_driver/ValidateWaypointList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_VALIDATEWAYPOINTLIST_H
#define KORTEX_DRIVER_MESSAGE_VALIDATEWAYPOINTLIST_H

#include <ros/service_traits.h>


#include <kortex_driver/ValidateWaypointListRequest.h>
#include <kortex_driver/ValidateWaypointListResponse.h>


namespace kortex_driver
{

struct ValidateWaypointList
{

typedef ValidateWaypointListRequest Request;
typedef ValidateWaypointListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ValidateWaypointList
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::ValidateWaypointList > {
  static const char* value()
  {
    return "0b24f0cd37f005fabc6c65bffd727f77";
  }

  static const char* value(const ::kortex_driver::ValidateWaypointList&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::ValidateWaypointList > {
  static const char* value()
  {
    return "kortex_driver/ValidateWaypointList";
  }

  static const char* value(const ::kortex_driver::ValidateWaypointList&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::ValidateWaypointListRequest> should match
// service_traits::MD5Sum< ::kortex_driver::ValidateWaypointList >
template<>
struct MD5Sum< ::kortex_driver::ValidateWaypointListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ValidateWaypointList >::value();
  }
  static const char* value(const ::kortex_driver::ValidateWaypointListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ValidateWaypointListRequest> should match
// service_traits::DataType< ::kortex_driver::ValidateWaypointList >
template<>
struct DataType< ::kortex_driver::ValidateWaypointListRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ValidateWaypointList >::value();
  }
  static const char* value(const ::kortex_driver::ValidateWaypointListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::ValidateWaypointListResponse> should match
// service_traits::MD5Sum< ::kortex_driver::ValidateWaypointList >
template<>
struct MD5Sum< ::kortex_driver::ValidateWaypointListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ValidateWaypointList >::value();
  }
  static const char* value(const ::kortex_driver::ValidateWaypointListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ValidateWaypointListResponse> should match
// service_traits::DataType< ::kortex_driver::ValidateWaypointList >
template<>
struct DataType< ::kortex_driver::ValidateWaypointListResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ValidateWaypointList >::value();
  }
  static const char* value(const ::kortex_driver::ValidateWaypointListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_VALIDATEWAYPOINTLIST_H