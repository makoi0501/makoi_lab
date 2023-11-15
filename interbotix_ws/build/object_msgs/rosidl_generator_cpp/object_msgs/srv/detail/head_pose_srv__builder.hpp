// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:srv/HeadPoseSrv.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__HEAD_POSE_SRV__BUILDER_HPP_
#define OBJECT_MSGS__SRV__DETAIL__HEAD_POSE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/srv/detail/head_pose_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_HeadPoseSrv_Request_image_path
{
public:
  Init_HeadPoseSrv_Request_image_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::HeadPoseSrv_Request image_path(::object_msgs::srv::HeadPoseSrv_Request::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::HeadPoseSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::HeadPoseSrv_Request>()
{
  return object_msgs::srv::builder::Init_HeadPoseSrv_Request_image_path();
}

}  // namespace object_msgs


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_HeadPoseSrv_Response_headpose
{
public:
  Init_HeadPoseSrv_Response_headpose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::HeadPoseSrv_Response headpose(::object_msgs::srv::HeadPoseSrv_Response::_headpose_type arg)
  {
    msg_.headpose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::HeadPoseSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::HeadPoseSrv_Response>()
{
  return object_msgs::srv::builder::Init_HeadPoseSrv_Response_headpose();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__SRV__DETAIL__HEAD_POSE_SRV__BUILDER_HPP_
