// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from openvino_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "openvino_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace openvino_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Connection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) openvino_msgs::msg::Connection(_init);
}

void Connection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<openvino_msgs::msg::Connection *>(message_memory);
  typed_message->~Connection();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Connection_message_member_array[2] = {
  {
    "input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs::msg::Connection, input),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs::msg::Connection, output),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Connection_message_members = {
  "openvino_msgs::msg",  // message namespace
  "Connection",  // message name
  2,  // number of fields
  sizeof(openvino_msgs::msg::Connection),
  Connection_message_member_array,  // message members
  Connection_init_function,  // function to initialize message memory (memory has to be allocated)
  Connection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Connection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Connection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace openvino_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openvino_msgs::msg::Connection>()
{
  return &::openvino_msgs::msg::rosidl_typesupport_introspection_cpp::Connection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openvino_msgs, msg, Connection)() {
  return &::openvino_msgs::msg::rosidl_typesupport_introspection_cpp::Connection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
