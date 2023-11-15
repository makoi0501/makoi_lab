// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from original_interface:srv/TargetPos.idl
// generated code does not contain a copyright notice

#ifndef ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__BUILDER_HPP_
#define ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "original_interface/srv/detail/target_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace original_interface
{

namespace srv
{

namespace builder
{

class Init_TargetPos_Request_target_num
{
public:
  Init_TargetPos_Request_target_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::original_interface::srv::TargetPos_Request target_num(::original_interface::srv::TargetPos_Request::_target_num_type arg)
  {
    msg_.target_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::original_interface::srv::TargetPos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::original_interface::srv::TargetPos_Request>()
{
  return original_interface::srv::builder::Init_TargetPos_Request_target_num();
}

}  // namespace original_interface


namespace original_interface
{

namespace srv
{

namespace builder
{

class Init_TargetPos_Response_success
{
public:
  explicit Init_TargetPos_Response_success(::original_interface::srv::TargetPos_Response & msg)
  : msg_(msg)
  {}
  ::original_interface::srv::TargetPos_Response success(::original_interface::srv::TargetPos_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::original_interface::srv::TargetPos_Response msg_;
};

class Init_TargetPos_Response_targetz
{
public:
  explicit Init_TargetPos_Response_targetz(::original_interface::srv::TargetPos_Response & msg)
  : msg_(msg)
  {}
  Init_TargetPos_Response_success targetz(::original_interface::srv::TargetPos_Response::_targetz_type arg)
  {
    msg_.targetz = std::move(arg);
    return Init_TargetPos_Response_success(msg_);
  }

private:
  ::original_interface::srv::TargetPos_Response msg_;
};

class Init_TargetPos_Response_targety
{
public:
  explicit Init_TargetPos_Response_targety(::original_interface::srv::TargetPos_Response & msg)
  : msg_(msg)
  {}
  Init_TargetPos_Response_targetz targety(::original_interface::srv::TargetPos_Response::_targety_type arg)
  {
    msg_.targety = std::move(arg);
    return Init_TargetPos_Response_targetz(msg_);
  }

private:
  ::original_interface::srv::TargetPos_Response msg_;
};

class Init_TargetPos_Response_targetx
{
public:
  Init_TargetPos_Response_targetx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPos_Response_targety targetx(::original_interface::srv::TargetPos_Response::_targetx_type arg)
  {
    msg_.targetx = std::move(arg);
    return Init_TargetPos_Response_targety(msg_);
  }

private:
  ::original_interface::srv::TargetPos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::original_interface::srv::TargetPos_Response>()
{
  return original_interface::srv::builder::Init_TargetPos_Response_targetx();
}

}  // namespace original_interface

#endif  // ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__BUILDER_HPP_
