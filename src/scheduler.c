#include <unistd.h>
#include "sensor.h"
#include "controller.h"
#include "statistics.h"
#include "command.h"

void scheduler_run(void)
{
    SensorData data = read_sensors();

    stats_update(data.temperature);

    process_data(data);

    command_check();

    sleep(2);
}