#include <unistd.h>
#include "sensor.h"
#include "controller.h"
#include "statistics.h"

void scheduler_run(void)
{
    SensorData data = read_sensors();
    stats_update(data.temperature);
    process_data(data);

    sleep(2);
}