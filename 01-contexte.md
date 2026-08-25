# 01 — Contexte

## 1.1 Problématique

Le projet vise à réaliser un nœud IoT autonome capable d'observer des grandeurs environnementales et de transmettre les résultats à distance.

Le besoin typique est de disposer d'une mesure régulière, horodatable et exploitable par une plateforme de supervision sans imposer une liaison filaire permanente.

## 1.2 Cas d'usage

Le prototype peut servir à :

- surveiller la température et l'humidité d'une pièce ;
- détecter une dérive lente d'une condition environnementale ;
- expérimenter une chaîne complète capteur → microcontrôleur → réseau → broker MQTT ;
- valider les contraintes d'un système embarqué connecté.

## 1.3 Contraintes

Le système doit rester simple, peu coûteux, maintenable et suffisamment robuste pour un prototype de laboratoire.

Les contraintes principales sont la stabilité de l'acquisition, la gestion des pertes réseau, la consommation électrique et la protection des secrets de connexion.
