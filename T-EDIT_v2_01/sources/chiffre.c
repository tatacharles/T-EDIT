#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

void chiffre_zero(int x, int y, int largeur)
{
  glBegin(GL_LINE_LOOP); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_un(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-(2*largeur));
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_deux(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x+largeur,y);
     glVertex2d(x,y);
     glVertex2d(x,y);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_trois(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_quatre(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-(2*largeur));
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_cinq(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_six(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y);
     glVertex2d(x,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x,y-largeur);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_sept(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-largeur);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_huit(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x+largeur,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x,y);
     glVertex2d(x,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-largeur);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void chiffre_neuf(int x, int y, int largeur)
{
  glBegin(GL_LINES); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(x,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y);
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x+largeur,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-(2*largeur));
     glVertex2d(x,y-largeur);
     glVertex2d(x,y-largeur);
     glVertex2d(x+largeur,y-largeur);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}