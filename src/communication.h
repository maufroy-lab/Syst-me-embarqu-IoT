#ifndef COMMUNICATION_H
#define COMMUNICATION_H

typedef enum {
    COMM_OK = 0,
    COMM_ERROR = -1
} communication_status_t;

communication_status_t communication_init(void);
communication_status_t communication_connect(void);
communication_status_t communication_publish_status(const char *status);
communication_status_t communication_publish_telemetry(
    float temperature_c,
    float humidity_pct,
    unsigned long uptime_s
);
communication_status_t communication_loop(void);

#endif
