#include <stdlib.h>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "initialisation_zone_dessin.h"

/***********************************
 * fonction pour une nouvelle page *
 ***********************************
 * appui_clic_new()                *
 *                                 *
 * relache_clic_new()              *
 ***********************************/

void appui_clic_new(void)
{
 glLineWidth( 2 ); // largeur de la ligne

 if (event.button.x > NEW_X && event.button.x < 40 && event.button.y > NEW_Y && event.button.y < 45)
 {
  new_page = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(BLACK_COLOR);
      glVertex2d(NEW_X,NEW_Y);
      glVertex2d(NEW_X + 20,NEW_Y);
      glVertex2d(NEW_X + 30,NEW_Y + 15);
      glVertex2d(NEW_X + 20,NEW_Y + 15);
      glVertex2d(NEW_X + 20,NEW_Y);
      glVertex2d(NEW_X + 30,NEW_Y + 15);
      glVertex2d(NEW_X + 30,NEW_Y + 40);
      glVertex2d(NEW_X,NEW_Y + 40);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }
}

void relache_clic_new(void)
{
 glLineWidth( 2 ); // largeur de la ligne

 if (event.button.x > NEW_X && event.button.x < 40 && event.button.y > NEW_Y && event.button.y < 45)
 {
  if (new_page)
  {
   new_page = 0;
   glBegin(GL_LINE_LOOP);
       glColor3ub(WHITE_COLOR);
       glVertex2d(NEW_X,NEW_Y);
       glVertex2d(NEW_X + 20,NEW_Y);
       glVertex2d(NEW_X + 30,NEW_Y + 15);
       glVertex2d(NEW_X + 20,NEW_Y + 15);
       glVertex2d(NEW_X + 20,NEW_Y);
       glVertex2d(NEW_X + 30,NEW_Y + 15);
       glVertex2d(NEW_X + 30,NEW_Y + 40);
       glVertex2d(NEW_X,NEW_Y + 40);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();

   init_num_sauvegarde = 1;

   initialisation_zone_dessin ();
  }
 }
}