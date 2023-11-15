// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_Objects_inference_time_ms
{
public:
  explicit Init_Objects_inference_time_ms(::object_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::Objects inference_time_ms(::object_msgs::msg::Objects::_inference_time_ms_type arg)
  {
    msg_.inference_time_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::Objects msg_;
};

class Init_Objects_objects_vector
{
public:
  explicit Init_Objects_objects_vector(::object_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  Init_Objects_inference_time_ms objects_vector(::object_msgs::msg::Objects::_objects_vector_type arg)
  {
    msg_.objects_vector = std::move(arg);
    return Init_Objects_inference_time_ms(msg_);
  }

private:
  ::object_msgs::msg::Objects msg_;
};

class Init_Objects_image
{
public:
  explicit Init_Objects_image(::object_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  Init_Objects_objects_vector image(::object_msgs::msg::Objects::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_Objects_objects_vector(msg_);
  }

private:
  ::object_msgs::msg::Objects msg_;
};

class Init_Objects_header
{
public:
  Init_Objects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Objects_image header(::object_msgs::msg::Objects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Objects_image(msg_);
  }

private:
  ::object_msgs::msg::Objects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::Objects>()
{
  return object_msgs::msg::builder::Init_Objects_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_
