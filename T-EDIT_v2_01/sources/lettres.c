#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

void lettre_D(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 20,y);
     glVertex2d(x + 50,y + 30);
     glVertex2d(x + 50,y + 45);
     glVertex2d(x + 20,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_E(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 25);
     glVertex2d(x + 30,y + 25);
     glVertex2d(x + 30,y + 40);
     glVertex2d(x + 40,y + 40);
     glVertex2d(x + 40,y + 50);
     glVertex2d(x + 30,y + 50);
     glVertex2d(x + 30,y + 60);
     glVertex2d(x + 50,y + 60);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_I(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 25,y);
     glVertex2d(x + 25,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_L(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 25,y);
     glVertex2d(x + 25,y + 50);
     glVertex2d(x + 50,y + 50);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_O(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_P(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y + 75);
     glVertex2d(x,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 50);
     glVertex2d(x + 25,y + 50);
     glVertex2d(x + 25,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_Q(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x + 25,y + 75);
     glVertex2d(x + 25,y + 25);
     glVertex2d(x,y + 25);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_R(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 25);
     glVertex2d(x + 30,y + 25);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x + 40,y + 75);
     glVertex2d(x + 30,y + 40);
     glVertex2d(x + 30,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_T(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 25);
     glVertex2d(x + 30,y + 25);
     glVertex2d(x + 30,y + 75);
     glVertex2d(x + 20,y + 75);
     glVertex2d(x + 20,y + 25);
     glVertex2d(x,y + 25);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_U(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 10,y);
     glVertex2d(x + 10,y + 60);
     glVertex2d(x + 40,y + 60);
     glVertex2d(x + 40,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x,y + 75);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void lettre_X(int x, int y)
{
 glLineWidth( 2 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(INTRO_COLOR);
     glVertex2d(x,y);
     glVertex2d(x + 5,y);
     glVertex2d(x + 25,y + 33);
     glVertex2d(x + 45,y);
     glVertex2d(x + 50,y);
     glVertex2d(x + 50,y + 5);
     glVertex2d(x + 30,y + 38);
     glVertex2d(x + 50,y + 70);
     glVertex2d(x + 50,y + 75);
     glVertex2d(x + 45,y + 75);
     glVertex2d(x + 25,y + 43);
     glVertex2d(x + 5,y + 75);
     glVertex2d(x,y + 75);
     glVertex2d(x,y + 70);
     glVertex2d(x + 20,y + 38);
     glVertex2d(x,y + 5);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}