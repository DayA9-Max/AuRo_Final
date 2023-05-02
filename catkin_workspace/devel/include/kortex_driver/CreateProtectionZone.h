// Generated by gencpp from file kortex_driver/CreateProtectionZone.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CREATEPROTECTIONZONE_H
#define KORTEX_DRIVER_MESSAGE_CREATEPROTECTIONZONE_H

#include <ros/service_traits.h>


#include <kortex_driver/CreateProtectionZoneRequest.h>
#include <kortex_driver/CreateProtectionZoneResponse.h>


namespace kortex_driver
{

struct CreateProtectionZone
{

typedef CreateProtectionZoneRequest Request;
typedef CreateProtectionZoneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CreateProtectionZone
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::CreateProtectionZone > {
  static const char* value()
  {
    return "e5380d610764b507278413b8ea5bd27f";
  }

  static const char* value(const ::kortex_driver::CreateProtectionZone&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::CreateProtectionZone > {
  static const char* value()
  {
    return "kortex_driver/CreateProtectionZone";
  }

  static const char* value(const ::kortex_driver::CreateProtectionZone&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::CreateProtectionZoneRequest> should match
// service_traits::MD5Sum< ::kortex_driver::CreateProtectionZone >
template<>
struct MD5Sum< ::kortex_driver::CreateProtectionZoneRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::CreateProtectionZone >::value();
  }
  static const char* value(const ::kortex_driver::CreateProtectionZoneRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::CreateProtectionZoneRequest> should match
// service_traits::DataType< ::kortex_driver::CreateProtectionZone >
template<>
struct DataType< ::kortex_driver::CreateProtectionZoneRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::CreateProtectionZone >::value();
  }
  static const char* value(const ::kortex_driver::CreateProtectionZoneRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::CreateProtectionZoneResponse> should match
// service_traits::MD5Sum< ::kortex_driver::CreateProtectionZone >
template<>
struct MD5Sum< ::kortex_driver::CreateProtectionZoneResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::CreateProtectionZone >::value();
  }
  static const char* value(const ::kortex_driver::CreateProtectionZoneResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::CreateProtectionZoneResponse> should match
// service_traits::DataType< ::kortex_driver::CreateProtectionZone >
template<>
struct DataType< ::kortex_driver::CreateProtectionZoneResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::CreateProtectionZone >::value();
  }
  static const char* value(const ::kortex_driver::CreateProtectionZoneResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CREATEPROTECTIONZONE_H