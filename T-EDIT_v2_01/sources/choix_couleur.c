#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

/*********************************
 * fonctions pour les couleurs   *
 *********************************
 * appui_clic_couleur()          *
 *                               *
 * relache_clic_couleur()        *
 ********************************/

void appui_clic_couleur(void)
{
 glLineWidth( 2 ); // largeur de la ligne

 if (event.button.x > COLOR_BLACK_X && event.button.x < COLOR_BLACK_X + SIZE_MENU_COLOR && event.button.y > COLOR_BLACK_Y && event.button.y < COLOR_BLACK_Y + SIZE_MENU_COLOR)
 {
  black_color = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(WHITE_COLOR);
      glVertex2d(COLOR_BLACK_X + 1,COLOR_BLACK_Y + 1);
      glVertex2d(COLOR_BLACK_X + 1,COLOR_BLACK_Y + 19);
      glVertex2d(COLOR_BLACK_X + 19,COLOR_BLACK_Y + 19);
      glVertex2d(COLOR_BLACK_X + 19,COLOR_BLACK_Y + 1);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }

 else if (event.button.x > COLOR_BLUE_X && event.button.x < COLOR_BLUE_X + SIZE_MENU_COLOR && event.button.y > COLOR_BLUE_Y && event.button.y < COLOR_BLUE_Y + SIZE_MENU_COLOR)
 {
  blue_color = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(BLACK_COLOR);
      glVertex2d(COLOR_BLUE_X + 1,COLOR_BLUE_Y + 1);
      glVertex2d(COLOR_BLUE_X + 1,COLOR_BLUE_Y + 19);
      glVertex2d(COLOR_BLUE_X + 19,COLOR_BLUE_Y + 19);
      glVertex2d(COLOR_BLUE_X + 19,COLOR_BLUE_Y + 1);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }
 else if (event.button.x > COLOR_GREEN_X && event.button.x < COLOR_GREEN_X + SIZE_MENU_COLOR && event.button.y > COLOR_GREEN_Y && event.button.y < COLOR_GREEN_Y + SIZE_MENU_COLOR)
 {
  green_color = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(BLACK_COLOR);
      glVertex2d(COLOR_GREEN_X + 1,COLOR_GREEN_Y + 1);
      glVertex2d(COLOR_GREEN_X + 1,COLOR_GREEN_Y + 19);
      glVertex2d(COLOR_GREEN_X + 19,COLOR_GREEN_Y + 19);
      glVertex2d(COLOR_GREEN_X + 19,COLOR_GREEN_Y + 1);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }
 else if (event.button.x > COLOR_RED_X && event.button.x < COLOR_RED_X + SIZE_MENU_COLOR && event.button.y > COLOR_RED_Y && event.button.y < COLOR_RED_Y + SIZE_MENU_COLOR)
 {
  red_color = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(BLACK_COLOR);
      glVertex2d(COLOR_RED_X + 1,COLOR_RED_Y + 1);
      glVertex2d(COLOR_RED_X + 1,COLOR_RED_Y + 19);
      glVertex2d(COLOR_RED_X + 19,COLOR_RED_Y + 19);
      glVertex2d(COLOR_RED_X + 19,COLOR_RED_Y + 1);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
 }
 else if (event.button.x > COLOR_WHITE_X && event.button.x < COLOR_WHITE_X + SIZE_MENU_COLOR && event.button.y > COLOR_WHITE_Y && event.button.y < COLOR_WHITE_Y + SIZE_MENU_COLOR)
 {
  white_color = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(BLACK_COLOR);
      glVertex2d(COLOR_WHITE_X + 1,COLOR_WHITE_Y + 1);
      glVertex2d(COLOR_WHITE_X + 1,COLOR_WHITE_Y + 19);
      glVertex2d(COLOR_WHITE_X + 19,COLOR_WHITE_Y + 19);
      glVertex2d(COLOR_WHITE_X + 19,COLOR_WHITE_Y + 1);
  glEnd();
  glFlush();
  SDL_GL_SwapBuffers();
 }
}

void relache_clic_couleur(unsigned short int* pointeurrouge, unsigned short int* pointeurvert, unsigned short int* pointeurbleu)
{
 glLineWidth( 2 ); // largeur de la ligne

 if (event.button.x > COLOR_BLACK_X && event.button.x < COLOR_BLACK_X + SIZE_MENU_COLOR && event.button.y > COLOR_BLACK_Y && event.button.y < COLOR_BLACK_Y + SIZE_MENU_COLOR)
 {
  if (black_color) // sécurité pour ne pas relacher le clic n'importe où
  {
  black_color = 0;
  glBegin(GL_LINE_LOOP);
       glColor3ub(BLACK_COLOR);
      glVertex2d(COLOR_BLACK_X + 1,COLOR_BLACK_Y + 1);
      glVertex2d(COLOR_BLACK_X + 1,COLOR_BLACK_Y + 19);
      glVertex2d(COLOR_BLACK_X + 19,COLOR_BLACK_Y + 19);
      glVertex2d(COLOR_BLACK_X + 19,COLOR_BLACK_Y + 1);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
   *pointeurrouge = 0;
   *pointeurvert = 0;
   *pointeurbleu = 0;
  }
 }
 else if (event.button.x > COLOR_BLUE_X && event.button.x < COLOR_BLUE_X + SIZE_MENU_COLOR && event.button.y > COLOR_BLUE_Y && event.button.y < COLOR_BLUE_Y + SIZE_MENU_COLOR)
 {
  if (blue_color) // sécurité pour ne pas relacher le clic n'importe où
  {
   blue_color = 0;
   glBegin(GL_LINE_LOOP);
       glColor3ub(BLUE_COLOR);
      glVertex2d(COLOR_BLUE_X + 1,COLOR_BLUE_Y + 1);
      glVertex2d(COLOR_BLUE_X + 1,COLOR_BLUE_Y + 19);
      glVertex2d(COLOR_BLUE_X + 19,COLOR_BLUE_Y + 19);
      glVertex2d(COLOR_BLUE_X + 19,COLOR_BLUE_Y + 1);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();
   *pointeurrouge = 0;
   *pointeurvert = 0;
   *pointeurbleu = 255;
  }
 }
 else if (event.button.x > COLOR_GREEN_X && event.button.x < COLOR_GREEN_X + SIZE_MENU_COLOR && event.button.y > COLOR_GREEN_Y && event.button.y < COLOR_GREEN_Y + SIZE_MENU_COLOR)
 {
  if (green_color) // sécurité pour ne pas relacher le clic n'importe où
  {
   green_color = 0;
   glBegin(GL_LINE_LOOP);
       glColor3ub(GREEN_COLOR);
      glVertex2d(COLOR_GREEN_X + 1,COLOR_GREEN_Y + 1);
      glVertex2d(COLOR_GREEN_X + 1,COLOR_GREEN_Y + 19);
      glVertex2d(COLOR_GREEN_X + 19,COLOR_GREEN_Y + 19);
      glVertex2d(COLOR_GREEN_X + 19,COLOR_GREEN_Y + 1);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();
   *pointeurrouge = 0;
   *pointeurvert = 255;
   *pointeurbleu = 0;
  }
 }
 else if (event.button.x > COLOR_RED_X && event.button.x < COLOR_RED_X + SIZE_MENU_COLOR && event.button.y > COLOR_RED_Y && event.button.y < COLOR_RED_Y + SIZE_MENU_COLOR)
 {
  if (red_color) // sécurité pour ne pas relacher le clic n'importe où
  {
   red_color = 0;
   glBegin(GL_LINE_LOOP);
       glColor3ub(RED_COLOR);
      glVertex2d(COLOR_RED_X + 1,COLOR_RED_Y + 1);
      glVertex2d(COLOR_RED_X + 1,COLOR_RED_Y + 19);
      glVertex2d(COLOR_RED_X + 19,COLOR_RED_Y + 19);
      glVertex2d(COLOR_RED_X + 19,COLOR_RED_Y + 1);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();
   *pointeurrouge = 255;
   *pointeurvert = 0;
   *pointeurbleu = 0;
  }
 }
 else if (event.button.x > COLOR_WHITE_X && event.button.x < COLOR_WHITE_X + SIZE_MENU_COLOR && event.button.y > COLOR_WHITE_Y && event.button.y < COLOR_WHITE_Y + SIZE_MENU_COLOR)
 {
  if (white_color) // sécurité pour ne pas relacher le clic n'importe où
  {
   white_color = 0;
   glBegin(GL_LINE_LOOP);
       glColor3ub(WHITE_COLOR);
      glVertex2d(COLOR_WHITE_X + 1,COLOR_WHITE_Y + 1);
      glVertex2d(COLOR_WHITE_X + 1,COLOR_WHITE_Y + 19);
      glVertex2d(COLOR_WHITE_X + 19,COLOR_WHITE_Y + 19);
      glVertex2d(COLOR_WHITE_X + 19,COLOR_WHITE_Y + 1);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();
   *pointeurrouge = 255;
   *pointeurvert = 255;
   *pointeurbleu = 255;
  }
 }
}