#include "config.h"
#include "sensors.h"
#include "communication.h"
#include <stdio.h>

static unsigned long uptime_s = 0;

int main(void)
{
    sensor_reading_t reading;

    if (sensors_init(SENSOR_GPIO) != 0) {
        return 1;
    }

    if (communication_init() != COMM_OK) {
        return 2;
    }

    communication_connect();
    communication_publish_status("online");

    for (;;) {
        communication_loop();

        if (sensors_read(&reading) == 0 &&
            sensors_validate(&reading)) {
            communication_publish_telemetry(
                reading.temperature_c,
                reading.humidity_pct,
                uptime_s
            );
        } else {
            communication_publish_status("sensor_error");
        }

        /*
         * Remplacer par le mécanisme de temporisation de la plateforme.
         * Ici, la période est exprimée pour rendre l'intention explicite.
         */
        uptime_s += SAMPLE_PERIOD_MS / 1000UL;
        printf("next sample in %lu ms\n", SAMPLE_PERIOD_MS);
    }

    return 0;
}
