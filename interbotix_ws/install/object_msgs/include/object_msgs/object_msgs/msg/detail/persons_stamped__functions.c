// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/PersonsStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/persons_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `faces`
#include "object_msgs/msg/detail/object_in_box__functions.h"
// Member `emotions`
#include "object_msgs/msg/detail/emotion__functions.h"
// Member `agegenders`
#include "object_msgs/msg/detail/age_gender__functions.h"
// Member `headposes`
#include "object_msgs/msg/detail/head_pose__functions.h"

bool
object_msgs__msg__PersonsStamped__init(object_msgs__msg__PersonsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__PersonsStamped__fini(msg);
    return false;
  }
  // faces
  if (!object_msgs__msg__ObjectInBox__Sequence__init(&msg->faces, 0)) {
    object_msgs__msg__PersonsStamped__fini(msg);
    return false;
  }
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__init(&msg->emotions, 0)) {
    object_msgs__msg__PersonsStamped__fini(msg);
    return false;
  }
  // agegenders
  if (!object_msgs__msg__AgeGender__Sequence__init(&msg->agegenders, 0)) {
    object_msgs__msg__PersonsStamped__fini(msg);
    return false;
  }
  // headposes
  if (!object_msgs__msg__HeadPose__Sequence__init(&msg->headposes, 0)) {
    object_msgs__msg__PersonsStamped__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__PersonsStamped__fini(object_msgs__msg__PersonsStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // faces
  object_msgs__msg__ObjectInBox__Sequence__fini(&msg->faces);
  // emotions
  object_msgs__msg__Emotion__Sequence__fini(&msg->emotions);
  // agegenders
  object_msgs__msg__AgeGender__Sequence__fini(&msg->agegenders);
  // headposes
  object_msgs__msg__HeadPose__Sequence__fini(&msg->headposes);
}

bool
object_msgs__msg__PersonsStamped__are_equal(const object_msgs__msg__PersonsStamped * lhs, const object_msgs__msg__PersonsStamped * rhs)
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
  // faces
  if (!object_msgs__msg__ObjectInBox__Sequence__are_equal(
      &(lhs->faces), &(rhs->faces)))
  {
    return false;
  }
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__are_equal(
      &(lhs->emotions), &(rhs->emotions)))
  {
    return false;
  }
  // agegenders
  if (!object_msgs__msg__AgeGender__Sequence__are_equal(
      &(lhs->agegenders), &(rhs->agegenders)))
  {
    return false;
  }
  // headposes
  if (!object_msgs__msg__HeadPose__Sequence__are_equal(
      &(lhs->headposes), &(rhs->headposes)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__msg__PersonsStamped__copy(
  const object_msgs__msg__PersonsStamped * input,
  object_msgs__msg__PersonsStamped * output)
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
  // faces
  if (!object_msgs__msg__ObjectInBox__Sequence__copy(
      &(input->faces), &(output->faces)))
  {
    return false;
  }
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__copy(
      &(input->emotions), &(output->emotions)))
  {
    return false;
  }
  // agegenders
  if (!object_msgs__msg__AgeGender__Sequence__copy(
      &(input->agegenders), &(output->agegenders)))
  {
    return false;
  }
  // headposes
  if (!object_msgs__msg__HeadPose__Sequence__copy(
      &(input->headposes), &(output->headposes)))
  {
    return false;
  }
  return true;
}

object_msgs__msg__PersonsStamped *
object_msgs__msg__PersonsStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__PersonsStamped * msg = (object_msgs__msg__PersonsStamped *)allocator.allocate(sizeof(object_msgs__msg__PersonsStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__PersonsStamped));
  bool success = object_msgs__msg__PersonsStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__PersonsStamped__destroy(object_msgs__msg__PersonsStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__PersonsStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__PersonsStamped__Sequence__init(object_msgs__msg__PersonsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__PersonsStamped * data = NULL;

  if (size) {
    data = (object_msgs__msg__PersonsStamped *)allocator.zero_allocate(size, sizeof(object_msgs__msg__PersonsStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__PersonsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__PersonsStamped__fini(&data[i - 1]);
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
object_msgs__msg__PersonsStamped__Sequence__fini(object_msgs__msg__PersonsStamped__Sequence * array)
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
      object_msgs__msg__PersonsStamped__fini(&array->data[i]);
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

object_msgs__msg__PersonsStamped__Sequence *
object_msgs__msg__PersonsStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__PersonsStamped__Sequence * array = (object_msgs__msg__PersonsStamped__Sequence *)allocator.allocate(sizeof(object_msgs__msg__PersonsStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__PersonsStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__PersonsStamped__Sequence__destroy(object_msgs__msg__PersonsStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__PersonsStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__PersonsStamped__Sequence__are_equal(const object_msgs__msg__PersonsStamped__Sequence * lhs, const object_msgs__msg__PersonsStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__PersonsStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__PersonsStamped__Sequence__copy(
  const object_msgs__msg__PersonsStamped__Sequence * input,
  object_msgs__msg__PersonsStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__PersonsStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__PersonsStamped * data =
      (object_msgs__msg__PersonsStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__PersonsStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__PersonsStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__PersonsStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
