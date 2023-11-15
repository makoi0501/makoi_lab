// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from object_msgs:msg/PersonAttribute.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE__FUNCTIONS_H_
#define OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_msgs/msg/detail/person_attribute__struct.h"

/// Initialize msg/PersonAttribute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_msgs__msg__PersonAttribute
 * )) before or use
 * object_msgs__msg__PersonAttribute__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PersonAttribute__init(object_msgs__msg__PersonAttribute * msg);

/// Finalize msg/PersonAttribute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PersonAttribute__fini(object_msgs__msg__PersonAttribute * msg);

/// Create msg/PersonAttribute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_msgs__msg__PersonAttribute__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__PersonAttribute *
object_msgs__msg__PersonAttribute__create();

/// Destroy msg/PersonAttribute message.
/**
 * It calls
 * object_msgs__msg__PersonAttribute__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PersonAttribute__destroy(object_msgs__msg__PersonAttribute * msg);

/// Check for msg/PersonAttribute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PersonAttribute__are_equal(const object_msgs__msg__PersonAttribute * lhs, const object_msgs__msg__PersonAttribute * rhs);

/// Copy a msg/PersonAttribute message.
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
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PersonAttribute__copy(
  const object_msgs__msg__PersonAttribute * input,
  object_msgs__msg__PersonAttribute * output);

/// Initialize array of msg/PersonAttribute messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_msgs__msg__PersonAttribute__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PersonAttribute__Sequence__init(object_msgs__msg__PersonAttribute__Sequence * array, size_t size);

/// Finalize array of msg/PersonAttribute messages.
/**
 * It calls
 * object_msgs__msg__PersonAttribute__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PersonAttribute__Sequence__fini(object_msgs__msg__PersonAttribute__Sequence * array);

/// Create array of msg/PersonAttribute messages.
/**
 * It allocates the memory for the array and calls
 * object_msgs__msg__PersonAttribute__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__PersonAttribute__Sequence *
object_msgs__msg__PersonAttribute__Sequence__create(size_t size);

/// Destroy array of msg/PersonAttribute messages.
/**
 * It calls
 * object_msgs__msg__PersonAttribute__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PersonAttribute__Sequence__destroy(object_msgs__msg__PersonAttribute__Sequence * array);

/// Check for msg/PersonAttribute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PersonAttribute__Sequence__are_equal(const object_msgs__msg__PersonAttribute__Sequence * lhs, const object_msgs__msg__PersonAttribute__Sequence * rhs);

/// Copy an array of msg/PersonAttribute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PersonAttribute__Sequence__copy(
  const object_msgs__msg__PersonAttribute__Sequence * input,
  object_msgs__msg__PersonAttribute__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__PERSON_ATTRIBUTE__FUNCTIONS_H_
