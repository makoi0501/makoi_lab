// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__BUILDER_HPP_
#define GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grasp_msgs/msg/detail/grasp_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grasp_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspConfig_score
{
public:
  explicit Init_GraspConfig_score(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  ::grasp_msgs::msg::GraspConfig score(::grasp_msgs::msg::GraspConfig::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_width
{
public:
  explicit Init_GraspConfig_width(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_score width(::grasp_msgs::msg::GraspConfig::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GraspConfig_score(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_sample
{
public:
  explicit Init_GraspConfig_sample(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_width sample(::grasp_msgs::msg::GraspConfig::_sample_type arg)
  {
    msg_.sample = std::move(arg);
    return Init_GraspConfig_width(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_axis
{
public:
  explicit Init_GraspConfig_axis(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_sample axis(::grasp_msgs::msg::GraspConfig::_axis_type arg)
  {
    msg_.axis = std::move(arg);
    return Init_GraspConfig_sample(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_binormal
{
public:
  explicit Init_GraspConfig_binormal(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_axis binormal(::grasp_msgs::msg::GraspConfig::_binormal_type arg)
  {
    msg_.binormal = std::move(arg);
    return Init_GraspConfig_axis(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_approach
{
public:
  explicit Init_GraspConfig_approach(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_binormal approach(::grasp_msgs::msg::GraspConfig::_approach_type arg)
  {
    msg_.approach = std::move(arg);
    return Init_GraspConfig_binormal(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_surface
{
public:
  explicit Init_GraspConfig_surface(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_approach surface(::grasp_msgs::msg::GraspConfig::_surface_type arg)
  {
    msg_.surface = std::move(arg);
    return Init_GraspConfig_approach(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_top
{
public:
  explicit Init_GraspConfig_top(::grasp_msgs::msg::GraspConfig & msg)
  : msg_(msg)
  {}
  Init_GraspConfig_surface top(::grasp_msgs::msg::GraspConfig::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_GraspConfig_surface(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

class Init_GraspConfig_bottom
{
public:
  Init_GraspConfig_bottom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspConfig_top bottom(::grasp_msgs::msg::GraspConfig::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_GraspConfig_top(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasp_msgs::msg::GraspConfig>()
{
  return grasp_msgs::msg::builder::Init_GraspConfig_bottom();
}

}  // namespace grasp_msgs

#endif  // GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__BUILDER_HPP_
