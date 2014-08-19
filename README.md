T-EDIT V2.01
------------

T-EDIT est un programme pour prendre des notes, ecrire et dessiner.
Il est ecrit en C et utilise les bibliotheques graphique :
 - SDL v1.2 (pour le graphisme et les evenements)
 - OpenGL v2.1 (pour le graphisme)

A la base, ce programme a été créé pour fonctionner sur un Raspberry Pi
mais fonctionne également sur PC.

T-EDIT fait partie d'un projet dans lequel je me suis lancé,
qui est de faire une tablette tacile avec un Raspberry Pi
pour prendre des notes, ecrire un cours.

Partie HARDWARE :
-----------------

 - Raspberry Pi model B 512Mo
 - ecran LCD 800x480
 - dalle tactile de type résistive

Partie SOFTWARE :
-----------------

 - Raspbian
 - T-EDIT v2.01


// POUR LA COMPILATION SOUS LINUX AVEC gcc/g++
// LA COMPILATION TOTAL : make
//
// VERSIONS UTILISEES : SDL(v1.2) OpengGL(v2.1)
//
// INSTALLATION SDL ET OPENGL : libsdl1.2 ET libgl1-mesa-swx11(POUR LE RASPBERRY PI)
//
// CHARLES TATA Licence CC-BY
//

Fonctionnalitées:
-----------------

 - dessiner
 - sauvegarder une image bmp
 - charger une image bmp
 - changer la taille du pinceau (entre 1 et 10)
 - changer la couleur

 - 2 modes:
  - editer (mode normal: dessiner, sauvegarder, charger)
  - explorer (mode image: ce mode ne fait qu'afficher les images que l'on a sauvegardé)
  - quitter (quitte le programme T-EDIT)

PS : pour faire un retour vers la page d'accueil, il suffit de faire glisser le curseur de gauche à droite en haute de l'ecran.
(cf: voir les images retour-1.png et retour-2.png


#BUG#
-----
 - Probleme entre le chargement et la sauvegarde d'une image, au niveau des couleurs (sans doute sur le codage)
 - Probleme dans le chargement des images. Il y a un décalage 