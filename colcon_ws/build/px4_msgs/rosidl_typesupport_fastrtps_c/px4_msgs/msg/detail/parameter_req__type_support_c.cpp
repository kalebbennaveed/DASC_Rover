// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/ParameterReq.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/parameter_req__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/parameter_req__struct.h"
#include "px4_msgs/msg/detail/parameter_req__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ParameterReq__ros_msg_type = px4_msgs__msg__ParameterReq;

static bool _ParameterReq__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParameterReq__ros_msg_type * ros_message = static_cast<const _ParameterReq__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: param_name
  {
    size_t size = 16;
    auto array_ptr = ros_message->param_name;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: set
  {
    cdr << (ros_message->set ? true : false);
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  return true;
}

static bool _ParameterReq__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParameterReq__ros_msg_type * ros_message = static_cast<_ParameterReq__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: param_name
  {
    size_t size = 16;
    auto array_ptr = ros_message->param_name;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: set
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set = tmp ? true : false;
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__ParameterReq(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterReq__ros_msg_type * ros_message = static_cast<const _ParameterReq__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_name
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->param_name;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set
  {
    size_t item_size = sizeof(ros_message->set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterReq__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__ParameterReq(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__ParameterReq(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: param_name
  {
    size_t array_size = 16;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ParameterReq__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__ParameterReq(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ParameterReq = {
  "px4_msgs::msg",
  "ParameterReq",
  _ParameterReq__cdr_serialize,
  _ParameterReq__cdr_deserialize,
  _ParameterReq__get_serialized_size,
  _ParameterReq__max_serialized_size
};

static rosidl_message_type_support_t _ParameterReq__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParameterReq,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, ParameterReq)() {
  return &_ParameterReq__type_support;
}

#if defined(__cplusplus)
}
#endif
