// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_msgs/msg/detail/objects__rosidl_typesupport_introspection_c.h"
#include "object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_msgs/msg/detail/objects__functions.h"
#include "object_msgs/msg/detail/objects__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `objects_vector`
#include "object_msgs/msg/object.h"
// Member `objects_vector`
#include "object_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_msgs__msg__Objects__init(message_memory);
}

void object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_fini_function(void * message_memory)
{
  object_msgs__msg__Objects__fini(message_memory);
}

size_t object_msgs__msg__Objects__rosidl_typesupport_introspection_c__size_function__Objects__objects_vector(
  const void * untyped_member)
{
  const object_msgs__msg__Object__Sequence * member =
    (const object_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_const_function__Objects__objects_vector(
  const void * untyped_member, size_t index)
{
  const object_msgs__msg__Object__Sequence * member =
    (const object_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_function__Objects__objects_vector(
  void * untyped_member, size_t index)
{
  object_msgs__msg__Object__Sequence * member =
    (object_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__Objects__rosidl_typesupport_introspection_c__fetch_function__Objects__objects_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_msgs__msg__Object * item =
    ((const object_msgs__msg__Object *)
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_const_function__Objects__objects_vector(untyped_member, index));
  object_msgs__msg__Object * value =
    (object_msgs__msg__Object *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__Objects__rosidl_typesupport_introspection_c__assign_function__Objects__objects_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_msgs__msg__Object * item =
    ((object_msgs__msg__Object *)
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_function__Objects__objects_vector(untyped_member, index));
  const object_msgs__msg__Object * value =
    (const object_msgs__msg__Object *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__Objects__rosidl_typesupport_introspection_c__resize_function__Objects__objects_vector(
  void * untyped_member, size_t size)
{
  object_msgs__msg__Object__Sequence * member =
    (object_msgs__msg__Object__Sequence *)(untyped_member);
  object_msgs__msg__Object__Sequence__fini(member);
  return object_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__Objects, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__Objects, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__Objects, objects_vector),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__size_function__Objects__objects_vector,  // size() function pointer
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_const_function__Objects__objects_vector,  // get_const(index) function pointer
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_function__Objects__objects_vector,  // get(index) function pointer
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__fetch_function__Objects__objects_vector,  // fetch(index, &value) function pointer
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__assign_function__Objects__objects_vector,  // assign(index, value) function pointer
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__resize_function__Objects__objects_vector  // resize(index) function pointer
  },
  {
    "inference_time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__Objects, inference_time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_members = {
  "object_msgs__msg",  // message namespace
  "Objects",  // message name
  4,  // number of fields
  sizeof(object_msgs__msg__Objects),
  object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array,  // message members
  object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_init_function,  // function to initialize message memory (memory has to be allocated)
  object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle = {
  0,
  &object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, Objects)() {
  object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, Object)();
  if (!object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier) {
    object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
