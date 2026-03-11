#ifndef CONFIG_H
#define CONFIG_H

typedef struct
{
    float temp_threshold;
    float pressure_threshold;
} SystemConfig;

extern SystemConfig config;

void load_config(void);

#endif