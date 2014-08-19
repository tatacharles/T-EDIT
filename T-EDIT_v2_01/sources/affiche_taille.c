#include <SDL/SDL.h>
#include "chiffre.h"
#include "declarations.h"

void affiche_taille (short unsigned int **taille)
{
 switch (**taille)
 {
  case 1:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_un(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 2:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_deux(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 3:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_trois(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 4:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_quatre(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 5:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_cinq(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 6:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_six(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 7:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_sept(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 8:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_huit(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 9:
   chiffre_zero(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_neuf(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
  case 10:
   chiffre_un(NOMBRE_1_X,NOMBRE_1_Y,LARGEUR_NOMBRE);
   chiffre_zero(NOMBRE_2_X,NOMBRE_2_Y,LARGEUR_NOMBRE);
  break;
 }
}