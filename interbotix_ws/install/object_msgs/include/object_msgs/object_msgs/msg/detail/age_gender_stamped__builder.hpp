// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/AgeGenderStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__AGE_GENDER_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__AGE_GENDER_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/age_gender_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_AgeGenderStamped_objects
{
public:
  explicit Init_AgeGenderStamped_objects(::object_msgs::msg::AgeGenderStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::AgeGenderStamped objects(::object_msgs::msg::AgeGenderStamped::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::AgeGenderStamped msg_;
};

class Init_AgeGenderStamped_header
{
public:
  Init_AgeGenderStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgeGenderStamped_objects header(::object_msgs::msg::AgeGenderStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AgeGenderStamped_objects(msg_);
  }

private:
  ::object_msgs::msg::AgeGenderStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::AgeGenderStamped>()
{
  return object_msgs::msg::builder::Init_AgeGenderStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__AGE_GENDER_STAMPED__BUILDER_HPP_
