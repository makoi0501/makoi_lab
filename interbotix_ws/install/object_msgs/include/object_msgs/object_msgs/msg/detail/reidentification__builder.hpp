// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/Reidentification.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/reidentification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_Reidentification_roi
{
public:
  explicit Init_Reidentification_roi(::object_msgs::msg::Reidentification & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::Reidentification roi(::object_msgs::msg::Reidentification::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::Reidentification msg_;
};

class Init_Reidentification_identity
{
public:
  Init_Reidentification_identity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reidentification_roi identity(::object_msgs::msg::Reidentification::_identity_type arg)
  {
    msg_.identity = std::move(arg);
    return Init_Reidentification_roi(msg_);
  }

private:
  ::object_msgs::msg::Reidentification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::Reidentification>()
{
  return object_msgs::msg::builder::Init_Reidentification_identity();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION__BUILDER_HPP_
