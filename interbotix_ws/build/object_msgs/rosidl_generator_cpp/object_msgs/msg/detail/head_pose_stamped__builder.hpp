// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/HeadPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/head_pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadPoseStamped_headposes
{
public:
  explicit Init_HeadPoseStamped_headposes(::object_msgs::msg::HeadPoseStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::HeadPoseStamped headposes(::object_msgs::msg::HeadPoseStamped::_headposes_type arg)
  {
    msg_.headposes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::HeadPoseStamped msg_;
};

class Init_HeadPoseStamped_header
{
public:
  Init_HeadPoseStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadPoseStamped_headposes header(::object_msgs::msg::HeadPoseStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HeadPoseStamped_headposes(msg_);
  }

private:
  ::object_msgs::msg::HeadPoseStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::HeadPoseStamped>()
{
  return object_msgs::msg::builder::Init_HeadPoseStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__BUILDER_HPP_
