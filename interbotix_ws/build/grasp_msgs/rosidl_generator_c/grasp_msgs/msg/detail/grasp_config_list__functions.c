// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice
#include "grasp_msgs/msg/detail/grasp_config_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `grasps`
#include "grasp_msgs/msg/detail/grasp_config__functions.h"
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

bool
grasp_msgs__msg__GraspConfigList__init(grasp_msgs__msg__GraspConfigList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    grasp_msgs__msg__GraspConfigList__fini(msg);
    return false;
  }
  // grasps
  if (!grasp_msgs__msg__GraspConfig__Sequence__init(&msg->grasps, 0)) {
    grasp_msgs__msg__GraspConfigList__fini(msg);
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    grasp_msgs__msg__GraspConfigList__fini(msg);
    return false;
  }
  return true;
}

void
grasp_msgs__msg__GraspConfigList__fini(grasp_msgs__msg__GraspConfigList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // grasps
  grasp_msgs__msg__GraspConfig__Sequence__fini(&msg->grasps);
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
}

bool
grasp_msgs__msg__GraspConfigList__are_equal(const grasp_msgs__msg__GraspConfigList * lhs, const grasp_msgs__msg__GraspConfigList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // grasps
  if (!grasp_msgs__msg__GraspConfig__Sequence__are_equal(
      &(lhs->grasps), &(rhs->grasps)))
  {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  return true;
}

bool
grasp_msgs__msg__GraspConfigList__copy(
  const grasp_msgs__msg__GraspConfigList * input,
  grasp_msgs__msg__GraspConfigList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // grasps
  if (!grasp_msgs__msg__GraspConfig__Sequence__copy(
      &(input->grasps), &(output->grasps)))
  {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  return true;
}

grasp_msgs__msg__GraspConfigList *
grasp_msgs__msg__GraspConfigList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grasp_msgs__msg__GraspConfigList * msg = (grasp_msgs__msg__GraspConfigList *)allocator.allocate(sizeof(grasp_msgs__msg__GraspConfigList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasp_msgs__msg__GraspConfigList));
  bool success = grasp_msgs__msg__GraspConfigList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
grasp_msgs__msg__GraspConfigList__destroy(grasp_msgs__msg__GraspConfigList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    grasp_msgs__msg__GraspConfigList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
grasp_msgs__msg__GraspConfigList__Sequence__init(grasp_msgs__msg__GraspConfigList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grasp_msgs__msg__GraspConfigList * data = NULL;

  if (size) {
    data = (grasp_msgs__msg__GraspConfigList *)allocator.zero_allocate(size, sizeof(grasp_msgs__msg__GraspConfigList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasp_msgs__msg__GraspConfigList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasp_msgs__msg__GraspConfigList__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
grasp_msgs__msg__GraspConfigList__Sequence__fini(grasp_msgs__msg__GraspConfigList__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasp_msgs__msg__GraspConfigList__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

grasp_msgs__msg__GraspConfigList__Sequence *
grasp_msgs__msg__GraspConfigList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grasp_msgs__msg__GraspConfigList__Sequence * array = (grasp_msgs__msg__GraspConfigList__Sequence *)allocator.allocate(sizeof(grasp_msgs__msg__GraspConfigList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = grasp_msgs__msg__GraspConfigList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
grasp_msgs__msg__GraspConfigList__Sequence__destroy(grasp_msgs__msg__GraspConfigList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    grasp_msgs__msg__GraspConfigList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
grasp_msgs__msg__GraspConfigList__Sequence__are_equal(const grasp_msgs__msg__GraspConfigList__Sequence * lhs, const grasp_msgs__msg__GraspConfigList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!grasp_msgs__msg__GraspConfigList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
grasp_msgs__msg__GraspConfigList__Sequence__copy(
  const grasp_msgs__msg__GraspConfigList__Sequence * input,
  grasp_msgs__msg__GraspConfigList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(grasp_msgs__msg__GraspConfigList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    grasp_msgs__msg__GraspConfigList * data =
      (grasp_msgs__msg__GraspConfigList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!grasp_msgs__msg__GraspConfigList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          grasp_msgs__msg__GraspConfigList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!grasp_msgs__msg__GraspConfigList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
