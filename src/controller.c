#include <stdio.h>
#include "controller.h"

#define TEMP_THRESHOLD 30.0
#define PRESSURE_LOW 970.0

void process_data(SensorData data) {

    if (data.temperature > TEMP_THRESHOLD) {
        printf("WARNING: High Temperature!\n");
    }

    if (data.pressure < PRESSURE_LOW) {
        printf("WARNING: Low Pressure!\n");
    }

    if (data.motion) {
        printf("ALERT: Motion Detected!\n");
    }
}