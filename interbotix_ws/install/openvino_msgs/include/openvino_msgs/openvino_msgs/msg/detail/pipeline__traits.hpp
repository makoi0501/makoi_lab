// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openvino_msgs:msg/Pipeline.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE__TRAITS_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "openvino_msgs/msg/detail/pipeline__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'connections'
#include "openvino_msgs/msg/detail/connection__traits.hpp"

namespace openvino_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pipeline & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: connections
  {
    if (msg.connections.size() == 0) {
      out << "connections: []";
    } else {
      out << "connections: [";
      size_t pending_items = msg.connections.size();
      for (auto item : msg.connections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: running_status
  {
    out << "running_status: ";
    rosidl_generator_traits::value_to_yaml(msg.running_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pipeline & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: connections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connections.size() == 0) {
      out << "connections: []\n";
    } else {
      out << "connections:\n";
      for (auto item : msg.connections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: running_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "running_status: ";
    rosidl_generator_traits::value_to_yaml(msg.running_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pipeline & msg, bool use_flow_style = false)
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
  const openvino_msgs::msg::Pipeline & msg,
  std::ostream & out, size_t indentation = 0)
{
  openvino_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openvino_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const openvino_msgs::msg::Pipeline & msg)
{
  return openvino_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<openvino_msgs::msg::Pipeline>()
{
  return "openvino_msgs::msg::Pipeline";
}

template<>
inline const char * name<openvino_msgs::msg::Pipeline>()
{
  return "openvino_msgs/msg/Pipeline";
}

template<>
struct has_fixed_size<openvino_msgs::msg::Pipeline>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openvino_msgs::msg::Pipeline>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openvino_msgs::msg::Pipeline>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE__TRAITS_HPP_
