// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:srv/ClassifyObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__CLASSIFY_OBJECT__STRUCT_HPP_
#define OBJECT_MSGS__SRV__DETAIL__CLASSIFY_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__object_msgs__srv__ClassifyObject_Request __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__srv__ClassifyObject_Request __declspec(deprecated)
#endif

namespace object_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClassifyObject_Request_
{
  using Type = ClassifyObject_Request_<ContainerAllocator>;

  explicit ClassifyObject_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_path = "";
    }
  }

  explicit ClassifyObject_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_path = "";
    }
  }

  // field types and members
  using _image_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_path_type image_path;

  // setters for named parameter idiom
  Type & set__image_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::srv::ClassifyObject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::srv::ClassifyObject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::srv::ClassifyObject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::srv::ClassifyObject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__srv__ClassifyObject_Request
    std::shared_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__srv__ClassifyObject_Request
    std::shared_ptr<object_msgs::srv::ClassifyObject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClassifyObject_Request_ & other) const
  {
    if (this->image_path != other.image_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClassifyObject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClassifyObject_Request_

// alias to use template instance with default allocator
using ClassifyObject_Request =
  object_msgs::srv::ClassifyObject_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_msgs


// Include directives for member types
// Member 'objects'
#include "object_msgs/msg/detail/objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__srv__ClassifyObject_Response __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__srv__ClassifyObject_Response __declspec(deprecated)
#endif

namespace object_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClassifyObject_Response_
{
  using Type = ClassifyObject_Response_<ContainerAllocator>;

  explicit ClassifyObject_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : objects(_init)
  {
    (void)_init;
  }

  explicit ClassifyObject_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : objects(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _objects_type =
    object_msgs::msg::Objects_<ContainerAllocator>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__objects(
    const object_msgs::msg::Objects_<ContainerAllocator> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::srv::ClassifyObject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::srv::ClassifyObject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::srv::ClassifyObject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::srv::ClassifyObject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__srv__ClassifyObject_Response
    std::shared_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__srv__ClassifyObject_Response
    std::shared_ptr<object_msgs::srv::ClassifyObject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClassifyObject_Response_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClassifyObject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClassifyObject_Response_

// alias to use template instance with default allocator
using ClassifyObject_Response =
  object_msgs::srv::ClassifyObject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_msgs

namespace object_msgs
{

namespace srv
{

struct ClassifyObject
{
  using Request = object_msgs::srv::ClassifyObject_Request;
  using Response = object_msgs::srv::ClassifyObject_Response;
};

}  // namespace srv

}  // namespace object_msgs

#endif  // OBJECT_MSGS__SRV__DETAIL__CLASSIFY_OBJECT__STRUCT_HPP_
