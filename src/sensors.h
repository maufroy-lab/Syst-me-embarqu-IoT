#ifndef SENSORS_H
#define SENSORS_H

typedef struct {
    float temperature_c;
    float humidity_pct;
    int valid;
} sensor_reading_t;

int sensors_init(int gpio);
int sensors_read(sensor_reading_t *reading);
int sensors_validate(const sensor_reading_t *reading);

#endif
