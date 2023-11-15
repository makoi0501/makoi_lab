// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/ObjectInBox3D.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/object_in_box3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object`
#include "object_msgs/msg/detail/object__functions.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
// Member `min`
// Member `max`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
object_msgs__msg__ObjectInBox3D__init(object_msgs__msg__ObjectInBox3D * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!object_msgs__msg__Object__init(&msg->object)) {
    object_msgs__msg__ObjectInBox3D__fini(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    object_msgs__msg__ObjectInBox3D__fini(msg);
    return false;
  }
  // min
  if (!geometry_msgs__msg__Point32__init(&msg->min)) {
    object_msgs__msg__ObjectInBox3D__fini(msg);
    return false;
  }
  // max
  if (!geometry_msgs__msg__Point32__init(&msg->max)) {
    object_msgs__msg__ObjectInBox3D__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__ObjectInBox3D__fini(object_msgs__msg__ObjectInBox3D * msg)
{
  if (!msg) {
    return;
  }
  // object
  object_msgs__msg__Object__fini(&msg->object);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // min
  geometry_msgs__msg__Point32__fini(&msg->min);
  // max
  geometry_msgs__msg__Point32__fini(&msg->max);
}

bool
object_msgs__msg__ObjectInBox3D__are_equal(const object_msgs__msg__ObjectInBox3D * lhs, const object_msgs__msg__ObjectInBox3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object
  if (!object_msgs__msg__Object__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // min
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->min), &(rhs->min)))
  {
    return false;
  }
  // max
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->max), &(rhs->max)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__msg__ObjectInBox3D__copy(
  const object_msgs__msg__ObjectInBox3D * input,
  object_msgs__msg__ObjectInBox3D * output)
{
  if (!input || !output) {
    return false;
  }
  // object
  if (!object_msgs__msg__Object__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // min
  if (!geometry_msgs__msg__Point32__copy(
      &(input->min), &(output->min)))
  {
    return false;
  }
  // max
  if (!geometry_msgs__msg__Point32__copy(
      &(input->max), &(output->max)))
  {
    return false;
  }
  return true;
}

object_msgs__msg__ObjectInBox3D *
object_msgs__msg__ObjectInBox3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__ObjectInBox3D * msg = (object_msgs__msg__ObjectInBox3D *)allocator.allocate(sizeof(object_msgs__msg__ObjectInBox3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__ObjectInBox3D));
  bool success = object_msgs__msg__ObjectInBox3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__ObjectInBox3D__destroy(object_msgs__msg__ObjectInBox3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__ObjectInBox3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__ObjectInBox3D__Sequence__init(object_msgs__msg__ObjectInBox3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__ObjectInBox3D * data = NULL;

  if (size) {
    data = (object_msgs__msg__ObjectInBox3D *)allocator.zero_allocate(size, sizeof(object_msgs__msg__ObjectInBox3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__ObjectInBox3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__ObjectInBox3D__fini(&data[i - 1]);
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
object_msgs__msg__ObjectInBox3D__Sequence__fini(object_msgs__msg__ObjectInBox3D__Sequence * array)
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
      object_msgs__msg__ObjectInBox3D__fini(&array->data[i]);
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

object_msgs__msg__ObjectInBox3D__Sequence *
object_msgs__msg__ObjectInBox3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__ObjectInBox3D__Sequence * array = (object_msgs__msg__ObjectInBox3D__Sequence *)allocator.allocate(sizeof(object_msgs__msg__ObjectInBox3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__ObjectInBox3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__ObjectInBox3D__Sequence__destroy(object_msgs__msg__ObjectInBox3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__ObjectInBox3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__ObjectInBox3D__Sequence__are_equal(const object_msgs__msg__ObjectInBox3D__Sequence * lhs, const object_msgs__msg__ObjectInBox3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__ObjectInBox3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__ObjectInBox3D__Sequence__copy(
  const object_msgs__msg__ObjectInBox3D__Sequence * input,
  object_msgs__msg__ObjectInBox3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__ObjectInBox3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__ObjectInBox3D * data =
      (object_msgs__msg__ObjectInBox3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__ObjectInBox3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__ObjectInBox3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__ObjectInBox3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
