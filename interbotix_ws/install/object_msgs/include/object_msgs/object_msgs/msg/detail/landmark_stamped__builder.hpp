// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/LandmarkStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__LANDMARK_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__LANDMARK_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/landmark_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_LandmarkStamped_landmarks
{
public:
  explicit Init_LandmarkStamped_landmarks(::object_msgs::msg::LandmarkStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::LandmarkStamped landmarks(::object_msgs::msg::LandmarkStamped::_landmarks_type arg)
  {
    msg_.landmarks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::LandmarkStamped msg_;
};

class Init_LandmarkStamped_header
{
public:
  Init_LandmarkStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandmarkStamped_landmarks header(::object_msgs::msg::LandmarkStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LandmarkStamped_landmarks(msg_);
  }

private:
  ::object_msgs::msg::LandmarkStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::LandmarkStamped>()
{
  return object_msgs::msg::builder::Init_LandmarkStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__LANDMARK_STAMPED__BUILDER_HPP_
