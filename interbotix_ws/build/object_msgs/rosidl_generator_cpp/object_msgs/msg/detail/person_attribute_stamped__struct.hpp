// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg/PersonAttributeStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE_STAMPED__STRUCT_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE_STAMPED__STRUCT_HPP_

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
// Member 'attributes'
#include "object_msgs/msg/detail/person_attribute__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__PersonAttributeStamped __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__PersonAttributeStamped __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonAttributeStamped_
{
  using Type = PersonAttributeStamped_<ContainerAllocator>;

  explicit PersonAttributeStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PersonAttributeStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _attributes_type =
    std::vector<object_msgs::msg::PersonAttribute_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<object_msgs::msg::PersonAttribute_<ContainerAllocator>>>;
  _attributes_type attributes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__attributes(
    const std::vector<object_msgs::msg::PersonAttribute_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<object_msgs::msg::PersonAttribute_<ContainerAllocator>>> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::PersonAttributeStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::PersonAttributeStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::PersonAttributeStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::PersonAttributeStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__PersonAttributeStamped
    std::shared_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__PersonAttributeStamped
    std::shared_ptr<object_msgs::msg::PersonAttributeStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonAttributeStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonAttributeStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonAttributeStamped_

// alias to use template instance with default allocator
using PersonAttributeStamped =
  object_msgs::msg::PersonAttributeStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE_STAMPED__STRUCT_HPP_
