// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_msgs/msg/detail/geometry_graph__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GeometryGraph_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msgs::msg::GeometryGraph(_init);
}

void GeometryGraph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msgs::msg::GeometryGraph *>(message_memory);
  typed_message->~GeometryGraph();
}

size_t size_function__GeometryGraph__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryGraph__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryGraph__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__GeometryGraph__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__GeometryGraph__nodes(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__GeometryGraph__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__GeometryGraph__nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__GeometryGraph__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeometryGraph__edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<graph_msgs::msg::Edges> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryGraph__edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<graph_msgs::msg::Edges> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryGraph__edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<graph_msgs::msg::Edges> *>(untyped_member);
  return &member[index];
}

void fetch_function__GeometryGraph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const graph_msgs::msg::Edges *>(
    get_const_function__GeometryGraph__edges(untyped_member, index));
  auto & value = *reinterpret_cast<graph_msgs::msg::Edges *>(untyped_value);
  value = item;
}

void assign_function__GeometryGraph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<graph_msgs::msg::Edges *>(
    get_function__GeometryGraph__edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const graph_msgs::msg::Edges *>(untyped_value);
  item = value;
}

void resize_function__GeometryGraph__edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<graph_msgs::msg::Edges> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GeometryGraph_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::msg::GeometryGraph, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::msg::GeometryGraph, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryGraph__nodes,  // size() function pointer
    get_const_function__GeometryGraph__nodes,  // get_const(index) function pointer
    get_function__GeometryGraph__nodes,  // get(index) function pointer
    fetch_function__GeometryGraph__nodes,  // fetch(index, &value) function pointer
    assign_function__GeometryGraph__nodes,  // assign(index, value) function pointer
    resize_function__GeometryGraph__nodes  // resize(index) function pointer
  },
  {
    "edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graph_msgs::msg::Edges>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::msg::GeometryGraph, edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryGraph__edges,  // size() function pointer
    get_const_function__GeometryGraph__edges,  // get_const(index) function pointer
    get_function__GeometryGraph__edges,  // get(index) function pointer
    fetch_function__GeometryGraph__edges,  // fetch(index, &value) function pointer
    assign_function__GeometryGraph__edges,  // assign(index, value) function pointer
    resize_function__GeometryGraph__edges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GeometryGraph_message_members = {
  "graph_msgs::msg",  // message namespace
  "GeometryGraph",  // message name
  3,  // number of fields
  sizeof(graph_msgs::msg::GeometryGraph),
  GeometryGraph_message_member_array,  // message members
  GeometryGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryGraph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GeometryGraph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GeometryGraph_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace graph_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msgs::msg::GeometryGraph>()
{
  return &::graph_msgs::msg::rosidl_typesupport_introspection_cpp::GeometryGraph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msgs, msg, GeometryGraph)() {
  return &::graph_msgs::msg::rosidl_typesupport_introspection_cpp::GeometryGraph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
