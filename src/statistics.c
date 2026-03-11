#include <stdio.h>
#include "statistics.h"

static float min_temp;
static float max_temp;
static float sum_temp;
static int count;

void stats_init(void)
{
    min_temp = 1000;
    max_temp = -1000;
    sum_temp = 0;
    count = 0;
}

void stats_update(float temperature)
{
    if (temperature < min_temp)
        min_temp = temperature;

    if (temperature > max_temp)
        max_temp = temperature;

    sum_temp += temperature;
    count++;
}

void stats_print(void)
{
    if (count == 0)
        return;

    float avg = sum_temp / count;

    printf("\nTemperature Statistics:\n");
    printf("Average: %.2f C\n", avg);
    printf("Min: %.2f C\n", min_temp);
    printf("Max: %.2f C\n\n", max_temp);
}