# 03 — Analyse

## 3.1 Chaîne fonctionnelle

La chaîne retenue est :

**Capteur → acquisition → validation → filtrage → communication → MQTT → supervision**

Cette séparation limite le couplage entre les fonctions matérielles et réseau.

## 3.2 Choix du capteur

Le DHT22 est retenu pour sa simplicité et son faible coût. Il convient à un prototype, mais sa fréquence d'échantillonnage et sa précision restent inférieures à celles de capteurs industriels.

## 3.3 Choix de MQTT

MQTT est adapté à un nœud IoT car son modèle publish/subscribe réduit le couplage entre producteur et consommateur. Le broker peut redistribuer les mesures à plusieurs applications.

## 3.4 Risques

| Risque | Impact | Réponse |
|---|---|---|
| Perte Wi-Fi | Élevé | Reconnexion temporisée |
| Capteur indisponible | Moyen | Validation et compteur d'erreurs |
| Broker indisponible | Élevé | File minimale / nouvelle tentative |
| Secrets exposés | Élevé | Configuration locale ignorée par Git |
| Bruit de mesure | Faible à moyen | Moyenne glissante simple |

## 3.5 Limites

Le prototype ne constitue pas un produit certifié. La sécurité TLS, la gestion des certificats, le stockage sécurisé des clés et la qualification CEM devront être traités avant un usage industriel.
