// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:srv/EmotionSrv.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__EMOTION_SRV__BUILDER_HPP_
#define OBJECT_MSGS__SRV__DETAIL__EMOTION_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/srv/detail/emotion_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_EmotionSrv_Request_image_path
{
public:
  Init_EmotionSrv_Request_image_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::EmotionSrv_Request image_path(::object_msgs::srv::EmotionSrv_Request::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::EmotionSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::EmotionSrv_Request>()
{
  return object_msgs::srv::builder::Init_EmotionSrv_Request_image_path();
}

}  // namespace object_msgs


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_EmotionSrv_Response_emotion
{
public:
  Init_EmotionSrv_Response_emotion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::EmotionSrv_Response emotion(::object_msgs::srv::EmotionSrv_Response::_emotion_type arg)
  {
    msg_.emotion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::EmotionSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::EmotionSrv_Response>()
{
  return object_msgs::srv::builder::Init_EmotionSrv_Response_emotion();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__SRV__DETAIL__EMOTION_SRV__BUILDER_HPP_
