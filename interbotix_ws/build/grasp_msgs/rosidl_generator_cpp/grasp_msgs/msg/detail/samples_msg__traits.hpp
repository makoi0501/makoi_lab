// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__TRAITS_HPP_
#define GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "grasp_msgs/msg/detail/samples_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'samples'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace grasp_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SamplesMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: samples
  {
    if (msg.samples.size() == 0) {
      out << "samples: []";
    } else {
      out << "samples: [";
      size_t pending_items = msg.samples.size();
      for (auto item : msg.samples) {
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
  const SamplesMsg & msg,
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

  // member: samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.samples.size() == 0) {
      out << "samples: []\n";
    } else {
      out << "samples:\n";
      for (auto item : msg.samples) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SamplesMsg & msg, bool use_flow_style = false)
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
  const grasp_msgs::msg::SamplesMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  grasp_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grasp_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const grasp_msgs::msg::SamplesMsg & msg)
{
  return grasp_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<grasp_msgs::msg::SamplesMsg>()
{
  return "grasp_msgs::msg::SamplesMsg";
}

template<>
inline const char * name<grasp_msgs::msg::SamplesMsg>()
{
  return "grasp_msgs/msg/SamplesMsg";
}

template<>
struct has_fixed_size<grasp_msgs::msg::SamplesMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasp_msgs::msg::SamplesMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grasp_msgs::msg::SamplesMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__TRAITS_HPP_
