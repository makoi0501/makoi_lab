// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/HeadPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__HEAD_POSE__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__HEAD_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/head_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadPose_roi
{
public:
  explicit Init_HeadPose_roi(::object_msgs::msg::HeadPose & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::HeadPose roi(::object_msgs::msg::HeadPose::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::HeadPose msg_;
};

class Init_HeadPose_roll
{
public:
  explicit Init_HeadPose_roll(::object_msgs::msg::HeadPose & msg)
  : msg_(msg)
  {}
  Init_HeadPose_roi roll(::object_msgs::msg::HeadPose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_HeadPose_roi(msg_);
  }

private:
  ::object_msgs::msg::HeadPose msg_;
};

class Init_HeadPose_pitch
{
public:
  explicit Init_HeadPose_pitch(::object_msgs::msg::HeadPose & msg)
  : msg_(msg)
  {}
  Init_HeadPose_roll pitch(::object_msgs::msg::HeadPose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HeadPose_roll(msg_);
  }

private:
  ::object_msgs::msg::HeadPose msg_;
};

class Init_HeadPose_yaw
{
public:
  Init_HeadPose_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadPose_pitch yaw(::object_msgs::msg::HeadPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HeadPose_pitch(msg_);
  }

private:
  ::object_msgs::msg::HeadPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::HeadPose>()
{
  return object_msgs::msg::builder::Init_HeadPose_yaw();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__HEAD_POSE__BUILDER_HPP_
