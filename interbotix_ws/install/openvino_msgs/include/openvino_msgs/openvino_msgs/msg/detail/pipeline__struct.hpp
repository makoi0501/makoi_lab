// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openvino_msgs:msg/Pipeline.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE__STRUCT_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'connections'
#include "openvino_msgs/msg/detail/connection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openvino_msgs__msg__Pipeline __attribute__((deprecated))
#else
# define DEPRECATED__openvino_msgs__msg__Pipeline __declspec(deprecated)
#endif

namespace openvino_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pipeline_
{
  using Type = Pipeline_<ContainerAllocator>;

  explicit Pipeline_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->running_status = "";
    }
  }

  explicit Pipeline_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc),
    running_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->running_status = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _connections_type =
    std::vector<openvino_msgs::msg::Connection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<openvino_msgs::msg::Connection_<ContainerAllocator>>>;
  _connections_type connections;
  using _running_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _running_status_type running_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__connections(
    const std::vector<openvino_msgs::msg::Connection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<openvino_msgs::msg::Connection_<ContainerAllocator>>> & _arg)
  {
    this->connections = _arg;
    return *this;
  }
  Type & set__running_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->running_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openvino_msgs::msg::Pipeline_<ContainerAllocator> *;
  using ConstRawPtr =
    const openvino_msgs::msg::Pipeline_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::msg::Pipeline_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::msg::Pipeline_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openvino_msgs__msg__Pipeline
    std::shared_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openvino_msgs__msg__Pipeline
    std::shared_ptr<openvino_msgs::msg::Pipeline_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pipeline_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->connections != other.connections) {
      return false;
    }
    if (this->running_status != other.running_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pipeline_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pipeline_

// alias to use template instance with default allocator
using Pipeline =
  openvino_msgs::msg::Pipeline_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE__STRUCT_HPP_
