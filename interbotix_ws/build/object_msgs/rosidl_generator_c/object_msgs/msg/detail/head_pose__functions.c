// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/HeadPose.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/head_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
object_msgs__msg__HeadPose__init(object_msgs__msg__HeadPose * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // pitch
  // roll
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    object_msgs__msg__HeadPose__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__HeadPose__fini(object_msgs__msg__HeadPose * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // pitch
  // roll
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

bool
object_msgs__msg__HeadPose__are_equal(const object_msgs__msg__HeadPose * lhs, const object_msgs__msg__HeadPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__msg__HeadPose__copy(
  const object_msgs__msg__HeadPose * input,
  object_msgs__msg__HeadPose * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  return true;
}

object_msgs__msg__HeadPose *
object_msgs__msg__HeadPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__HeadPose * msg = (object_msgs__msg__HeadPose *)allocator.allocate(sizeof(object_msgs__msg__HeadPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__HeadPose));
  bool success = object_msgs__msg__HeadPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__HeadPose__destroy(object_msgs__msg__HeadPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__HeadPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__HeadPose__Sequence__init(object_msgs__msg__HeadPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__HeadPose * data = NULL;

  if (size) {
    data = (object_msgs__msg__HeadPose *)allocator.zero_allocate(size, sizeof(object_msgs__msg__HeadPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__HeadPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__HeadPose__fini(&data[i - 1]);
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
object_msgs__msg__HeadPose__Sequence__fini(object_msgs__msg__HeadPose__Sequence * array)
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
      object_msgs__msg__HeadPose__fini(&array->data[i]);
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

object_msgs__msg__HeadPose__Sequence *
object_msgs__msg__HeadPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__HeadPose__Sequence * array = (object_msgs__msg__HeadPose__Sequence *)allocator.allocate(sizeof(object_msgs__msg__HeadPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__HeadPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__HeadPose__Sequence__destroy(object_msgs__msg__HeadPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__HeadPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__HeadPose__Sequence__are_equal(const object_msgs__msg__HeadPose__Sequence * lhs, const object_msgs__msg__HeadPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__HeadPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__HeadPose__Sequence__copy(
  const object_msgs__msg__HeadPose__Sequence * input,
  object_msgs__msg__HeadPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__HeadPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__HeadPose * data =
      (object_msgs__msg__HeadPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__HeadPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__HeadPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__HeadPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
