// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/EmotionsStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__EMOTIONS_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__EMOTIONS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/emotions_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_EmotionsStamped_emotions
{
public:
  explicit Init_EmotionsStamped_emotions(::object_msgs::msg::EmotionsStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::EmotionsStamped emotions(::object_msgs::msg::EmotionsStamped::_emotions_type arg)
  {
    msg_.emotions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::EmotionsStamped msg_;
};

class Init_EmotionsStamped_header
{
public:
  Init_EmotionsStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmotionsStamped_emotions header(::object_msgs::msg::EmotionsStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EmotionsStamped_emotions(msg_);
  }

private:
  ::object_msgs::msg::EmotionsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::EmotionsStamped>()
{
  return object_msgs::msg::builder::Init_EmotionsStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__EMOTIONS_STAMPED__BUILDER_HPP_
