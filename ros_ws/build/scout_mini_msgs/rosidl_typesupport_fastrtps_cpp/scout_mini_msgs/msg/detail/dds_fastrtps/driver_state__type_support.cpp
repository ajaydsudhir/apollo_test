// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from scout_mini_msgs:msg/DriverState.idl
// generated code does not contain a copyright notice
#include "scout_mini_msgs/msg/detail/driver_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "scout_mini_msgs/msg/detail/driver_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace scout_mini_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scout_mini_msgs
cdr_serialize(
  const scout_mini_msgs::msg::DriverState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: driver_voltage
  {
    cdr << ros_message.driver_voltage;
  }
  // Member: driver_temperature
  {
    cdr << ros_message.driver_temperature;
  }
  // Member: communication_failure
  {
    cdr << ros_message.communication_failure;
  }
  // Member: low_supply_voltage
  {
    cdr << ros_message.low_supply_voltage;
  }
  // Member: motor_over_temperature
  {
    cdr << ros_message.motor_over_temperature;
  }
  // Member: driver_over_current
  {
    cdr << ros_message.driver_over_current;
  }
  // Member: driver_over_temperature
  {
    cdr << ros_message.driver_over_temperature;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scout_mini_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  scout_mini_msgs::msg::DriverState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: driver_voltage
  {
    cdr >> ros_message.driver_voltage;
  }

  // Member: driver_temperature
  {
    cdr >> ros_message.driver_temperature;
  }

  // Member: communication_failure
  {
    cdr >> ros_message.communication_failure;
  }

  // Member: low_supply_voltage
  {
    cdr >> ros_message.low_supply_voltage;
  }

  // Member: motor_over_temperature
  {
    cdr >> ros_message.motor_over_temperature;
  }

  // Member: driver_over_current
  {
    cdr >> ros_message.driver_over_current;
  }

  // Member: driver_over_temperature
  {
    cdr >> ros_message.driver_over_temperature;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scout_mini_msgs
get_serialized_size(
  const scout_mini_msgs::msg::DriverState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: driver_voltage
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.driver_voltage[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.driver_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: communication_failure
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.communication_failure[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_supply_voltage
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.low_supply_voltage[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_over_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.motor_over_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_over_current
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.driver_over_current[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_over_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.driver_over_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_scout_mini_msgs
max_serialized_size_DriverState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: driver_voltage
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driver_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: communication_failure
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_supply_voltage
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_over_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driver_over_current
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driver_over_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = scout_mini_msgs::msg::DriverState;
    is_plain =
      (
      offsetof(DataType, driver_over_temperature) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DriverState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const scout_mini_msgs::msg::DriverState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DriverState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<scout_mini_msgs::msg::DriverState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DriverState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const scout_mini_msgs::msg::DriverState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DriverState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DriverState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DriverState__callbacks = {
  "scout_mini_msgs::msg",
  "DriverState",
  _DriverState__cdr_serialize,
  _DriverState__cdr_deserialize,
  _DriverState__get_serialized_size,
  _DriverState__max_serialized_size
};

static rosidl_message_type_support_t _DriverState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DriverState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace scout_mini_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_scout_mini_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<scout_mini_msgs::msg::DriverState>()
{
  return &scout_mini_msgs::msg::typesupport_fastrtps_cpp::_DriverState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, scout_mini_msgs, msg, DriverState)() {
  return &scout_mini_msgs::msg::typesupport_fastrtps_cpp::_DriverState__handle;
}

#ifdef __cplusplus
}
#endif
