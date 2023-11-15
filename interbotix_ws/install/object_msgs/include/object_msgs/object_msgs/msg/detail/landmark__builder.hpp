// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/Landmark.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__LANDMARK__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__LANDMARK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/landmark__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_Landmark_roi
{
public:
  explicit Init_Landmark_roi(::object_msgs::msg::Landmark & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::Landmark roi(::object_msgs::msg::Landmark::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::Landmark msg_;
};

class Init_Landmark_landmark_points
{
public:
  Init_Landmark_landmark_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Landmark_roi landmark_points(::object_msgs::msg::Landmark::_landmark_points_type arg)
  {
    msg_.landmark_points = std::move(arg);
    return Init_Landmark_roi(msg_);
  }

private:
  ::object_msgs::msg::Landmark msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::Landmark>()
{
  return object_msgs::msg::builder::Init_Landmark_landmark_points();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__LANDMARK__BUILDER_HPP_
