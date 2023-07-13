// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failsafe_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__FailsafeFlags__init(px4_msgs__msg__FailsafeFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_mission
  // mode_req_offboard_signal
  // mode_req_home_position
  // mode_req_wind_and_flight_time_compliance
  // mode_req_prevent_arming
  // mode_req_manual_control
  // mode_req_other
  // angular_velocity_invalid
  // attitude_invalid
  // local_altitude_invalid
  // local_position_invalid
  // local_position_invalid_relaxed
  // local_velocity_invalid
  // global_position_invalid
  // auto_mission_missing
  // offboard_control_signal_lost
  // home_position_invalid
  // manual_control_signal_lost
  // gcs_connection_lost
  // battery_warning
  // battery_low_remaining_time
  // battery_unhealthy
  // primary_geofence_breached
  // mission_failure
  // vtol_fixed_wing_system_failure
  // wind_limit_exceeded
  // flight_time_limit_exceeded
  // local_position_accuracy_low
  // fd_critical_failure
  // fd_esc_arming_failure
  // fd_imbalanced_prop
  // fd_motor_failure
  return true;
}

void
px4_msgs__msg__FailsafeFlags__fini(px4_msgs__msg__FailsafeFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_mission
  // mode_req_offboard_signal
  // mode_req_home_position
  // mode_req_wind_and_flight_time_compliance
  // mode_req_prevent_arming
  // mode_req_manual_control
  // mode_req_other
  // angular_velocity_invalid
  // attitude_invalid
  // local_altitude_invalid
  // local_position_invalid
  // local_position_invalid_relaxed
  // local_velocity_invalid
  // global_position_invalid
  // auto_mission_missing
  // offboard_control_signal_lost
  // home_position_invalid
  // manual_control_signal_lost
  // gcs_connection_lost
  // battery_warning
  // battery_low_remaining_time
  // battery_unhealthy
  // primary_geofence_breached
  // mission_failure
  // vtol_fixed_wing_system_failure
  // wind_limit_exceeded
  // flight_time_limit_exceeded
  // local_position_accuracy_low
  // fd_critical_failure
  // fd_esc_arming_failure
  // fd_imbalanced_prop
  // fd_motor_failure
}

px4_msgs__msg__FailsafeFlags *
px4_msgs__msg__FailsafeFlags__create()
{
  px4_msgs__msg__FailsafeFlags * msg = (px4_msgs__msg__FailsafeFlags *)malloc(sizeof(px4_msgs__msg__FailsafeFlags));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FailsafeFlags));
  bool success = px4_msgs__msg__FailsafeFlags__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FailsafeFlags__destroy(px4_msgs__msg__FailsafeFlags * msg)
{
  if (msg) {
    px4_msgs__msg__FailsafeFlags__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__FailsafeFlags__Sequence__init(px4_msgs__msg__FailsafeFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__FailsafeFlags * data = NULL;
  if (size) {
    data = (px4_msgs__msg__FailsafeFlags *)calloc(size, sizeof(px4_msgs__msg__FailsafeFlags));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FailsafeFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FailsafeFlags__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__FailsafeFlags__Sequence__fini(px4_msgs__msg__FailsafeFlags__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__FailsafeFlags__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__FailsafeFlags__Sequence *
px4_msgs__msg__FailsafeFlags__Sequence__create(size_t size)
{
  px4_msgs__msg__FailsafeFlags__Sequence * array = (px4_msgs__msg__FailsafeFlags__Sequence *)malloc(sizeof(px4_msgs__msg__FailsafeFlags__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FailsafeFlags__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FailsafeFlags__Sequence__destroy(px4_msgs__msg__FailsafeFlags__Sequence * array)
{
  if (array) {
    px4_msgs__msg__FailsafeFlags__Sequence__fini(array);
  }
  free(array);
}
