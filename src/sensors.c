#include "sensors.h"
#include "config.h"
#include <stddef.h>

int sensors_init(int gpio)
{
    (void)gpio;
    /* Brancher ici le driver DHT22 de la plateforme cible. */
    return 0;
}

int sensors_read(sensor_reading_t *reading)
{
    if (reading == NULL) {
        return -1;
    }

    /*
     * Valeurs de démonstration. Sur la cible réelle, remplacer par
     * une lecture du driver DHT22.
     */
    reading->temperature_c = 23.5f;
    reading->humidity_pct = 48.0f;
    reading->valid = 1;

    return sensors_validate(reading) ? 0 : -2;
}

int sensors_validate(const sensor_reading_t *reading)
{
    if (reading == NULL || !reading->valid) {
        return 0;
    }

    if (reading->temperature_c < SENSOR_MIN_TEMP_C ||
        reading->temperature_c > SENSOR_MAX_TEMP_C) {
        return 0;
    }

    if (reading->humidity_pct < SENSOR_MIN_HUMIDITY ||
        reading->humidity_pct > SENSOR_MAX_HUMIDITY) {
        return 0;
    }

    return 1;
}
