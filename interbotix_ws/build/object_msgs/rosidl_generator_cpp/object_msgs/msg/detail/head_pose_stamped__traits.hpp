// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/HeadPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/head_pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'headposes'
#include "object_msgs/msg/detail/head_pose__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HeadPoseStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: headposes
  {
    if (msg.headposes.size() == 0) {
      out << "headposes: []";
    } else {
      out << "headposes: [";
      size_t pending_items = msg.headposes.size();
      for (auto item : msg.headposes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadPoseStamped & msg,
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

  // member: headposes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.headposes.size() == 0) {
      out << "headposes: []\n";
    } else {
      out << "headposes:\n";
      for (auto item : msg.headposes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadPoseStamped & msg, bool use_flow_style = false)
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
  const object_msgs::msg::HeadPoseStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::HeadPoseStamped & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::HeadPoseStamped>()
{
  return "object_msgs::msg::HeadPoseStamped";
}

template<>
inline const char * name<object_msgs::msg::HeadPoseStamped>()
{
  return "object_msgs/msg/HeadPoseStamped";
}

template<>
struct has_fixed_size<object_msgs::msg::HeadPoseStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::HeadPoseStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::msg::HeadPoseStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__TRAITS_HPP_
