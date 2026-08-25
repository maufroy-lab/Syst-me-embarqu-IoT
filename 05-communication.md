# 05 — Communication

## Réseau

Le nœud utilise Wi-Fi 2,4 GHz. Une adresse IP peut être obtenue par DHCP.

## MQTT

Topics proposés :

- `iot/node-01/status`
- `iot/node-01/telemetry`
- `iot/node-01/event`

### Exemple de télémétrie

```json
{
  "device_id": "node-01",
  "temperature_c": 23.4,
  "humidity_pct": 48.2,
  "uptime_s": 3600
}
```

### QoS

Le prototype utilise QoS 0 pour la télémétrie fréquente. Pour des événements critiques, QoS 1 est préférable.

## Sécurité

En production, MQTT doit être encapsulé par TLS, avec authentification et validation du certificat du serveur. Les secrets ne doivent pas être placés dans `config.h` versionné.
