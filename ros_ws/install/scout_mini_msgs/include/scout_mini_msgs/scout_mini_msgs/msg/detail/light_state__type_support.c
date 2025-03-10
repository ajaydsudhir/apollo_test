// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scout_mini_msgs:msg/LightState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scout_mini_msgs/msg/detail/light_state__rosidl_typesupport_introspection_c.h"
#include "scout_mini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scout_mini_msgs/msg/detail/light_state__functions.h"
#include "scout_mini_msgs/msg/detail/light_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scout_mini_msgs__msg__LightState__init(message_memory);
}

void scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_fini_function(void * message_memory)
{
  scout_mini_msgs__msg__LightState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scout_mini_msgs__msg__LightState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scout_mini_msgs__msg__LightState, control_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scout_mini_msgs__msg__LightState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brightness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scout_mini_msgs__msg__LightState, brightness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_members = {
  "scout_mini_msgs__msg",  // message namespace
  "LightState",  // message name
  4,  // number of fields
  sizeof(scout_mini_msgs__msg__LightState),
  scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_member_array,  // message members
  scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_init_function,  // function to initialize message memory (memory has to be allocated)
  scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_type_support_handle = {
  0,
  &scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scout_mini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scout_mini_msgs, msg, LightState)() {
  scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_type_support_handle.typesupport_identifier) {
    scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &scout_mini_msgs__msg__LightState__rosidl_typesupport_introspection_c__LightState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
