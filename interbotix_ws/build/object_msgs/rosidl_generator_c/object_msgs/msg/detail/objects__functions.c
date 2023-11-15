// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/Objects.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `objects_vector`
#include "object_msgs/msg/detail/object__functions.h"

bool
object_msgs__msg__Objects__init(object_msgs__msg__Objects * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__Objects__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    object_msgs__msg__Objects__fini(msg);
    return false;
  }
  // objects_vector
  if (!object_msgs__msg__Object__Sequence__init(&msg->objects_vector, 0)) {
    object_msgs__msg__Objects__fini(msg);
    return false;
  }
  // inference_time_ms
  return true;
}

void
object_msgs__msg__Objects__fini(object_msgs__msg__Objects * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // objects_vector
  object_msgs__msg__Object__Sequence__fini(&msg->objects_vector);
  // inference_time_ms
}

bool
object_msgs__msg__Objects__are_equal(const object_msgs__msg__Objects * lhs, const object_msgs__msg__Objects * rhs)
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
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // objects_vector
  if (!object_msgs__msg__Object__Sequence__are_equal(
      &(lhs->objects_vector), &(rhs->objects_vector)))
  {
    return false;
  }
  // inference_time_ms
  if (lhs->inference_time_ms != rhs->inference_time_ms) {
    return false;
  }
  return true;
}

bool
object_msgs__msg__Objects__copy(
  const object_msgs__msg__Objects * input,
  object_msgs__msg__Objects * output)
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
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // objects_vector
  if (!object_msgs__msg__Object__Sequence__copy(
      &(input->objects_vector), &(output->objects_vector)))
  {
    return false;
  }
  // inference_time_ms
  output->inference_time_ms = input->inference_time_ms;
  return true;
}

object_msgs__msg__Objects *
object_msgs__msg__Objects__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__Objects * msg = (object_msgs__msg__Objects *)allocator.allocate(sizeof(object_msgs__msg__Objects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__Objects));
  bool success = object_msgs__msg__Objects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__Objects__destroy(object_msgs__msg__Objects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__Objects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__Objects__Sequence__init(object_msgs__msg__Objects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__Objects * data = NULL;

  if (size) {
    data = (object_msgs__msg__Objects *)allocator.zero_allocate(size, sizeof(object_msgs__msg__Objects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__Objects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__Objects__fini(&data[i - 1]);
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
object_msgs__msg__Objects__Sequence__fini(object_msgs__msg__Objects__Sequence * array)
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
      object_msgs__msg__Objects__fini(&array->data[i]);
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

object_msgs__msg__Objects__Sequence *
object_msgs__msg__Objects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__Objects__Sequence * array = (object_msgs__msg__Objects__Sequence *)allocator.allocate(sizeof(object_msgs__msg__Objects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__Objects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__Objects__Sequence__destroy(object_msgs__msg__Objects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__Objects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__Objects__Sequence__are_equal(const object_msgs__msg__Objects__Sequence * lhs, const object_msgs__msg__Objects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__Objects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__Objects__Sequence__copy(
  const object_msgs__msg__Objects__Sequence * input,
  object_msgs__msg__Objects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__Objects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__Objects * data =
      (object_msgs__msg__Objects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__Objects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__Objects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__Objects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
