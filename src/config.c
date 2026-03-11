#include "config.h"

SystemConfig config;

void load_config(void)
{
    config.temp_threshold = 30.0;
    config.pressure_threshold = 970.0;
}