// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__BUILDER_HPP_
#define GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grasp_msgs/msg/detail/grasp_config_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grasp_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspConfigList_object_name
{
public:
  explicit Init_GraspConfigList_object_name(::grasp_msgs::msg::GraspConfigList & msg)
  : msg_(msg)
  {}
  ::grasp_msgs::msg::GraspConfigList object_name(::grasp_msgs::msg::GraspConfigList::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfigList msg_;
};

class Init_GraspConfigList_grasps
{
public:
  explicit Init_GraspConfigList_grasps(::grasp_msgs::msg::GraspConfigList & msg)
  : msg_(msg)
  {}
  Init_GraspConfigList_object_name grasps(::grasp_msgs::msg::GraspConfigList::_grasps_type arg)
  {
    msg_.grasps = std::move(arg);
    return Init_GraspConfigList_object_name(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfigList msg_;
};

class Init_GraspConfigList_header
{
public:
  Init_GraspConfigList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspConfigList_grasps header(::grasp_msgs::msg::GraspConfigList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GraspConfigList_grasps(msg_);
  }

private:
  ::grasp_msgs::msg::GraspConfigList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasp_msgs::msg::GraspConfigList>()
{
  return grasp_msgs::msg::builder::Init_GraspConfigList_header();
}

}  // namespace grasp_msgs

#endif  // GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__BUILDER_HPP_
