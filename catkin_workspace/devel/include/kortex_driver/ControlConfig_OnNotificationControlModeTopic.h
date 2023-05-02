// Generated by gencpp from file kortex_driver/ControlConfig_OnNotificationControlModeTopic.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CONTROLCONFIG_ONNOTIFICATIONCONTROLMODETOPIC_H
#define KORTEX_DRIVER_MESSAGE_CONTROLCONFIG_ONNOTIFICATIONCONTROLMODETOPIC_H

#include <ros/service_traits.h>


#include <kortex_driver/ControlConfig_OnNotificationControlModeTopicRequest.h>
#include <kortex_driver/ControlConfig_OnNotificationControlModeTopicResponse.h>


namespace kortex_driver
{

struct ControlConfig_OnNotificationControlModeTopic
{

typedef ControlConfig_OnNotificationControlModeTopicRequest Request;
typedef ControlConfig_OnNotificationControlModeTopicResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ControlConfig_OnNotificationControlModeTopic
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic > {
  static const char* value()
  {
    return "6fefdd07c6cb63a94f7b48e7e07e815b";
  }

  static const char* value(const ::kortex_driver::ControlConfig_OnNotificationControlModeTopic&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic > {
  static const char* value()
  {
    return "kortex_driver/ControlConfig_OnNotificationControlModeTopic";
  }

  static const char* value(const ::kortex_driver::ControlConfig_OnNotificationControlModeTopic&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicRequest> should match
// service_traits::MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >
template<>
struct MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::ControlConfig_OnNotificationControlModeTopicRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicRequest> should match
// service_traits::DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >
template<>
struct DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::ControlConfig_OnNotificationControlModeTopicRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicResponse> should match
// service_traits::MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >
template<>
struct MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::ControlConfig_OnNotificationControlModeTopicResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicResponse> should match
// service_traits::DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >
template<>
struct DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopicResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ControlConfig_OnNotificationControlModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::ControlConfig_OnNotificationControlModeTopicResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CONTROLCONFIG_ONNOTIFICATIONCONTROLMODETOPIC_H