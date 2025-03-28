// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scout_mini_msgs:msg/LightCommand.idl
// generated code does not contain a copyright notice

#ifndef SCOUT_MINI_MSGS__MSG__DETAIL__LIGHT_COMMAND__FUNCTIONS_H_
#define SCOUT_MINI_MSGS__MSG__DETAIL__LIGHT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scout_mini_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "scout_mini_msgs/msg/detail/light_command__struct.h"

/// Initialize msg/LightCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scout_mini_msgs__msg__LightCommand
 * )) before or use
 * scout_mini_msgs__msg__LightCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
bool
scout_mini_msgs__msg__LightCommand__init(scout_mini_msgs__msg__LightCommand * msg);

/// Finalize msg/LightCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
void
scout_mini_msgs__msg__LightCommand__fini(scout_mini_msgs__msg__LightCommand * msg);

/// Create msg/LightCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scout_mini_msgs__msg__LightCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
scout_mini_msgs__msg__LightCommand *
scout_mini_msgs__msg__LightCommand__create();

/// Destroy msg/LightCommand message.
/**
 * It calls
 * scout_mini_msgs__msg__LightCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
void
scout_mini_msgs__msg__LightCommand__destroy(scout_mini_msgs__msg__LightCommand * msg);

/// Check for msg/LightCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
bool
scout_mini_msgs__msg__LightCommand__are_equal(const scout_mini_msgs__msg__LightCommand * lhs, const scout_mini_msgs__msg__LightCommand * rhs);

/// Copy a msg/LightCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
bool
scout_mini_msgs__msg__LightCommand__copy(
  const scout_mini_msgs__msg__LightCommand * input,
  scout_mini_msgs__msg__LightCommand * output);

/// Initialize array of msg/LightCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * scout_mini_msgs__msg__LightCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
bool
scout_mini_msgs__msg__LightCommand__Sequence__init(scout_mini_msgs__msg__LightCommand__Sequence * array, size_t size);

/// Finalize array of msg/LightCommand messages.
/**
 * It calls
 * scout_mini_msgs__msg__LightCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
void
scout_mini_msgs__msg__LightCommand__Sequence__fini(scout_mini_msgs__msg__LightCommand__Sequence * array);

/// Create array of msg/LightCommand messages.
/**
 * It allocates the memory for the array and calls
 * scout_mini_msgs__msg__LightCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
scout_mini_msgs__msg__LightCommand__Sequence *
scout_mini_msgs__msg__LightCommand__Sequence__create(size_t size);

/// Destroy array of msg/LightCommand messages.
/**
 * It calls
 * scout_mini_msgs__msg__LightCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
void
scout_mini_msgs__msg__LightCommand__Sequence__destroy(scout_mini_msgs__msg__LightCommand__Sequence * array);

/// Check for msg/LightCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
bool
scout_mini_msgs__msg__LightCommand__Sequence__are_equal(const scout_mini_msgs__msg__LightCommand__Sequence * lhs, const scout_mini_msgs__msg__LightCommand__Sequence * rhs);

/// Copy an array of msg/LightCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_scout_mini_msgs
bool
scout_mini_msgs__msg__LightCommand__Sequence__copy(
  const scout_mini_msgs__msg__LightCommand__Sequence * input,
  scout_mini_msgs__msg__LightCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCOUT_MINI_MSGS__MSG__DETAIL__LIGHT_COMMAND__FUNCTIONS_H_
