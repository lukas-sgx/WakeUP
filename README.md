# Shell Emulator

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
   git clone https://github.com/votre-utilisateur/shell-emulator.git
   cd shell-emulator
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
$ echo "Bienvenue dans le shell-emulator!"
Bienvenue dans le shell-emulator!
```

## Contribution

Les contributions sont les bienvenues !
- Forkez le projet
- Créez une branche (`git checkout -b feature/ma-nouvelle-fonctionnalite`)
- Commitez vos modifications (`git commit -am 'Ajout d'une nouvelle fonctionnalité'`)
- Poussez la branche (`git push origin feature/ma-nouvelle-fonctionnalite`)
- Ouvrez une Pull Request

## Licence

Ce projet est sous licence MIT.

## Auteurs
- [Lukas](https://github.com/lukas-sgx)

