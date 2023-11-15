// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from original_interface:srv/TargetPos.idl
// generated code does not contain a copyright notice

#ifndef ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__STRUCT_HPP_
#define ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__original_interface__srv__TargetPos_Request __attribute__((deprecated))
#else
# define DEPRECATED__original_interface__srv__TargetPos_Request __declspec(deprecated)
#endif

namespace original_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetPos_Request_
{
  using Type = TargetPos_Request_<ContainerAllocator>;

  explicit TargetPos_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_num = 0l;
    }
  }

  explicit TargetPos_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_num = 0l;
    }
  }

  // field types and members
  using _target_num_type =
    int32_t;
  _target_num_type target_num;

  // setters for named parameter idiom
  Type & set__target_num(
    const int32_t & _arg)
  {
    this->target_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    original_interface::srv::TargetPos_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const original_interface::srv::TargetPos_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      original_interface::srv::TargetPos_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      original_interface::srv::TargetPos_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__original_interface__srv__TargetPos_Request
    std::shared_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__original_interface__srv__TargetPos_Request
    std::shared_ptr<original_interface::srv::TargetPos_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPos_Request_ & other) const
  {
    if (this->target_num != other.target_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPos_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPos_Request_

// alias to use template instance with default allocator
using TargetPos_Request =
  original_interface::srv::TargetPos_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace original_interface


#ifndef _WIN32
# define DEPRECATED__original_interface__srv__TargetPos_Response __attribute__((deprecated))
#else
# define DEPRECATED__original_interface__srv__TargetPos_Response __declspec(deprecated)
#endif

namespace original_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetPos_Response_
{
  using Type = TargetPos_Response_<ContainerAllocator>;

  explicit TargetPos_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->targetx = 0.0;
      this->targety = 0.0;
      this->targetz = 0.0;
      this->success = false;
    }
  }

  explicit TargetPos_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->targetx = 0.0;
      this->targety = 0.0;
      this->targetz = 0.0;
      this->success = false;
    }
  }

  // field types and members
  using _targetx_type =
    double;
  _targetx_type targetx;
  using _targety_type =
    double;
  _targety_type targety;
  using _targetz_type =
    double;
  _targetz_type targetz;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__targetx(
    const double & _arg)
  {
    this->targetx = _arg;
    return *this;
  }
  Type & set__targety(
    const double & _arg)
  {
    this->targety = _arg;
    return *this;
  }
  Type & set__targetz(
    const double & _arg)
  {
    this->targetz = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    original_interface::srv::TargetPos_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const original_interface::srv::TargetPos_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      original_interface::srv::TargetPos_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      original_interface::srv::TargetPos_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__original_interface__srv__TargetPos_Response
    std::shared_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__original_interface__srv__TargetPos_Response
    std::shared_ptr<original_interface::srv::TargetPos_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPos_Response_ & other) const
  {
    if (this->targetx != other.targetx) {
      return false;
    }
    if (this->targety != other.targety) {
      return false;
    }
    if (this->targetz != other.targetz) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPos_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPos_Response_

// alias to use template instance with default allocator
using TargetPos_Response =
  original_interface::srv::TargetPos_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace original_interface

namespace original_interface
{

namespace srv
{

struct TargetPos
{
  using Request = original_interface::srv::TargetPos_Request;
  using Response = original_interface::srv::TargetPos_Response;
};

}  // namespace srv

}  // namespace original_interface

#endif  // ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__STRUCT_HPP_
