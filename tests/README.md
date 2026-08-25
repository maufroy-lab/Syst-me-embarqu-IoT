# Tests firmware

## Cibles

Les tests doivent couvrir en priorité les fonctions déterministes :

- `sensors_validate(NULL)` → invalide ;
- température hors plage → invalide ;
- humidité hors plage → invalide ;
- mesure nominale → valide.

Les tests d'intégration doivent ensuite valider le comportement Wi-Fi/MQTT sur matériel réel ou banc HIL.

## Exemple de scénario

Entrée : `temperature=23.5`, `humidity=48.0`, `valid=1`.

Résultat attendu : mesure acceptée et publication de télémétrie.
