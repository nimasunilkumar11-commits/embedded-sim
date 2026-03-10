#include "sensor.h"
#include "logger.h"
#include "scheduler.h"

int main()
{
    init_sensors();
    init_logger();

    while(1)
    {
        scheduler_run();
    }

    close_logger();
    return 0;
}