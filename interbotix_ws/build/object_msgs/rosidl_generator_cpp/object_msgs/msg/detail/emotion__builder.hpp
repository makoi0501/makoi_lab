// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__EMOTION__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__EMOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/emotion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_Emotion_roi
{
public:
  explicit Init_Emotion_roi(::object_msgs::msg::Emotion & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::Emotion roi(::object_msgs::msg::Emotion::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::Emotion msg_;
};

class Init_Emotion_emotion
{
public:
  Init_Emotion_emotion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emotion_roi emotion(::object_msgs::msg::Emotion::_emotion_type arg)
  {
    msg_.emotion = std::move(arg);
    return Init_Emotion_roi(msg_);
  }

private:
  ::object_msgs::msg::Emotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::Emotion>()
{
  return object_msgs::msg::builder::Init_Emotion_emotion();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__EMOTION__BUILDER_HPP_
