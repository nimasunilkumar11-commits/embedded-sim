#include <stdlib.h>
#include <time.h>
#include "sensor.h"

void init_sensors(void) {
    srand(time(NULL));
}

SensorData read_sensors(void) {
    SensorData data;

    data.temperature = 20.0 + (rand() % 1500) / 100.0;  // 20–35 °C
    data.pressure = 950.0 + (rand() % 1000) / 10.0;     // 950–1050 hPa
    data.motion = rand() % 2;                           // 0 or 1

    return data;
}