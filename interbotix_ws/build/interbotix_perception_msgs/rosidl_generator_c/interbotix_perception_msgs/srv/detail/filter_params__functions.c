// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
interbotix_perception_msgs__srv__FilterParams_Request__init(interbotix_perception_msgs__srv__FilterParams_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x_filter_min
  // x_filter_max
  // y_filter_min
  // y_filter_max
  // z_filter_min
  // z_filter_max
  // voxel_leaf_size
  // plane_max_iter
  // plane_dist_thresh
  // ror_radius_search
  // ror_min_neighbors
  // cluster_tol
  // cluster_min_size
  // cluster_max_size
  return true;
}

void
interbotix_perception_msgs__srv__FilterParams_Request__fini(interbotix_perception_msgs__srv__FilterParams_Request * msg)
{
  if (!msg) {
    return;
  }
  // x_filter_min
  // x_filter_max
  // y_filter_min
  // y_filter_max
  // z_filter_min
  // z_filter_max
  // voxel_leaf_size
  // plane_max_iter
  // plane_dist_thresh
  // ror_radius_search
  // ror_min_neighbors
  // cluster_tol
  // cluster_min_size
  // cluster_max_size
}

bool
interbotix_perception_msgs__srv__FilterParams_Request__are_equal(const interbotix_perception_msgs__srv__FilterParams_Request * lhs, const interbotix_perception_msgs__srv__FilterParams_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_filter_min
  if (lhs->x_filter_min != rhs->x_filter_min) {
    return false;
  }
  // x_filter_max
  if (lhs->x_filter_max != rhs->x_filter_max) {
    return false;
  }
  // y_filter_min
  if (lhs->y_filter_min != rhs->y_filter_min) {
    return false;
  }
  // y_filter_max
  if (lhs->y_filter_max != rhs->y_filter_max) {
    return false;
  }
  // z_filter_min
  if (lhs->z_filter_min != rhs->z_filter_min) {
    return false;
  }
  // z_filter_max
  if (lhs->z_filter_max != rhs->z_filter_max) {
    return false;
  }
  // voxel_leaf_size
  if (lhs->voxel_leaf_size != rhs->voxel_leaf_size) {
    return false;
  }
  // plane_max_iter
  if (lhs->plane_max_iter != rhs->plane_max_iter) {
    return false;
  }
  // plane_dist_thresh
  if (lhs->plane_dist_thresh != rhs->plane_dist_thresh) {
    return false;
  }
  // ror_radius_search
  if (lhs->ror_radius_search != rhs->ror_radius_search) {
    return false;
  }
  // ror_min_neighbors
  if (lhs->ror_min_neighbors != rhs->ror_min_neighbors) {
    return false;
  }
  // cluster_tol
  if (lhs->cluster_tol != rhs->cluster_tol) {
    return false;
  }
  // cluster_min_size
  if (lhs->cluster_min_size != rhs->cluster_min_size) {
    return false;
  }
  // cluster_max_size
  if (lhs->cluster_max_size != rhs->cluster_max_size) {
    return false;
  }
  return true;
}

bool
interbotix_perception_msgs__srv__FilterParams_Request__copy(
  const interbotix_perception_msgs__srv__FilterParams_Request * input,
  interbotix_perception_msgs__srv__FilterParams_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x_filter_min
  output->x_filter_min = input->x_filter_min;
  // x_filter_max
  output->x_filter_max = input->x_filter_max;
  // y_filter_min
  output->y_filter_min = input->y_filter_min;
  // y_filter_max
  output->y_filter_max = input->y_filter_max;
  // z_filter_min
  output->z_filter_min = input->z_filter_min;
  // z_filter_max
  output->z_filter_max = input->z_filter_max;
  // voxel_leaf_size
  output->voxel_leaf_size = input->voxel_leaf_size;
  // plane_max_iter
  output->plane_max_iter = input->plane_max_iter;
  // plane_dist_thresh
  output->plane_dist_thresh = input->plane_dist_thresh;
  // ror_radius_search
  output->ror_radius_search = input->ror_radius_search;
  // ror_min_neighbors
  output->ror_min_neighbors = input->ror_min_neighbors;
  // cluster_tol
  output->cluster_tol = input->cluster_tol;
  // cluster_min_size
  output->cluster_min_size = input->cluster_min_size;
  // cluster_max_size
  output->cluster_max_size = input->cluster_max_size;
  return true;
}

interbotix_perception_msgs__srv__FilterParams_Request *
interbotix_perception_msgs__srv__FilterParams_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__FilterParams_Request * msg = (interbotix_perception_msgs__srv__FilterParams_Request *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__FilterParams_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_perception_msgs__srv__FilterParams_Request));
  bool success = interbotix_perception_msgs__srv__FilterParams_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_perception_msgs__srv__FilterParams_Request__destroy(interbotix_perception_msgs__srv__FilterParams_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_perception_msgs__srv__FilterParams_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_perception_msgs__srv__FilterParams_Request__Sequence__init(interbotix_perception_msgs__srv__FilterParams_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__FilterParams_Request * data = NULL;

  if (size) {
    data = (interbotix_perception_msgs__srv__FilterParams_Request *)allocator.zero_allocate(size, sizeof(interbotix_perception_msgs__srv__FilterParams_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_perception_msgs__srv__FilterParams_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_perception_msgs__srv__FilterParams_Request__fini(&data[i - 1]);
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
interbotix_perception_msgs__srv__FilterParams_Request__Sequence__fini(interbotix_perception_msgs__srv__FilterParams_Request__Sequence * array)
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
      interbotix_perception_msgs__srv__FilterParams_Request__fini(&array->data[i]);
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

interbotix_perception_msgs__srv__FilterParams_Request__Sequence *
interbotix_perception_msgs__srv__FilterParams_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__FilterParams_Request__Sequence * array = (interbotix_perception_msgs__srv__FilterParams_Request__Sequence *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__FilterParams_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_perception_msgs__srv__FilterParams_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_perception_msgs__srv__FilterParams_Request__Sequence__destroy(interbotix_perception_msgs__srv__FilterParams_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_perception_msgs__srv__FilterParams_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_perception_msgs__srv__FilterParams_Request__Sequence__are_equal(const interbotix_perception_msgs__srv__FilterParams_Request__Sequence * lhs, const interbotix_perception_msgs__srv__FilterParams_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_perception_msgs__srv__FilterParams_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_perception_msgs__srv__FilterParams_Request__Sequence__copy(
  const interbotix_perception_msgs__srv__FilterParams_Request__Sequence * input,
  interbotix_perception_msgs__srv__FilterParams_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_perception_msgs__srv__FilterParams_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_perception_msgs__srv__FilterParams_Request * data =
      (interbotix_perception_msgs__srv__FilterParams_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_perception_msgs__srv__FilterParams_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_perception_msgs__srv__FilterParams_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_perception_msgs__srv__FilterParams_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interbotix_perception_msgs__srv__FilterParams_Response__init(interbotix_perception_msgs__srv__FilterParams_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
interbotix_perception_msgs__srv__FilterParams_Response__fini(interbotix_perception_msgs__srv__FilterParams_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
interbotix_perception_msgs__srv__FilterParams_Response__are_equal(const interbotix_perception_msgs__srv__FilterParams_Response * lhs, const interbotix_perception_msgs__srv__FilterParams_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
interbotix_perception_msgs__srv__FilterParams_Response__copy(
  const interbotix_perception_msgs__srv__FilterParams_Response * input,
  interbotix_perception_msgs__srv__FilterParams_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

interbotix_perception_msgs__srv__FilterParams_Response *
interbotix_perception_msgs__srv__FilterParams_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__FilterParams_Response * msg = (interbotix_perception_msgs__srv__FilterParams_Response *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__FilterParams_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interbotix_perception_msgs__srv__FilterParams_Response));
  bool success = interbotix_perception_msgs__srv__FilterParams_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interbotix_perception_msgs__srv__FilterParams_Response__destroy(interbotix_perception_msgs__srv__FilterParams_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interbotix_perception_msgs__srv__FilterParams_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interbotix_perception_msgs__srv__FilterParams_Response__Sequence__init(interbotix_perception_msgs__srv__FilterParams_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__FilterParams_Response * data = NULL;

  if (size) {
    data = (interbotix_perception_msgs__srv__FilterParams_Response *)allocator.zero_allocate(size, sizeof(interbotix_perception_msgs__srv__FilterParams_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interbotix_perception_msgs__srv__FilterParams_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interbotix_perception_msgs__srv__FilterParams_Response__fini(&data[i - 1]);
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
interbotix_perception_msgs__srv__FilterParams_Response__Sequence__fini(interbotix_perception_msgs__srv__FilterParams_Response__Sequence * array)
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
      interbotix_perception_msgs__srv__FilterParams_Response__fini(&array->data[i]);
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

interbotix_perception_msgs__srv__FilterParams_Response__Sequence *
interbotix_perception_msgs__srv__FilterParams_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interbotix_perception_msgs__srv__FilterParams_Response__Sequence * array = (interbotix_perception_msgs__srv__FilterParams_Response__Sequence *)allocator.allocate(sizeof(interbotix_perception_msgs__srv__FilterParams_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interbotix_perception_msgs__srv__FilterParams_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interbotix_perception_msgs__srv__FilterParams_Response__Sequence__destroy(interbotix_perception_msgs__srv__FilterParams_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interbotix_perception_msgs__srv__FilterParams_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interbotix_perception_msgs__srv__FilterParams_Response__Sequence__are_equal(const interbotix_perception_msgs__srv__FilterParams_Response__Sequence * lhs, const interbotix_perception_msgs__srv__FilterParams_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interbotix_perception_msgs__srv__FilterParams_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interbotix_perception_msgs__srv__FilterParams_Response__Sequence__copy(
  const interbotix_perception_msgs__srv__FilterParams_Response__Sequence * input,
  interbotix_perception_msgs__srv__FilterParams_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interbotix_perception_msgs__srv__FilterParams_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interbotix_perception_msgs__srv__FilterParams_Response * data =
      (interbotix_perception_msgs__srv__FilterParams_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interbotix_perception_msgs__srv__FilterParams_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interbotix_perception_msgs__srv__FilterParams_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interbotix_perception_msgs__srv__FilterParams_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
