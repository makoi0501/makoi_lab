// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/VehicleAttribsStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__VEHICLE_ATTRIBS_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__VEHICLE_ATTRIBS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/vehicle_attribs_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleAttribsStamped_vehicles
{
public:
  explicit Init_VehicleAttribsStamped_vehicles(::object_msgs::msg::VehicleAttribsStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::VehicleAttribsStamped vehicles(::object_msgs::msg::VehicleAttribsStamped::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::VehicleAttribsStamped msg_;
};

class Init_VehicleAttribsStamped_header
{
public:
  Init_VehicleAttribsStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAttribsStamped_vehicles header(::object_msgs::msg::VehicleAttribsStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleAttribsStamped_vehicles(msg_);
  }

private:
  ::object_msgs::msg::VehicleAttribsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::VehicleAttribsStamped>()
{
  return object_msgs::msg::builder::Init_VehicleAttribsStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__VEHICLE_ATTRIBS_STAMPED__BUILDER_HPP_
