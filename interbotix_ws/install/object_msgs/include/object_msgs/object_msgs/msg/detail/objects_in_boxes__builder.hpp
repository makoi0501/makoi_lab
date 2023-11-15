// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ObjectsInBoxes.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/objects_in_boxes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectsInBoxes_inference_time_ms
{
public:
  explicit Init_ObjectsInBoxes_inference_time_ms(::object_msgs::msg::ObjectsInBoxes & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ObjectsInBoxes inference_time_ms(::object_msgs::msg::ObjectsInBoxes::_inference_time_ms_type arg)
  {
    msg_.inference_time_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInBoxes msg_;
};

class Init_ObjectsInBoxes_objects_vector
{
public:
  explicit Init_ObjectsInBoxes_objects_vector(::object_msgs::msg::ObjectsInBoxes & msg)
  : msg_(msg)
  {}
  Init_ObjectsInBoxes_inference_time_ms objects_vector(::object_msgs::msg::ObjectsInBoxes::_objects_vector_type arg)
  {
    msg_.objects_vector = std::move(arg);
    return Init_ObjectsInBoxes_inference_time_ms(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInBoxes msg_;
};

class Init_ObjectsInBoxes_image
{
public:
  explicit Init_ObjectsInBoxes_image(::object_msgs::msg::ObjectsInBoxes & msg)
  : msg_(msg)
  {}
  Init_ObjectsInBoxes_objects_vector image(::object_msgs::msg::ObjectsInBoxes::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_ObjectsInBoxes_objects_vector(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInBoxes msg_;
};

class Init_ObjectsInBoxes_header
{
public:
  Init_ObjectsInBoxes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectsInBoxes_image header(::object_msgs::msg::ObjectsInBoxes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectsInBoxes_image(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInBoxes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ObjectsInBoxes>()
{
  return object_msgs::msg::builder::Init_ObjectsInBoxes_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__BUILDER_HPP_
