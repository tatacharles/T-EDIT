#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

void initialisation_zone_dessin (void)
{
 int ligne;
 int nb_ligne = 1;
// fond zone dessin
 glBegin(GL_QUADS);
     glColor3ub(WHITE_COLOR);
     glVertex2d(0,SIZE_MENU_WIDTH);
     glVertex2d(LARGEUR_ECRAN,SIZE_MENU_WIDTH);
     glVertex2d(LARGEUR_ECRAN,HAUTEUR_ECRAN);
     glVertex2d(0,HAUTEUR_ECRAN);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 for (ligne = 70; ligne < HAUTEUR_ECRAN; ligne = ligne + 8)
 {
  if (nb_ligne !=4)
  {
   glLineWidth( 1 ); // largeur de la ligne
   glBegin(GL_LINES); // ligne normal
       glColor3ub(BLACK_COLOR);
       glVertex2d(1,ligne);
       glVertex2d(LARGEUR_ECRAN-1,ligne);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();

   nb_ligne++;
  }
  else
  {
   glLineWidth( 2 ); // largeur de la ligne
   glColor3ub(10,10,10);
   glBegin(GL_LINES); // ligne epaisse
       glVertex2d(1,ligne);
       glVertex2d(LARGEUR_ECRAN-1,ligne);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();
   nb_ligne = 1;
  }
 }

 glLineWidth( 3 ); // largeur de la ligne
 glBegin(GL_LINES); // ligne verticale rouge
     glColor3ub(RED_COLOR);
     glVertex2d(80,SIZE_MENU_WIDTH);
     glVertex2d(80,HAUTEUR_ECRAN);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}