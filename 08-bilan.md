# 08 — Bilan

## Apports

Le projet permet de valider une architecture IoT complète, depuis l'acquisition jusqu'à la publication MQTT.

## Points satisfaisants

- architecture logicielle modulaire ;
- protocole MQTT adapté au cas d'usage ;
- gestion prévue des pertes réseau ;
- documentation structurée.

## Améliorations

Pour une version 2 :

- passer à un capteur plus précis ;
- ajouter TLS MQTT ;
- ajouter un mécanisme de configuration persistante ;
- implémenter une file locale de messages ;
- ajouter un watchdog ;
- mesurer précisément la consommation ;
- industrialiser les tests HIL.

## Conclusion

Le prototype fournit une base cohérente pour un système embarqué IoT de télémétrie. La prochaine étape est la validation sur matériel réel puis la qualification de la robustesse et de la sécurité.
