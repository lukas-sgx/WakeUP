# WakeUP - Shell

Un émulateur de shell interactif écrit en C permettant d'exécuter des commandes.

## Fonctionnalités
- Exécution de commandes de base (cd, ls, echo, etc.)
- Système de fichiers virtuel
- Historique des commandes
- Auto-complétion
- Support des scripts simples

## Installation

1. Clonez le dépôt :
   ```bash
   git clone https://github.com/lukas-sgx/WakeUP.git
   cd WakeUP
   ```

## Utilisation

### Lancement en mode développement
```bash
make dev
```

### Construction pour la production
```bash
make build
```

## Exemple d'utilisation

```shell
$ ls
src  package.json  README.md
$ cd src
$ echo "Bienvenue dans le WakeUP - Shell!"
Bienvenue dans WakeUP - Shell!
```

## Licence

Ce projet est sous licence MIT.

## Auteurs
- [Lukas](https://github.com/lukas-sgx)

