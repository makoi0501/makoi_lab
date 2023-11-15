// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openvino_msgs:msg/Pipeline.idl
// generated code does not contain a copyright notice
#include "openvino_msgs/msg/detail/pipeline__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `running_status`
#include "rosidl_runtime_c/string_functions.h"
// Member `connections`
#include "openvino_msgs/msg/detail/connection__functions.h"

bool
openvino_msgs__msg__Pipeline__init(openvino_msgs__msg__Pipeline * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    openvino_msgs__msg__Pipeline__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    openvino_msgs__msg__Pipeline__fini(msg);
    return false;
  }
  // connections
  if (!openvino_msgs__msg__Connection__Sequence__init(&msg->connections, 0)) {
    openvino_msgs__msg__Pipeline__fini(msg);
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__init(&msg->running_status)) {
    openvino_msgs__msg__Pipeline__fini(msg);
    return false;
  }
  return true;
}

void
openvino_msgs__msg__Pipeline__fini(openvino_msgs__msg__Pipeline * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // connections
  openvino_msgs__msg__Connection__Sequence__fini(&msg->connections);
  // running_status
  rosidl_runtime_c__String__fini(&msg->running_status);
}

bool
openvino_msgs__msg__Pipeline__are_equal(const openvino_msgs__msg__Pipeline * lhs, const openvino_msgs__msg__Pipeline * rhs)
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
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // connections
  if (!openvino_msgs__msg__Connection__Sequence__are_equal(
      &(lhs->connections), &(rhs->connections)))
  {
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->running_status), &(rhs->running_status)))
  {
    return false;
  }
  return true;
}

bool
openvino_msgs__msg__Pipeline__copy(
  const openvino_msgs__msg__Pipeline * input,
  openvino_msgs__msg__Pipeline * output)
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
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // connections
  if (!openvino_msgs__msg__Connection__Sequence__copy(
      &(input->connections), &(output->connections)))
  {
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__copy(
      &(input->running_status), &(output->running_status)))
  {
    return false;
  }
  return true;
}

openvino_msgs__msg__Pipeline *
openvino_msgs__msg__Pipeline__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__msg__Pipeline * msg = (openvino_msgs__msg__Pipeline *)allocator.allocate(sizeof(openvino_msgs__msg__Pipeline), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openvino_msgs__msg__Pipeline));
  bool success = openvino_msgs__msg__Pipeline__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openvino_msgs__msg__Pipeline__destroy(openvino_msgs__msg__Pipeline * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openvino_msgs__msg__Pipeline__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openvino_msgs__msg__Pipeline__Sequence__init(openvino_msgs__msg__Pipeline__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__msg__Pipeline * data = NULL;

  if (size) {
    data = (openvino_msgs__msg__Pipeline *)allocator.zero_allocate(size, sizeof(openvino_msgs__msg__Pipeline), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openvino_msgs__msg__Pipeline__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openvino_msgs__msg__Pipeline__fini(&data[i - 1]);
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
openvino_msgs__msg__Pipeline__Sequence__fini(openvino_msgs__msg__Pipeline__Sequence * array)
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
      openvino_msgs__msg__Pipeline__fini(&array->data[i]);
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

openvino_msgs__msg__Pipeline__Sequence *
openvino_msgs__msg__Pipeline__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__msg__Pipeline__Sequence * array = (openvino_msgs__msg__Pipeline__Sequence *)allocator.allocate(sizeof(openvino_msgs__msg__Pipeline__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openvino_msgs__msg__Pipeline__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openvino_msgs__msg__Pipeline__Sequence__destroy(openvino_msgs__msg__Pipeline__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openvino_msgs__msg__Pipeline__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openvino_msgs__msg__Pipeline__Sequence__are_equal(const openvino_msgs__msg__Pipeline__Sequence * lhs, const openvino_msgs__msg__Pipeline__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openvino_msgs__msg__Pipeline__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openvino_msgs__msg__Pipeline__Sequence__copy(
  const openvino_msgs__msg__Pipeline__Sequence * input,
  openvino_msgs__msg__Pipeline__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openvino_msgs__msg__Pipeline);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openvino_msgs__msg__Pipeline * data =
      (openvino_msgs__msg__Pipeline *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openvino_msgs__msg__Pipeline__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openvino_msgs__msg__Pipeline__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openvino_msgs__msg__Pipeline__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
