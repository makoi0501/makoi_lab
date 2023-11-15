// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ReidentificationStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/reidentification_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ReidentificationStamped_reidentified_vector
{
public:
  explicit Init_ReidentificationStamped_reidentified_vector(::object_msgs::msg::ReidentificationStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ReidentificationStamped reidentified_vector(::object_msgs::msg::ReidentificationStamped::_reidentified_vector_type arg)
  {
    msg_.reidentified_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ReidentificationStamped msg_;
};

class Init_ReidentificationStamped_header
{
public:
  Init_ReidentificationStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReidentificationStamped_reidentified_vector header(::object_msgs::msg::ReidentificationStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReidentificationStamped_reidentified_vector(msg_);
  }

private:
  ::object_msgs::msg::ReidentificationStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ReidentificationStamped>()
{
  return object_msgs::msg::builder::Init_ReidentificationStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION_STAMPED__BUILDER_HPP_
