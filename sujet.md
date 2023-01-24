# Labo 3: Outils de développement logiciel

## 1 - Style et documentation (30 minutes)

* Consultez le fichier [`style.c`](style.c) disponible dans ce dépôt.
* Examinez son contenu et améliorez-en le style de programmation. Notez les
  différentes modifications que vous avez apportées.
* Ensuite, ajoutez une en-tête au fichier, au type et aux fonctions en suivant
  le standard Javadoc.

## 2 - Bats (30 minutes)

* Si ce n'est pas déjà fait, installez
  [Bats](https://github.com/bats-core/bats-core) dans votre environnement de
  travail. Assurez-vous que l'installation est fonctionnelle en lançant la
  commande `bats --help`.
* Consultez le fichier [`words.c`](words.c) disponible dans ce dépôt.
* Ajoutez un `Makefile` qui vous permet de compiler le programme `words.c` pour
  qu'il produise un exécutable nommé `words`
* Testez-le en ligne de commande pour comprendre son fonctionnement
* Ajoutez un fichier nommé `test.bats` qui teste le programme `words.c` avec
  les arguments suivants: chaîne vide (`""`), la lettre `a`, le mot
  `ressasser`, le mot `aller` et le mot `AA`.
* Ajoutez une cible `test` dans votre `Makefile` qui permet d'invoquer `bats`
  sur le fichier `test.bats`
* Avec ces tests, est-ce que vous avez l'impression que le programme est
  fonctionnel ou il contient des bogues?
* Ajoutez l'option `--tap` dans l'invocation de `bats` et vérifiez le résultat.

## 3 - Git (30 minutes)

Cet exercice a pour objectif de vous familiariser avec certaines des commandes
suivantes de Git:

* `git log`: voir l'historique
* `git clone`: copier un dépôt existant
* `git status`: voir l'état du projet
* `git checkout`: changer l'état du projet
* `git diff`: voir les différences
* `git show`: montrer un *commit*
* `git add`: indexer des modifications
* `git commit`: valider des modifications
* `git reset`: réinitialiser l'état d'un projet

### 3.1 - Configuration

Si ce n'est pas déjà fait, consultez le fichier
[gitconfig](../config/gitconfig) disponible dans ce dépôt. En particulier, il
est recommandé d'ajouter les synonymes (*alias*) `gr`, `st`, `co` et `ci`.

### 3.2 - Analyser un dépôt Git

*Commandes utilisées*: `git clone`, `git log`, `git gr`, `git show`

* Clonez le projet [bats-core](https://github.com/bats-core/bats-core) en
  utilisant le protocole HTTPS
* À l'aide de la commande `du`, vérifiez la taille du sous-dossier `.git` du
  projet Bats. Quelle taille occupe-t-il? *Remarque*: l'option `-h` vous sera
  utile.
* Retrouvez le premier *commit* du projet Bats. Qui en est l'auteur? À quel
  moment est-ce que le projet a démarré? Quels sont les fichiers qui ont été
  ajoutés dans ce premier *commit*? Combien y avait-il de lignes de code?
* Quel *commit* a intégré la requête d'intégration (*merge request*) 159?
  Utilisez la commande `git gr` ou `git log`, puis faites une recherche de 159
  en commençant par `/`
* Retrouvez les deux *commits* dont l'identifiant SHA-1 commence par `897db24`
  et `1d16049` respectivement. Quel est l'identifiant SHA-1 de leur plus proche
  ancêtre commun?
* Quelle est la syntaxe de messages de *commit* utilisée dans le projet Bats?
  Est-ce qu'elle est uniforme? Est-ce qu'il semble y avoir une prédominance de
  format?

### 3.3 - Analyser un *commit* spécifique

*Commandes utilisées*: `git checkout`, `git blame`, `git log`, `git show`

* À l'aide de la commande `git co`, changez l'état du projet en vous plaçant au
  *commit* préfixé par `7f0b346`. Vous devriez passer en mode `detached`. Lisez
  bien le message affiché par Git à ce sujet.
* Le fichier `README.md` que vous trouvez à la racine du projet a été modifié
  par plusieurs personnes. Identifiez le *commit* (appelons-le `c`) qui
  a modifié en dernier la ligne `### What's the plan and why?`. Qui est
  l'auteur du *commit* `c`?
* Analysez plus en détail le *commit* `c`. Quelles sont les modifications
  générales qui ont été apportées? Est-ce que le message de *commit* vous
  semble approprié et significatif?

### 3.4 - Faire des *commits*

*Commandes utilisées*: `git checkout`, `git add`, `git commit`, `git reset`,
`git status`, `git diff`

* Replacez-vous sur la branche `master` à l'aide de la commande `git checkout`
* Modifiez le fichier `README.md` à différents endroits. Les modifications ne
  sont pas importantes en soi, mais assurez-vous qu'elles soient à des
  emplacements variés dans le fichier.
* Visualisez les modifications avec `git st` et `git diff`
* À l'aide de la commande `git add` et de l'option `-p`, indexez seulement
  quelques-unes des modifications apportées. Utilisez bien le menu interactif
  pour l'ajout de morceaux (*hunks*). Les choix `y = yes`, `n = no`,
  `s = split`, `a = all` et `q = quit` sont particulièrement utiles.
* Vérifiez que seulement une partie des modifications ont été ajoutées avec
  `git st`, puis validez les modifications avec `git ci`. Écrivez un message de
  *commit* qui respecte le mieux possible la convention utilisée dans le projet
  Bats.
* Utilisez la commande `git add .` et vérifiez ce qui se passe avec `git st`.
* À l'aide de la commande `git reset`, annulez l'indexation faite à l'étape
  précédente.
* Finalement, validez (*commit*) toutes les modifications qui restent avec
  `git ci -a`
* Corrigez le *commit* précédent à l'aide de la commande `git ci --amend`.
* À l'aide de la commande `git reset --hard HEAD~n` (remplacez `n` par la bonne
  valeur numérique), annulez toutes vos modifications faites depuis le début de
  cet exercice pour remettre la branche `master` à son état initial.
* Si vous le souhaitez, supprimez le répertoire `bats-core` que vous avez créé
  initialement.