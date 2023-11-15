// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/HeadPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__HEAD_POSE__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__HEAD_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/head_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HeadPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadPose & msg, bool use_flow_style = false)
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

}  // namespace object_msgs

namespace rosidl_generator_traits
{

[[deprecated("use object_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_msgs::msg::HeadPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::HeadPose & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::HeadPose>()
{
  return "object_msgs::msg::HeadPose";
}

template<>
inline const char * name<object_msgs::msg::HeadPose>()
{
  return "object_msgs/msg/HeadPose";
}

template<>
struct has_fixed_size<object_msgs::msg::HeadPose>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<object_msgs::msg::HeadPose>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<object_msgs::msg::HeadPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__HEAD_POSE__TRAITS_HPP_
