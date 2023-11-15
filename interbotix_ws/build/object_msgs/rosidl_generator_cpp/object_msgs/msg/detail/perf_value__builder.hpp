// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/PerfValue.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/perf_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_PerfValue_window
{
public:
  explicit Init_PerfValue_window(::object_msgs::msg::PerfValue & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::PerfValue window(::object_msgs::msg::PerfValue::_window_type arg)
  {
    msg_.window = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::PerfValue msg_;
};

class Init_PerfValue_std_dev
{
public:
  explicit Init_PerfValue_std_dev(::object_msgs::msg::PerfValue & msg)
  : msg_(msg)
  {}
  Init_PerfValue_window std_dev(::object_msgs::msg::PerfValue::_std_dev_type arg)
  {
    msg_.std_dev = std::move(arg);
    return Init_PerfValue_window(msg_);
  }

private:
  ::object_msgs::msg::PerfValue msg_;
};

class Init_PerfValue_max
{
public:
  explicit Init_PerfValue_max(::object_msgs::msg::PerfValue & msg)
  : msg_(msg)
  {}
  Init_PerfValue_std_dev max(::object_msgs::msg::PerfValue::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_PerfValue_std_dev(msg_);
  }

private:
  ::object_msgs::msg::PerfValue msg_;
};

class Init_PerfValue_min
{
public:
  explicit Init_PerfValue_min(::object_msgs::msg::PerfValue & msg)
  : msg_(msg)
  {}
  Init_PerfValue_max min(::object_msgs::msg::PerfValue::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_PerfValue_max(msg_);
  }

private:
  ::object_msgs::msg::PerfValue msg_;
};

class Init_PerfValue_average
{
public:
  Init_PerfValue_average()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerfValue_min average(::object_msgs::msg::PerfValue::_average_type arg)
  {
    msg_.average = std::move(arg);
    return Init_PerfValue_min(msg_);
  }

private:
  ::object_msgs::msg::PerfValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::PerfValue>()
{
  return object_msgs::msg::builder::Init_PerfValue_average();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__BUILDER_HPP_
