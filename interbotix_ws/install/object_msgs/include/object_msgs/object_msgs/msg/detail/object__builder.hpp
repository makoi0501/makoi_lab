// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_probability
{
public:
  explicit Init_Object_probability(::object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::Object probability(::object_msgs::msg::Object::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::Object msg_;
};

class Init_Object_object_name
{
public:
  Init_Object_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_probability object_name(::object_msgs::msg::Object::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_Object_probability(msg_);
  }

private:
  ::object_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::Object>()
{
  return object_msgs::msg::builder::Init_Object_object_name();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
