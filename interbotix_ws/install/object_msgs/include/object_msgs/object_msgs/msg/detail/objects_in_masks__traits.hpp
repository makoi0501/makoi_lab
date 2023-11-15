// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/ObjectsInMasks.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_MASKS__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_MASKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/objects_in_masks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects_vector'
#include "object_msgs/msg/detail/object_in_mask__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectsInMasks & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: objects_vector
  {
    if (msg.objects_vector.size() == 0) {
      out << "objects_vector: []";
    } else {
      out << "objects_vector: [";
      size_t pending_items = msg.objects_vector.size();
      for (auto item : msg.objects_vector) {
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
  const ObjectsInMasks & msg,
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

  // member: objects_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects_vector.size() == 0) {
      out << "objects_vector: []\n";
    } else {
      out << "objects_vector:\n";
      for (auto item : msg.objects_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectsInMasks & msg, bool use_flow_style = false)
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
  const object_msgs::msg::ObjectsInMasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::ObjectsInMasks & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::ObjectsInMasks>()
{
  return "object_msgs::msg::ObjectsInMasks";
}

template<>
inline const char * name<object_msgs::msg::ObjectsInMasks>()
{
  return "object_msgs/msg/ObjectsInMasks";
}

template<>
struct has_fixed_size<object_msgs::msg::ObjectsInMasks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::ObjectsInMasks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::msg::ObjectsInMasks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_MASKS__TRAITS_HPP_
