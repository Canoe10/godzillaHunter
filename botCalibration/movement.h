#ifndef MOVEMENT_H
#define MOVEMENT_H

#define MOVEOFFSET 0
#define TURNOFFSET 10 // - for undershoot + for overshoot degrees off of correct turn

#include "open_interface.h"
#include "button.h"

double moveCalibrate(oi_t *sensor_data);
double turnCalibrate(oi_t *sensor_data);

double move_forward(oi_t *sensor_data, double distance_mm);
double move_backward(oi_t *sensor_data, double distance_mm);
double turn_right(oi_t *sensor, double degrees);
double turn_left(oi_t *sensor, double degrees);

#endif
