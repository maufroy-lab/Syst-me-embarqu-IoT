# Hardware

## Composition

- carte ESP32 ;
- capteur DHT22 ;
- alimentation 5 V ;
- régulation 3,3 V intégrée à la carte de développement ;
- câble USB pour programmation et alimentation.

## Connexions proposées

| Signal | ESP32 | DHT22 |
|---|---|---|
| VCC | 3V3 | VCC |
| DATA | GPIO 4 | DATA |
| GND | GND | GND |

Ajouter une résistance de pull-up adaptée sur DATA si elle n'est pas déjà intégrée au module utilisé.

## Schéma

Voir `schematics/schema.pdf`.

## Datasheets

Le répertoire `datasheets/` est réservé aux documents fournisseurs utilisés pour la validation matérielle. Les documents propriétaires ou soumis à licence ne sont pas inclus dans ce dépôt de démonstration.
