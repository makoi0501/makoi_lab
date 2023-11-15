// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ObjectsInMasks.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_MASKS__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_MASKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/objects_in_masks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectsInMasks_objects_vector
{
public:
  explicit Init_ObjectsInMasks_objects_vector(::object_msgs::msg::ObjectsInMasks & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ObjectsInMasks objects_vector(::object_msgs::msg::ObjectsInMasks::_objects_vector_type arg)
  {
    msg_.objects_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInMasks msg_;
};

class Init_ObjectsInMasks_header
{
public:
  Init_ObjectsInMasks_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectsInMasks_objects_vector header(::object_msgs::msg::ObjectsInMasks::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectsInMasks_objects_vector(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInMasks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ObjectsInMasks>()
{
  return object_msgs::msg::builder::Init_ObjectsInMasks_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_MASKS__BUILDER_HPP_
