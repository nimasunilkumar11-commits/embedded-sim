#ifndef SENSOR_H
#define SENSOR_H

typedef struct {
    float temperature;
    float pressure;
    int motion;
} SensorData;

void init_sensors(void);
SensorData read_sensors(void);

#endif