# Projet de Science de L'ingénieur 1ère D

## Projet : L'horloge numérique réglable par 3 boutons poussoirs

Ce projet consiste, avec une carte arduino et des composants comme un afficheur constitué de 4 digits Grove et de son kit de démarrage, à afficher une horloge numérique, que l'utilisateur peut régler grâce à trois boutons. 

### Cahier des charges :
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

Ce type de projet devant normalement se faire à 4, étant 2 nous avons donc travailler ensemble sur chaque partie de ce projet (théorique, analyse de code, pratique, communiquer ...) au lycée comme chez nous. Nous avons tout d'abord tester les codes contenus dans les différents exemples, puis nous avons rechercher comment les accorders pour obtenir le résultat recherché, puis nous nous sommes occuper de la partie communiquer en écrivant ce texte et en créant un powerpoint afin de présenter le projet.

## Partie pratique et démonstration

--------------------------------------------------------------
                mettre image diagramme états/transitions
(https://github.com/lycee-chaptal-sii/hugo-noe/blob/partie_pratique/docs/diagramme%20etats%20transitions.png)

-----------------------------------------------------------------
--------------------------------------------------------------
_______________________________________________________________


* A l'état initial, l'horloge affiche l'heure normalement.

- lorsque l'on appuie sur le bouton réglage, nous passons à l'états second dans lequel l'horloge est en mode réglage de l'heure, ici l'horloge affiche 00:00 en clignotant.
  - si l'on appuie sur le bouton d'incrémentation, l'heure va s'incrémenter, ainsi à chaque fois que nous appuirons sur le bouton d'incrémentation, nous incrémenterons l'heure.
  - si l'on appuie sur le bouton de décrémentation, l'heure va se décrémenter, et à chaque fois que nous appuirons sur ce bouton, l'heure se décrémentera.
  - si l'on appuie à nouveau sur le bouton réglage, nous passerons au troisième états, dans lequel l'horloge est en mode réglage des minutes.
    - si l'on appuie sur le bouton d'incrémentation, les minutes vont s'incrémenter.
    - si l'on appuie sur le bouton de décrémentation, les minutes vont se décrémenter.
    - si l'on appuie encore une fois sur le bouton de réglage, nous passons au quatrième états, où les données de l'heure et des minutes sont enregistrées et afficher sur le cadran, et ainsi nous repassons directement à l'état initial.



## Conclusion :
Les ordinateurs utilisés étant en disfonctionnement pour certain, et certain de nos fichiers que nous avons du réécrire car ils avaient disparues nous ont considérablement ralentie dans notre projet, nous n'avons donc pas pu mener a bien notre projet, il ne fonctionne donc pas completement. Mais grâce à nos recherches, nous pouvons vous donner les explications néscessaires à la compréhension du fonctionnement de notre projet.
