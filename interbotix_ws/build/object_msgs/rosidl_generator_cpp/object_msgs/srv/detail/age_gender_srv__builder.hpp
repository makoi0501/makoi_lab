// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:srv/AgeGenderSrv.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__AGE_GENDER_SRV__BUILDER_HPP_
#define OBJECT_MSGS__SRV__DETAIL__AGE_GENDER_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/srv/detail/age_gender_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_AgeGenderSrv_Request_image_path
{
public:
  Init_AgeGenderSrv_Request_image_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::AgeGenderSrv_Request image_path(::object_msgs::srv::AgeGenderSrv_Request::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::AgeGenderSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::AgeGenderSrv_Request>()
{
  return object_msgs::srv::builder::Init_AgeGenderSrv_Request_image_path();
}

}  // namespace object_msgs


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_AgeGenderSrv_Response_age_gender
{
public:
  Init_AgeGenderSrv_Response_age_gender()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::AgeGenderSrv_Response age_gender(::object_msgs::srv::AgeGenderSrv_Response::_age_gender_type arg)
  {
    msg_.age_gender = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::AgeGenderSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::AgeGenderSrv_Response>()
{
  return object_msgs::srv::builder::Init_AgeGenderSrv_Response_age_gender();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__SRV__DETAIL__AGE_GENDER_SRV__BUILDER_HPP_
