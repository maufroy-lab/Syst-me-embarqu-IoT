# 02 — Cahier des charges

## Exigences fonctionnelles

| ID | Exigence | Critère d'acceptation |
|---|---|---|
| EF-01 | Mesurer température et humidité | Une mesure valide est obtenue à chaque cycle |
| EF-02 | Vérifier les données | Une valeur manifestement invalide est rejetée |
| EF-03 | Se connecter au Wi-Fi | Le nœud rejoint le réseau configuré |
| EF-04 | Publier via MQTT | Une télémétrie est publiée sur le topic configuré |
| EF-05 | Gérer une coupure réseau | Le firmware tente une reconnexion sans redémarrage manuel |
| EF-06 | Signaler son état | Un message d'état est publié au démarrage |

## Exigences non fonctionnelles

- période nominale : 30 s ;
- architecture modulaire ;
- configuration centralisée ;
- absence de secrets dans le dépôt ;
- messages JSON lisibles ;
- code compilable avec une chaîne C compatible ESP32.

## Critères de réussite

Le prototype est considéré comme fonctionnel si au moins 95 % des cycles de mesure sur une campagne de 24 h aboutissent à une télémétrie correctement reçue, hors indisponibilité volontaire du réseau.
