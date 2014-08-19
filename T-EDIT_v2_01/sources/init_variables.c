#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

void init_variables(void)
{
 glPointSize( 1 ); // taille du point
 glLineWidth( 3 ); // largeur de la ligne

 positionPoint0.x = 0;
 positionPoint0.y = 0;

 positionPoint1.x = 0;
 positionPoint1.y = 0;

 positionBackP0.x = 480;
 positionBackP0.y = 480;

 positionBackP1.x = 0;
 positionBackP1.y = 0;

 begin = 1;
 show = 1;
 touch = 1;
 trace = 0;

 taille = 1;

 page_precedente = 0;
 page_suivante = 0;
 init_num_sauvegarde = 1;
 new_page = 0;
 save_page = 0;
 size_minus = 0;
 size_plus = 0;
 black_color = 0;
 blue_color = 0;
 green_color = 0;
 red_color = 0;
 white_color = 0;

 numero_sauvegarde[100]= 0;
}