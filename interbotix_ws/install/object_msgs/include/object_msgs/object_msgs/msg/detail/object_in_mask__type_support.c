// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_msgs:msg/ObjectInMask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_msgs/msg/detail/object_in_mask__rosidl_typesupport_introspection_c.h"
#include "object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_msgs/msg/detail/object_in_mask__functions.h"
#include "object_msgs/msg/detail/object_in_mask__struct.h"


// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"
// Member `mask_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_msgs__msg__ObjectInMask__init(message_memory);
}

void object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_fini_function(void * message_memory)
{
  object_msgs__msg__ObjectInMask__fini(message_memory);
}

size_t object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__size_function__ObjectInMask__mask_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__get_const_function__ObjectInMask__mask_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__get_function__ObjectInMask__mask_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__fetch_function__ObjectInMask__mask_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__get_const_function__ObjectInMask__mask_array(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__assign_function__ObjectInMask__mask_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__get_function__ObjectInMask__mask_array(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__resize_function__ObjectInMask__mask_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_member_array[4] = {
  {
    "object_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__ObjectInMask, object_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__ObjectInMask, probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__ObjectInMask, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__ObjectInMask, mask_array),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__size_function__ObjectInMask__mask_array,  // size() function pointer
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__get_const_function__ObjectInMask__mask_array,  // get_const(index) function pointer
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__get_function__ObjectInMask__mask_array,  // get(index) function pointer
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__fetch_function__ObjectInMask__mask_array,  // fetch(index, &value) function pointer
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__assign_function__ObjectInMask__mask_array,  // assign(index, value) function pointer
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__resize_function__ObjectInMask__mask_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_members = {
  "object_msgs__msg",  // message namespace
  "ObjectInMask",  // message name
  4,  // number of fields
  sizeof(object_msgs__msg__ObjectInMask),
  object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_member_array,  // message members
  object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_init_function,  // function to initialize message memory (memory has to be allocated)
  object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_type_support_handle = {
  0,
  &object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, ObjectInMask)() {
  object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_type_support_handle.typesupport_identifier) {
    object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_msgs__msg__ObjectInMask__rosidl_typesupport_introspection_c__ObjectInMask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
