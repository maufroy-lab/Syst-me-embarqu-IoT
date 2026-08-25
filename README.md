# Firmware

Firmware de référence pour un nœud ESP32 réalisant une acquisition environnementale et une publication MQTT.

## Organisation

- `src/main.c` : boucle applicative ;
- `src/sensors.*` : abstraction du capteur ;
- `src/communication.*` : abstraction réseau/MQTT ;
- `src/config.h` : configuration ;
- `tests/` : stratégie de test.

Le code est volontairement compact et indépendant de secrets réels. Les fonctions matérielles spécifiques peuvent être raccordées à ESP-IDF ou à une couche HAL selon la carte utilisée.
