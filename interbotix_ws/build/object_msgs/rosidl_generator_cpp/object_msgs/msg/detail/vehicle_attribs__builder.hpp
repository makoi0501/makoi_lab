// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/VehicleAttribs.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__VEHICLE_ATTRIBS__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__VEHICLE_ATTRIBS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/vehicle_attribs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleAttribs_roi
{
public:
  explicit Init_VehicleAttribs_roi(::object_msgs::msg::VehicleAttribs & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::VehicleAttribs roi(::object_msgs::msg::VehicleAttribs::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::VehicleAttribs msg_;
};

class Init_VehicleAttribs_color
{
public:
  explicit Init_VehicleAttribs_color(::object_msgs::msg::VehicleAttribs & msg)
  : msg_(msg)
  {}
  Init_VehicleAttribs_roi color(::object_msgs::msg::VehicleAttribs::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_VehicleAttribs_roi(msg_);
  }

private:
  ::object_msgs::msg::VehicleAttribs msg_;
};

class Init_VehicleAttribs_type
{
public:
  Init_VehicleAttribs_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAttribs_color type(::object_msgs::msg::VehicleAttribs::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VehicleAttribs_color(msg_);
  }

private:
  ::object_msgs::msg::VehicleAttribs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::VehicleAttribs>()
{
  return object_msgs::msg::builder::Init_VehicleAttribs_type();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__VEHICLE_ATTRIBS__BUILDER_HPP_
