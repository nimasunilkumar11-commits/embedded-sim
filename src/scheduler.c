#include <unistd.h>
#include "sensor.h"
#include "controller.h"

void scheduler_run(void)
{
    SensorData data = read_sensors();
    process_data(data);

    sleep(2);
}