// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openvino_msgs:msg/PipelineRequest.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__BUILDER_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "openvino_msgs/msg/detail/pipeline_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace openvino_msgs
{

namespace msg
{

namespace builder
{

class Init_PipelineRequest_value
{
public:
  explicit Init_PipelineRequest_value(::openvino_msgs::msg::PipelineRequest & msg)
  : msg_(msg)
  {}
  ::openvino_msgs::msg::PipelineRequest value(::openvino_msgs::msg::PipelineRequest::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openvino_msgs::msg::PipelineRequest msg_;
};

class Init_PipelineRequest_cmd
{
public:
  explicit Init_PipelineRequest_cmd(::openvino_msgs::msg::PipelineRequest & msg)
  : msg_(msg)
  {}
  Init_PipelineRequest_value cmd(::openvino_msgs::msg::PipelineRequest::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_PipelineRequest_value(msg_);
  }

private:
  ::openvino_msgs::msg::PipelineRequest msg_;
};

class Init_PipelineRequest_header
{
public:
  Init_PipelineRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PipelineRequest_cmd header(::openvino_msgs::msg::PipelineRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PipelineRequest_cmd(msg_);
  }

private:
  ::openvino_msgs::msg::PipelineRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openvino_msgs::msg::PipelineRequest>()
{
  return openvino_msgs::msg::builder::Init_PipelineRequest_header();
}

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__BUILDER_HPP_
