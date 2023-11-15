// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/PersonAttributeStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/person_attribute_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonAttributeStamped_attributes
{
public:
  explicit Init_PersonAttributeStamped_attributes(::object_msgs::msg::PersonAttributeStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::PersonAttributeStamped attributes(::object_msgs::msg::PersonAttributeStamped::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::PersonAttributeStamped msg_;
};

class Init_PersonAttributeStamped_header
{
public:
  Init_PersonAttributeStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonAttributeStamped_attributes header(::object_msgs::msg::PersonAttributeStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PersonAttributeStamped_attributes(msg_);
  }

private:
  ::object_msgs::msg::PersonAttributeStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::PersonAttributeStamped>()
{
  return object_msgs::msg::builder::Init_PersonAttributeStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE_STAMPED__BUILDER_HPP_
