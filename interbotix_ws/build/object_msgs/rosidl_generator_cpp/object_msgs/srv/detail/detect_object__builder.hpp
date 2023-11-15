// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__DETECT_OBJECT__BUILDER_HPP_
#define OBJECT_MSGS__SRV__DETAIL__DETECT_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/srv/detail/detect_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectObject_Request_image_path
{
public:
  Init_DetectObject_Request_image_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::DetectObject_Request image_path(::object_msgs::srv::DetectObject_Request::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::DetectObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::DetectObject_Request>()
{
  return object_msgs::srv::builder::Init_DetectObject_Request_image_path();
}

}  // namespace object_msgs


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectObject_Response_objects
{
public:
  Init_DetectObject_Response_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::DetectObject_Response objects(::object_msgs::srv::DetectObject_Response::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::DetectObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::DetectObject_Response>()
{
  return object_msgs::srv::builder::Init_DetectObject_Response_objects();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__SRV__DETAIL__DETECT_OBJECT__BUILDER_HPP_
