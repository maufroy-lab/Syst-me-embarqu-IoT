#include "communication.h"
#include "config.h"
#include <stdio.h>

static int connected = 0;

communication_status_t communication_init(void)
{
    /* Initialiser Wi-Fi + client MQTT via le SDK de la cible. */
    connected = 0;
    return COMM_OK;
}

communication_status_t communication_connect(void)
{
    /*
     * Implémenter ici la connexion Wi-Fi puis MQTT.
     * Aucun secret réel n'est stocké dans le dépôt.
     */
    connected = 1;
    return COMM_OK;
}

communication_status_t communication_publish_status(const char *status)
{
    if (!connected || status == NULL) {
        return COMM_ERROR;
    }

    printf("MQTT %s: %s\n", MQTT_STATUS_TOPIC, status);
    return COMM_OK;
}

communication_status_t communication_publish_telemetry(
    float temperature_c,
    float humidity_pct,
    unsigned long uptime_s)
{
    if (!connected) {
        return COMM_ERROR;
    }

    printf(
        "MQTT %s: {\"device_id\":\"%s\",\"temperature_c\":%.2f,"
        "\"humidity_pct\":%.2f,\"uptime_s\":%lu}\n",
        MQTT_TELEMETRY_TOPIC,
        DEVICE_ID,
        temperature_c,
        humidity_pct,
        uptime_s
    );

    return COMM_OK;
}

communication_status_t communication_loop(void)
{
    if (!connected) {
        return communication_connect();
    }

    /* Traiter ici les événements réseau / MQTT. */
    return COMM_OK;
}
