// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/PersonAttribute.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/person_attribute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonAttribute_roi
{
public:
  explicit Init_PersonAttribute_roi(::object_msgs::msg::PersonAttribute & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::PersonAttribute roi(::object_msgs::msg::PersonAttribute::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::PersonAttribute msg_;
};

class Init_PersonAttribute_attribute
{
public:
  Init_PersonAttribute_attribute()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonAttribute_roi attribute(::object_msgs::msg::PersonAttribute::_attribute_type arg)
  {
    msg_.attribute = std::move(arg);
    return Init_PersonAttribute_roi(msg_);
  }

private:
  ::object_msgs::msg::PersonAttribute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::PersonAttribute>()
{
  return object_msgs::msg::builder::Init_PersonAttribute_attribute();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE__BUILDER_HPP_
