// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__BUILDER_HPP_
#define GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grasp_msgs/msg/detail/samples_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grasp_msgs
{

namespace msg
{

namespace builder
{

class Init_SamplesMsg_samples
{
public:
  explicit Init_SamplesMsg_samples(::grasp_msgs::msg::SamplesMsg & msg)
  : msg_(msg)
  {}
  ::grasp_msgs::msg::SamplesMsg samples(::grasp_msgs::msg::SamplesMsg::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasp_msgs::msg::SamplesMsg msg_;
};

class Init_SamplesMsg_header
{
public:
  Init_SamplesMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SamplesMsg_samples header(::grasp_msgs::msg::SamplesMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SamplesMsg_samples(msg_);
  }

private:
  ::grasp_msgs::msg::SamplesMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasp_msgs::msg::SamplesMsg>()
{
  return grasp_msgs::msg::builder::Init_SamplesMsg_header();
}

}  // namespace grasp_msgs

#endif  // GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__BUILDER_HPP_
