#include <stdio.h>
#include "controller.h"
#include "logger.h"

#define TEMP_THRESHOLD 30.0
#define PRESSURE_LOW 970.0

void process_data(SensorData data) {

    if (data.temperature > TEMP_THRESHOLD) {
        log_message(LOG_WARNING, "High Temperature Detected");
    }

    if (data.pressure < PRESSURE_LOW) {
        log_message(LOG_WARNING, "Low Pressure Detected");
    }

    if (data.motion) {
        log_message(LOG_INFO, "Motion Detected");
    }
}