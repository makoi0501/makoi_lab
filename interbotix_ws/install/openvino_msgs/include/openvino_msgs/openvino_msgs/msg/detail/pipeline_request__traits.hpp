// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openvino_msgs:msg/PipelineRequest.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__TRAITS_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "openvino_msgs/msg/detail/pipeline_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace openvino_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PipelineRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PipelineRequest & msg,
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

  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PipelineRequest & msg, bool use_flow_style = false)
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
  const openvino_msgs::msg::PipelineRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  openvino_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openvino_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const openvino_msgs::msg::PipelineRequest & msg)
{
  return openvino_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<openvino_msgs::msg::PipelineRequest>()
{
  return "openvino_msgs::msg::PipelineRequest";
}

template<>
inline const char * name<openvino_msgs::msg::PipelineRequest>()
{
  return "openvino_msgs/msg/PipelineRequest";
}

template<>
struct has_fixed_size<openvino_msgs::msg::PipelineRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openvino_msgs::msg::PipelineRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openvino_msgs::msg::PipelineRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__TRAITS_HPP_
