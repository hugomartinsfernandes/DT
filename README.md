
# Projet de fin d'année 1ère SSI - Horloge numérique

L'objectif de ces 3 dernières semaines est de mener un projet (en groupe de 4)
dans lequel vous travaillerez sur la plateforme __Arduino__. Il s'agira dans votre 
projet de concevoir une __horloge numérique réglable par 3 boutons poussoirs__.

## Matériel à disposition

* 1 carte Arduino M0 Pro + 1 plaque d'essais
* 1 boîte de composants pour le prototypage (Boîte incolore)
* 1 kit de démarrage Grove (Boîte verte) 
* 1 afficheur 4 digits Grove

## Cahier des charges

* La conception de votre système doit être réalisé sous forme d'une __machine à
états finis__ cadencé à 10 Hz.
* Votre système doit utilisée l'__horloge temps réel__ intégrée dans la carte 
Arduino
* L'utilisateur doit être en mesure de régler l'heure et les minutes :
    - Il appuie d'abord sur un bouton __réglage__:
        * Cela fait clignoter les 2 digits de gauche de l'afficheur (avec la valeur __00:00__)
        toutes les 0.5 secondes.
    - Il appuie ensuite soit sur un bouton __gauche__ ou un bouton __droite__
    pour incrémenter/decrémenter la valeur affichée des 2 digits de gauche
    (réglage de l'heure)
    - Une fois la valeur choisie, il réappuie sur le bouton __réglage__:
        * Cela arrête le clignotement et fixe la dernière valeur affichée
        sur les 2 digits de gauche de l'afficheur.
        * Cela fait maintenant clignoter les 2 digits de droite de l'afficheur
    - Il appuie ensuite soit sur un bouton __gauche__ ou un bouton __droite__
    pour incrémenter/decrémenter la valeur affichée des 2 digits de droite
    (réglage des minutes)
    - Une fois la valeur choisie, il réappuie sur le bouton __réglage__:
        * Cela arrête le clignotement des 2 digits de droite
        * Les 2 digits de gauche affiche maintenant __l'heure lue__
        * Les 2 digits de droite affiche maintenant __les minutes lues__
        * Le symbole __:__ doit clignoter toutes les secondes

## Déroulement du projet

La répartition des tâches doit se faire de la manière suivante:
* Le 1er binôme s'occupe de la partie __analyser/expérimenter__ des Sciences
de l'ingénieur en __écrivant et en testant le code__.
* Le 2e binôme s'occupe de la partie __communiquer__ des Sciences
de l'ingénieur en mettant à jour la page de documentation Github en utilisant
le langage __Markdown__.

## Par où commencer

### Partie analyser/expérimenter

Testez d'abord le programme dans la branche __exemple_afficheur__ 
(Utilisation de l'afficheur) puis le programme dans la branche 
__exemple_rtc__ (Utilisation de l'horloge temps réel). Puis une fois
compris, créer une nouvelle branche appelée __partie_pratique__ dans
lequel vous travaillerez.

Vous devez établir un diagramme d'états/transitions sur papier. Une fois
validé par votre professeur celui-ci sera traduit sous forme de 
programme dans le fichier __main.ino__.

### Partie communiquer

Vous devez vous familiariser avec le langage __Markdown__ et savoir l'utiliser
dans l'environnement Visual Studio Code. Créer une nouvelle branche appelée
__partie_communiquer__ dans lequel vous travaillerez.

Essayer de comprendre le fichier __docs/index.md__ tout en testant la commande
__Ctrl+Shift+P -> Markdown : Ouvrir l'aperçu__

Votre production finale doit contenir des rubriques décrivant le projet et
quelques illustrations (notamment le diagramme d'état/transitions élaboré par
le 1er binôme)

### À la maison

Vous devez installer les logiciels qui vous seront utiles pour travailler à
la maison. Dans l'ordre, installer :
* [Arduino] (https://www.arduino.cc/en/Main/Software)
* [Git] (https://www.git-scm.com/download)
* [Visual Studio Code] (https://code.visualstudio.com/download)

Ensuite, installer les extensions sur Visual Studio Code
* Pour cela, cloner juste votre dépôt de projet sous Visual Studio Code
* Accepter toutes les requêtes de Visual Studio Code.
