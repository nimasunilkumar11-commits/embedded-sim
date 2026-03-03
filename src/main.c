#include <stdio.h>
#include <unistd.h>
#include "sensor.h"
#include "controller.h"

int main() {

    init_sensors();

    while (1) {

        SensorData data = read_sensors();

        printf("Temperature: %.2f C\n", data.temperature);
        printf("Pressure: %.2f hPa\n", data.pressure);
        printf("Motion: %s\n", data.motion ? "Detected" : "None");

        process_data(data);

        printf("-----------------------------\n");

        sleep(2);
    }

    return 0;
}