# 06 — Tests

## Tests unitaires

Les fonctions de validation des mesures doivent être testées avec :

- température dans la plage ;
- température hors plage ;
- humidité dans la plage ;
- humidité hors plage ;
- valeur non numérique / lecture invalide.

## Tests d'intégration

1. Démarrer le broker MQTT.
2. Démarrer le nœud.
3. Vérifier la connexion Wi-Fi.
4. Observer le message `status`.
5. Observer les publications `telemetry`.
6. Couper le Wi-Fi pendant plusieurs cycles.
7. Rétablir le Wi-Fi.
8. Vérifier la reprise automatique.

## Test de campagne

Une campagne de 24 h doit enregistrer :

- nombre de cycles prévus ;
- nombre de mesures valides ;
- nombre de mesures invalides ;
- nombre de publications réussies ;
- nombre de reconnexions ;
- durée de fonctionnement.

## Indicateur

Taux de livraison = publications reçues / publications attendues × 100.
