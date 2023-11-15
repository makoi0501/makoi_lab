// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openvino_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "openvino_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace openvino_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Connection & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << ", ";
  }

  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << "\n";
  }

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Connection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace openvino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use openvino_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openvino_msgs::msg::Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  openvino_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openvino_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const openvino_msgs::msg::Connection & msg)
{
  return openvino_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<openvino_msgs::msg::Connection>()
{
  return "openvino_msgs::msg::Connection";
}

template<>
inline const char * name<openvino_msgs::msg::Connection>()
{
  return "openvino_msgs/msg/Connection";
}

template<>
struct has_fixed_size<openvino_msgs::msg::Connection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openvino_msgs::msg::Connection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openvino_msgs::msg::Connection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENVINO_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
