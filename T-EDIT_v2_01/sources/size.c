#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "affiche_taille.h"

/*********************************
 * fonctions taille pinceau      *
 *********************************
 * appui_plus_moins()            *
 *                               *
 * relache_plus_moins(&taille)   *
 ********************************/

void appui_plus_moins(void)
{
 glLineWidth( 2 ); // largeur de la ligne

 if (event.button.x > SQUARED_PLUS_X && event.button.x < 300 && event.button.y > SQUARED_PLUS_Y && event.button.y < 45)
 {
  size_plus = 1;
  glBegin(GL_LINES); // plus
      glColor3ub(BLACK_COLOR);
      glVertex2d(SQUARED_PLUS_X + 15,SQUARED_PLUS_Y + 3);
      glVertex2d(SQUARED_PLUS_X + 15,SQUARED_PLUS_Y + 27);
      glVertex2d(SQUARED_PLUS_X + 5,SQUARED_PLUS_Y + 15);
      glVertex2d(SQUARED_PLUS_X + 25,SQUARED_PLUS_Y + 15);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }
 else if (event.button.x > SQUARED_MINUS_X && event.button.x < 215 && event.button.y > SQUARED_MINUS_Y && event.button.y < 45)
 {
  size_minus = 1;
  glBegin(GL_LINES); // moins
      glColor3ub(BLACK_COLOR);
      glVertex2d(SQUARED_MINUS_X + 5,SQUARED_MINUS_Y + 15);
      glVertex2d(SQUARED_MINUS_X + 25,SQUARED_MINUS_Y + 15);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }
}


void relache_plus_moins(unsigned short int *taille)
{
 glLineWidth( 2 ); // largeur de la ligne

 if (event.button.x > SQUARED_PLUS_X && event.button.x < 300 && event.button.y > SQUARED_PLUS_Y && event.button.y < 45)
 {
  if (size_plus) // sécurité pour ne pas relacher le clic n'importe où
  {
   size_plus = 0;
   glBegin(GL_LINES); // plus
       glColor3ub(WHITE_COLOR);
       glVertex2d(SQUARED_PLUS_X + 15,SQUARED_PLUS_Y + 3);
       glVertex2d(SQUARED_PLUS_X + 15,SQUARED_PLUS_Y + 27);
       glVertex2d(SQUARED_PLUS_X + 5,SQUARED_PLUS_Y + 15);
       glVertex2d(SQUARED_PLUS_X + 25,SQUARED_PLUS_Y + 15);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();

   if (*taille < 10)
   {
    *taille = *taille + 1;

    glBegin(GL_QUADS);
        glColor3ub(100,100,100);
        glVertex2d(219,48);
        glVertex2d(268,48);
        glVertex2d(268,2);
        glVertex2d(219,2);
    glEnd();
    glEnd();

    glFlush();

    affiche_taille (&taille);
   }
  }
 }
 else if (event.button.x > SQUARED_MINUS_X && event.button.x < 215 && event.button.y > SQUARED_MINUS_Y && event.button.y < 45)
 {
  if (size_minus) // sécurité pour ne pas relacher le clic n'importe où
  {
   size_minus = 0;
   glBegin(GL_LINES); // moins
       glColor3ub(WHITE_COLOR);
       glVertex2d(SQUARED_MINUS_X + 5,SQUARED_MINUS_Y + 15);
       glVertex2d(SQUARED_MINUS_X + 25,SQUARED_MINUS_Y + 15);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();

   if (*taille > 1)
   {
    *taille = *taille - 1;

    glBegin(GL_QUADS);
        glColor3ub(100,100,100);
        glVertex2d(219,48);
        glVertex2d(268,48);
        glVertex2d(268,2);
        glVertex2d(219,2);
    glEnd();
    glEnd();

    glFlush();

    affiche_taille (&taille);
   }
  }
 }
}