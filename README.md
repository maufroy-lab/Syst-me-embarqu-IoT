# 01 — Système embarqué IoT

Projet de démonstration d'un système embarqué IoT basé sur un microcontrôleur ESP32.

## Objectif

Acquérir des mesures environnementales, les filtrer localement, puis les publier vers un serveur MQTT afin de permettre leur supervision à distance.

### Fonctions principales

- acquisition température / humidité ;
- validation et filtrage simple des mesures ;
- connexion Wi-Fi ;
- publication MQTT périodique ;
- signalement de l'état du nœud ;
- fonctionnement cyclique à faible consommation ;
- séparation claire entre acquisition, communication et configuration.

## Hypothèses techniques

| Élément | Choix |
|---|---|
| MCU | ESP32 |
| Capteur | DHT22 / AM2302 |
| Réseau | Wi-Fi 2,4 GHz |
| Protocole applicatif | MQTT |
| Langage firmware | C |
| Alimentation | 5 V avec régulation 3,3 V |
| Période de mesure | 30 s |
| Format de télémétrie | JSON |

## Arborescence

- `docs/` : documentation d'ingénierie ;
- `firmware/` : code embarqué et tests ;
- `hardware/` : architecture matérielle, schéma et documentation ;
- `measurements/` : protocole et relevés ;
- `media/` : illustrations du projet.

## Démarrage rapide

1. Installer l'environnement ESP-IDF ou adapter le code à la chaîne de compilation de la carte cible.
2. Renseigner les paramètres réseau et MQTT dans `firmware/src/config.h`.
3. Intégrer le capteur DHT22 sur le GPIO défini dans la configuration.
4. Compiler et flasher le firmware.
5. Vérifier les publications sur le broker MQTT.

> Les identifiants Wi-Fi, mots de passe et secrets MQTT ne doivent jamais être versionnés.

## État du projet

Prototype pédagogique : l'architecture et le firmware constituent une base de référence et doivent être validés sur le matériel réel avant déploiement.
