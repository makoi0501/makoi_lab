// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ObjectInBox.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/object_in_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectInBox_roi
{
public:
  explicit Init_ObjectInBox_roi(::object_msgs::msg::ObjectInBox & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ObjectInBox roi(::object_msgs::msg::ObjectInBox::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ObjectInBox msg_;
};

class Init_ObjectInBox_object
{
public:
  Init_ObjectInBox_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectInBox_roi object(::object_msgs::msg::ObjectInBox::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_ObjectInBox_roi(msg_);
  }

private:
  ::object_msgs::msg::ObjectInBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ObjectInBox>()
{
  return object_msgs::msg::builder::Init_ObjectInBox_object();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX__BUILDER_HPP_
