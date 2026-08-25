# 04 — Architecture

## Architecture logique

```text
+--------------------+
|      DHT22         |
| Température        |
| Humidité           |
+---------+----------+
          |
          v
+--------------------+
| ESP32              |
|                    |
| sensors.c          |
| communication.c    |
| config.h           |
+---------+----------+
          |
       Wi-Fi
          |
          v
+--------------------+
| Broker MQTT        |
+---------+----------+
          |
          v
+--------------------+
| Supervision        |
| Dashboard / API    |
+--------------------+
```

## Découpage logiciel

- `sensors.c/.h` : abstraction de l'acquisition ;
- `communication.c/.h` : transport réseau et MQTT ;
- `config.h` : paramètres de compilation ;
- `main.c` : orchestration du cycle de vie.

## Principes

1. Les capteurs ne connaissent pas la couche MQTT.
2. La couche communication ne dépend pas des détails du capteur.
3. Les paramètres sont regroupés pour faciliter le portage.
4. Les erreurs sont remontées au niveau supérieur.
