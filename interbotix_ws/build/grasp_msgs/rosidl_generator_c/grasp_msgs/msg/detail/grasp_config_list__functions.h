// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__FUNCTIONS_H_
#define GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "grasp_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "grasp_msgs/msg/detail/grasp_config_list__struct.h"

/// Initialize msg/GraspConfigList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * grasp_msgs__msg__GraspConfigList
 * )) before or use
 * grasp_msgs__msg__GraspConfigList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfigList__init(grasp_msgs__msg__GraspConfigList * msg);

/// Finalize msg/GraspConfigList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfigList__fini(grasp_msgs__msg__GraspConfigList * msg);

/// Create msg/GraspConfigList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * grasp_msgs__msg__GraspConfigList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
grasp_msgs__msg__GraspConfigList *
grasp_msgs__msg__GraspConfigList__create();

/// Destroy msg/GraspConfigList message.
/**
 * It calls
 * grasp_msgs__msg__GraspConfigList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfigList__destroy(grasp_msgs__msg__GraspConfigList * msg);

/// Check for msg/GraspConfigList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfigList__are_equal(const grasp_msgs__msg__GraspConfigList * lhs, const grasp_msgs__msg__GraspConfigList * rhs);

/// Copy a msg/GraspConfigList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfigList__copy(
  const grasp_msgs__msg__GraspConfigList * input,
  grasp_msgs__msg__GraspConfigList * output);

/// Initialize array of msg/GraspConfigList messages.
/**
 * It allocates the memory for the number of elements and calls
 * grasp_msgs__msg__GraspConfigList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfigList__Sequence__init(grasp_msgs__msg__GraspConfigList__Sequence * array, size_t size);

/// Finalize array of msg/GraspConfigList messages.
/**
 * It calls
 * grasp_msgs__msg__GraspConfigList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfigList__Sequence__fini(grasp_msgs__msg__GraspConfigList__Sequence * array);

/// Create array of msg/GraspConfigList messages.
/**
 * It allocates the memory for the array and calls
 * grasp_msgs__msg__GraspConfigList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
grasp_msgs__msg__GraspConfigList__Sequence *
grasp_msgs__msg__GraspConfigList__Sequence__create(size_t size);

/// Destroy array of msg/GraspConfigList messages.
/**
 * It calls
 * grasp_msgs__msg__GraspConfigList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfigList__Sequence__destroy(grasp_msgs__msg__GraspConfigList__Sequence * array);

/// Check for msg/GraspConfigList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfigList__Sequence__are_equal(const grasp_msgs__msg__GraspConfigList__Sequence * lhs, const grasp_msgs__msg__GraspConfigList__Sequence * rhs);

/// Copy an array of msg/GraspConfigList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfigList__Sequence__copy(
  const grasp_msgs__msg__GraspConfigList__Sequence * input,
  grasp_msgs__msg__GraspConfigList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__FUNCTIONS_H_
