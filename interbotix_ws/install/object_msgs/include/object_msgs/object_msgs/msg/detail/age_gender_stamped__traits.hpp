// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/AgeGenderStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__AGE_GENDER_STAMPED__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__AGE_GENDER_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/age_gender_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects'
#include "object_msgs/msg/detail/age_gender__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgeGenderStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
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
  const AgeGenderStamped & msg,
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

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgeGenderStamped & msg, bool use_flow_style = false)
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
  const object_msgs::msg::AgeGenderStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::AgeGenderStamped & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::AgeGenderStamped>()
{
  return "object_msgs::msg::AgeGenderStamped";
}

template<>
inline const char * name<object_msgs::msg::AgeGenderStamped>()
{
  return "object_msgs/msg/AgeGenderStamped";
}

template<>
struct has_fixed_size<object_msgs::msg::AgeGenderStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::AgeGenderStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::msg::AgeGenderStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__AGE_GENDER_STAMPED__TRAITS_HPP_
