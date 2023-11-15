// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__STRUCT_HPP_
#define OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pipeline_request'
#include "openvino_msgs/msg/detail/pipeline_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openvino_msgs__srv__PipelineSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__openvino_msgs__srv__PipelineSrv_Request __declspec(deprecated)
#endif

namespace openvino_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PipelineSrv_Request_
{
  using Type = PipelineSrv_Request_<ContainerAllocator>;

  explicit PipelineSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pipeline_request(_init)
  {
    (void)_init;
  }

  explicit PipelineSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pipeline_request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pipeline_request_type =
    openvino_msgs::msg::PipelineRequest_<ContainerAllocator>;
  _pipeline_request_type pipeline_request;

  // setters for named parameter idiom
  Type & set__pipeline_request(
    const openvino_msgs::msg::PipelineRequest_<ContainerAllocator> & _arg)
  {
    this->pipeline_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openvino_msgs__srv__PipelineSrv_Request
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openvino_msgs__srv__PipelineSrv_Request
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PipelineSrv_Request_ & other) const
  {
    if (this->pipeline_request != other.pipeline_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const PipelineSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PipelineSrv_Request_

// alias to use template instance with default allocator
using PipelineSrv_Request =
  openvino_msgs::srv::PipelineSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace openvino_msgs


// Include directives for member types
// Member 'pipelines'
#include "openvino_msgs/msg/detail/pipeline__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openvino_msgs__srv__PipelineSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__openvino_msgs__srv__PipelineSrv_Response __declspec(deprecated)
#endif

namespace openvino_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PipelineSrv_Response_
{
  using Type = PipelineSrv_Response_<ContainerAllocator>;

  explicit PipelineSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PipelineSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pipelines_type =
    std::vector<openvino_msgs::msg::Pipeline_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<openvino_msgs::msg::Pipeline_<ContainerAllocator>>>;
  _pipelines_type pipelines;

  // setters for named parameter idiom
  Type & set__pipelines(
    const std::vector<openvino_msgs::msg::Pipeline_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<openvino_msgs::msg::Pipeline_<ContainerAllocator>>> & _arg)
  {
    this->pipelines = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openvino_msgs__srv__PipelineSrv_Response
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openvino_msgs__srv__PipelineSrv_Response
    std::shared_ptr<openvino_msgs::srv::PipelineSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PipelineSrv_Response_ & other) const
  {
    if (this->pipelines != other.pipelines) {
      return false;
    }
    return true;
  }
  bool operator!=(const PipelineSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PipelineSrv_Response_

// alias to use template instance with default allocator
using PipelineSrv_Response =
  openvino_msgs::srv::PipelineSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace openvino_msgs

namespace openvino_msgs
{

namespace srv
{

struct PipelineSrv
{
  using Request = openvino_msgs::srv::PipelineSrv_Request;
  using Response = openvino_msgs::srv::PipelineSrv_Response;
};

}  // namespace srv

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__STRUCT_HPP_
