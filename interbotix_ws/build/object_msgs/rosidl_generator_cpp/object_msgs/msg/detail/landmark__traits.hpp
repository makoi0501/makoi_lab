// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/Landmark.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__LANDMARK__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__LANDMARK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/landmark__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'landmark_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Landmark & msg,
  std::ostream & out)
{
  out << "{";
  // member: landmark_points
  {
    if (msg.landmark_points.size() == 0) {
      out << "landmark_points: []";
    } else {
      out << "landmark_points: [";
      size_t pending_items = msg.landmark_points.size();
      for (auto item : msg.landmark_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Landmark & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: landmark_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.landmark_points.size() == 0) {
      out << "landmark_points: []\n";
    } else {
      out << "landmark_points:\n";
      for (auto item : msg.landmark_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Landmark & msg, bool use_flow_style = false)
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
  const object_msgs::msg::Landmark & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::Landmark & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::Landmark>()
{
  return "object_msgs::msg::Landmark";
}

template<>
inline const char * name<object_msgs::msg::Landmark>()
{
  return "object_msgs/msg/Landmark";
}

template<>
struct has_fixed_size<object_msgs::msg::Landmark>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::Landmark>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::msg::Landmark>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__LANDMARK__TRAITS_HPP_
