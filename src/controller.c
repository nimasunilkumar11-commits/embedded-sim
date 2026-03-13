#include <stdio.h>
#include "controller.h"
#include "logger.h"

#define TEMP_THRESHOLD 30.0
#define PRESSURE_LOW 970.0

void process_data(SensorData data) {

    if (data.temperature < -40 || data.temperature > 125)
{
    log_message(LOG_ERROR, "Temperature sensor fault");
}

if (data.pressure < 800 || data.pressure > 1200)
{
    log_message(LOG_ERROR, "Pressure sensor fault");
}
}