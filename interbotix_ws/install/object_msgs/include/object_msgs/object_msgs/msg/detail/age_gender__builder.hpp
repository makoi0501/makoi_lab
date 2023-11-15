// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/AgeGender.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__AGE_GENDER__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__AGE_GENDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/age_gender__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_AgeGender_roi
{
public:
  explicit Init_AgeGender_roi(::object_msgs::msg::AgeGender & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::AgeGender roi(::object_msgs::msg::AgeGender::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::AgeGender msg_;
};

class Init_AgeGender_gender_confidence
{
public:
  explicit Init_AgeGender_gender_confidence(::object_msgs::msg::AgeGender & msg)
  : msg_(msg)
  {}
  Init_AgeGender_roi gender_confidence(::object_msgs::msg::AgeGender::_gender_confidence_type arg)
  {
    msg_.gender_confidence = std::move(arg);
    return Init_AgeGender_roi(msg_);
  }

private:
  ::object_msgs::msg::AgeGender msg_;
};

class Init_AgeGender_gender
{
public:
  explicit Init_AgeGender_gender(::object_msgs::msg::AgeGender & msg)
  : msg_(msg)
  {}
  Init_AgeGender_gender_confidence gender(::object_msgs::msg::AgeGender::_gender_type arg)
  {
    msg_.gender = std::move(arg);
    return Init_AgeGender_gender_confidence(msg_);
  }

private:
  ::object_msgs::msg::AgeGender msg_;
};

class Init_AgeGender_age
{
public:
  Init_AgeGender_age()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgeGender_gender age(::object_msgs::msg::AgeGender::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_AgeGender_gender(msg_);
  }

private:
  ::object_msgs::msg::AgeGender msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::AgeGender>()
{
  return object_msgs::msg::builder::Init_AgeGender_age();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__AGE_GENDER__BUILDER_HPP_
