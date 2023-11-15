// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ObjectInMask.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_MASK__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/object_in_mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectInMask_mask_array
{
public:
  explicit Init_ObjectInMask_mask_array(::object_msgs::msg::ObjectInMask & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ObjectInMask mask_array(::object_msgs::msg::ObjectInMask::_mask_array_type arg)
  {
    msg_.mask_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ObjectInMask msg_;
};

class Init_ObjectInMask_roi
{
public:
  explicit Init_ObjectInMask_roi(::object_msgs::msg::ObjectInMask & msg)
  : msg_(msg)
  {}
  Init_ObjectInMask_mask_array roi(::object_msgs::msg::ObjectInMask::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_ObjectInMask_mask_array(msg_);
  }

private:
  ::object_msgs::msg::ObjectInMask msg_;
};

class Init_ObjectInMask_probability
{
public:
  explicit Init_ObjectInMask_probability(::object_msgs::msg::ObjectInMask & msg)
  : msg_(msg)
  {}
  Init_ObjectInMask_roi probability(::object_msgs::msg::ObjectInMask::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_ObjectInMask_roi(msg_);
  }

private:
  ::object_msgs::msg::ObjectInMask msg_;
};

class Init_ObjectInMask_object_name
{
public:
  Init_ObjectInMask_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectInMask_probability object_name(::object_msgs::msg::ObjectInMask::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_ObjectInMask_probability(msg_);
  }

private:
  ::object_msgs::msg::ObjectInMask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ObjectInMask>()
{
  return object_msgs::msg::builder::Init_ObjectInMask_object_name();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_MASK__BUILDER_HPP_
