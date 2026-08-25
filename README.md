# Measurements

## Protocole

1. Alimenter le nœud.
2. Laisser le système se stabiliser pendant 5 minutes.
3. Enregistrer les mesures pendant 24 h.
4. Noter les interruptions réseau.
5. Calculer le taux de livraison MQTT.

## Format CSV recommandé

```text
timestamp,device_id,temperature_c,humidity_pct,mqtt_published
2026-08-25T20:00:00Z,node-01,23.4,48.2,1
```

Les données réelles peuvent être placées dans un répertoire local ignoré par Git selon les règles du `.gitignore`.
