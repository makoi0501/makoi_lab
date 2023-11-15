// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/PerfValue.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/perf_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerfValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: average
  {
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
    out << ", ";
  }

  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << ", ";
  }

  // member: std_dev
  {
    out << "std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev, out);
    out << ", ";
  }

  // member: window
  {
    out << "window: ";
    rosidl_generator_traits::value_to_yaml(msg.window, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerfValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: average
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
    out << "\n";
  }

  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << "\n";
  }

  // member: std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev, out);
    out << "\n";
  }

  // member: window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window: ";
    rosidl_generator_traits::value_to_yaml(msg.window, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerfValue & msg, bool use_flow_style = false)
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
  const object_msgs::msg::PerfValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::PerfValue & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::PerfValue>()
{
  return "object_msgs::msg::PerfValue";
}

template<>
inline const char * name<object_msgs::msg::PerfValue>()
{
  return "object_msgs/msg/PerfValue";
}

template<>
struct has_fixed_size<object_msgs::msg::PerfValue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<object_msgs::msg::PerfValue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<object_msgs::msg::PerfValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__TRAITS_HPP_
