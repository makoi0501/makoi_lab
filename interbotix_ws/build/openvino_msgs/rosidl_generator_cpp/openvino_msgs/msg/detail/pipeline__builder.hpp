// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openvino_msgs:msg/Pipeline.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE__BUILDER_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "openvino_msgs/msg/detail/pipeline__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace openvino_msgs
{

namespace msg
{

namespace builder
{

class Init_Pipeline_running_status
{
public:
  explicit Init_Pipeline_running_status(::openvino_msgs::msg::Pipeline & msg)
  : msg_(msg)
  {}
  ::openvino_msgs::msg::Pipeline running_status(::openvino_msgs::msg::Pipeline::_running_status_type arg)
  {
    msg_.running_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openvino_msgs::msg::Pipeline msg_;
};

class Init_Pipeline_connections
{
public:
  explicit Init_Pipeline_connections(::openvino_msgs::msg::Pipeline & msg)
  : msg_(msg)
  {}
  Init_Pipeline_running_status connections(::openvino_msgs::msg::Pipeline::_connections_type arg)
  {
    msg_.connections = std::move(arg);
    return Init_Pipeline_running_status(msg_);
  }

private:
  ::openvino_msgs::msg::Pipeline msg_;
};

class Init_Pipeline_name
{
public:
  explicit Init_Pipeline_name(::openvino_msgs::msg::Pipeline & msg)
  : msg_(msg)
  {}
  Init_Pipeline_connections name(::openvino_msgs::msg::Pipeline::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Pipeline_connections(msg_);
  }

private:
  ::openvino_msgs::msg::Pipeline msg_;
};

class Init_Pipeline_header
{
public:
  Init_Pipeline_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pipeline_name header(::openvino_msgs::msg::Pipeline::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Pipeline_name(msg_);
  }

private:
  ::openvino_msgs::msg::Pipeline msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openvino_msgs::msg::Pipeline>()
{
  return openvino_msgs::msg::builder::Init_Pipeline_header();
}

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE__BUILDER_HPP_
