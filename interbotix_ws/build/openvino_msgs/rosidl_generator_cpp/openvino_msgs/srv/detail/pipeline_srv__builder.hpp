// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__BUILDER_HPP_
#define OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "openvino_msgs/srv/detail/pipeline_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace openvino_msgs
{

namespace srv
{

namespace builder
{

class Init_PipelineSrv_Request_pipeline_request
{
public:
  Init_PipelineSrv_Request_pipeline_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::openvino_msgs::srv::PipelineSrv_Request pipeline_request(::openvino_msgs::srv::PipelineSrv_Request::_pipeline_request_type arg)
  {
    msg_.pipeline_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openvino_msgs::srv::PipelineSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::openvino_msgs::srv::PipelineSrv_Request>()
{
  return openvino_msgs::srv::builder::Init_PipelineSrv_Request_pipeline_request();
}

}  // namespace openvino_msgs


namespace openvino_msgs
{

namespace srv
{

namespace builder
{

class Init_PipelineSrv_Response_pipelines
{
public:
  Init_PipelineSrv_Response_pipelines()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::openvino_msgs::srv::PipelineSrv_Response pipelines(::openvino_msgs::srv::PipelineSrv_Response::_pipelines_type arg)
  {
    msg_.pipelines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openvino_msgs::srv::PipelineSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::openvino_msgs::srv::PipelineSrv_Response>()
{
  return openvino_msgs::srv::builder::Init_PipelineSrv_Response_pipelines();
}

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__BUILDER_HPP_
