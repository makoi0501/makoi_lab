// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openvino_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "openvino_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace openvino_msgs
{

namespace msg
{

namespace builder
{

class Init_Connection_output
{
public:
  explicit Init_Connection_output(::openvino_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  ::openvino_msgs::msg::Connection output(::openvino_msgs::msg::Connection::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openvino_msgs::msg::Connection msg_;
};

class Init_Connection_input
{
public:
  Init_Connection_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connection_output input(::openvino_msgs::msg::Connection::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_Connection_output(msg_);
  }

private:
  ::openvino_msgs::msg::Connection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openvino_msgs::msg::Connection>()
{
  return openvino_msgs::msg::builder::Init_Connection_input();
}

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
