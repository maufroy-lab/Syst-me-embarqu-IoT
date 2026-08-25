#ifndef CONFIG_H
#define CONFIG_H

#define DEVICE_ID "node-01"
#define SENSOR_GPIO 4

#define SAMPLE_PERIOD_MS 30000UL
#define SENSOR_MIN_TEMP_C (-40.0f)
#define SENSOR_MAX_TEMP_C (80.0f)
#define SENSOR_MIN_HUMIDITY (0.0f)
#define SENSOR_MAX_HUMIDITY (100.0f)

#define MQTT_BROKER_URI "mqtt://192.168.1.100:1883"
#define MQTT_STATUS_TOPIC "iot/node-01/status"
#define MQTT_TELEMETRY_TOPIC "iot/node-01/telemetry"

#endif
