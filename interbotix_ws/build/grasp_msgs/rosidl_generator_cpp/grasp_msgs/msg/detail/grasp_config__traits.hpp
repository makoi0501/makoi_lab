// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__TRAITS_HPP_
#define GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "grasp_msgs/msg/detail/grasp_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bottom'
// Member 'top'
// Member 'surface'
// Member 'sample'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'approach'
// Member 'binormal'
// Member 'axis'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'width'
// Member 'score'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace grasp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraspConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: bottom
  {
    out << "bottom: ";
    to_flow_style_yaml(msg.bottom, out);
    out << ", ";
  }

  // member: top
  {
    out << "top: ";
    to_flow_style_yaml(msg.top, out);
    out << ", ";
  }

  // member: surface
  {
    out << "surface: ";
    to_flow_style_yaml(msg.surface, out);
    out << ", ";
  }

  // member: approach
  {
    out << "approach: ";
    to_flow_style_yaml(msg.approach, out);
    out << ", ";
  }

  // member: binormal
  {
    out << "binormal: ";
    to_flow_style_yaml(msg.binormal, out);
    out << ", ";
  }

  // member: axis
  {
    out << "axis: ";
    to_flow_style_yaml(msg.axis, out);
    out << ", ";
  }

  // member: sample
  {
    out << "sample: ";
    to_flow_style_yaml(msg.sample, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    to_flow_style_yaml(msg.width, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    to_flow_style_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraspConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom:\n";
    to_block_style_yaml(msg.bottom, out, indentation + 2);
  }

  // member: top
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top:\n";
    to_block_style_yaml(msg.top, out, indentation + 2);
  }

  // member: surface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surface:\n";
    to_block_style_yaml(msg.surface, out, indentation + 2);
  }

  // member: approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approach:\n";
    to_block_style_yaml(msg.approach, out, indentation + 2);
  }

  // member: binormal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "binormal:\n";
    to_block_style_yaml(msg.binormal, out, indentation + 2);
  }

  // member: axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis:\n";
    to_block_style_yaml(msg.axis, out, indentation + 2);
  }

  // member: sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample:\n";
    to_block_style_yaml(msg.sample, out, indentation + 2);
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width:\n";
    to_block_style_yaml(msg.width, out, indentation + 2);
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score:\n";
    to_block_style_yaml(msg.score, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraspConfig & msg, bool use_flow_style = false)
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

}  // namespace grasp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use grasp_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grasp_msgs::msg::GraspConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  grasp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grasp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const grasp_msgs::msg::GraspConfig & msg)
{
  return grasp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<grasp_msgs::msg::GraspConfig>()
{
  return "grasp_msgs::msg::GraspConfig";
}

template<>
inline const char * name<grasp_msgs::msg::GraspConfig>()
{
  return "grasp_msgs/msg/GraspConfig";
}

template<>
struct has_fixed_size<grasp_msgs::msg::GraspConfig>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Float32>::value> {};

template<>
struct has_bounded_size<grasp_msgs::msg::GraspConfig>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Float32>::value> {};

template<>
struct is_message<grasp_msgs::msg::GraspConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__TRAITS_HPP_
