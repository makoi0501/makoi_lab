// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/ReidentificationStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION_STAMPED__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/reidentification_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reidentified_vector'
#include "object_msgs/msg/detail/reidentification__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReidentificationStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: reidentified_vector
  {
    if (msg.reidentified_vector.size() == 0) {
      out << "reidentified_vector: []";
    } else {
      out << "reidentified_vector: [";
      size_t pending_items = msg.reidentified_vector.size();
      for (auto item : msg.reidentified_vector) {
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
  const ReidentificationStamped & msg,
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

  // member: reidentified_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reidentified_vector.size() == 0) {
      out << "reidentified_vector: []\n";
    } else {
      out << "reidentified_vector:\n";
      for (auto item : msg.reidentified_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReidentificationStamped & msg, bool use_flow_style = false)
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
  const object_msgs::msg::ReidentificationStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::ReidentificationStamped & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::ReidentificationStamped>()
{
  return "object_msgs::msg::ReidentificationStamped";
}

template<>
inline const char * name<object_msgs::msg::ReidentificationStamped>()
{
  return "object_msgs/msg/ReidentificationStamped";
}

template<>
struct has_fixed_size<object_msgs::msg::ReidentificationStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::ReidentificationStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::msg::ReidentificationStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__REIDENTIFICATION_STAMPED__TRAITS_HPP_
