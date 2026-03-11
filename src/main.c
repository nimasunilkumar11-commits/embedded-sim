#include "sensor.h"
#include "logger.h"
#include "config.h"
#include "scheduler.h"
#include "statistics.h"

int main()
{
    init_sensors();
    init_logger();
    load_config();
    stats_init();

    while (1)
    {
        scheduler_run();
    }

    close_logger();
    return 0;
}