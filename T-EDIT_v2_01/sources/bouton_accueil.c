#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

void appui_bouton_editer(void)
{
 glBegin(GL_LINE_LOOP);
     glColor3ub(BLUE_COLOR);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EDITER,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EDITER,BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

void appui_bouton_explorer(void)
{
 glBegin(GL_LINE_LOOP);
     glColor3ub(BLUE_COLOR);
     glVertex2d(BUTTON_EXPLORER_X,BUTTON_EXPLORER_Y);
     glVertex2d(BUTTON_EXPLORER_X + BUTTON_WIDTH_EXPLORER,BUTTON_EXPLORER_Y);
     glVertex2d(BUTTON_EXPLORER_X + BUTTON_WIDTH_EXPLORER,BUTTON_EXPLORER_Y + BUTTON_HEIGHT_EXPLORER);
     glVertex2d(BUTTON_EXPLORER_X,BUTTON_EXPLORER_Y + BUTTON_HEIGHT_EXPLORER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}
void appui_bouton_quitter(void)
{
 glBegin(GL_LINE_LOOP);
     glColor3ub(BLUE_COLOR);
     glVertex2d(BUTTON_QUITTER_X,BUTTON_QUITTER_Y);
     glVertex2d(BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER,BUTTON_QUITTER_Y);
     glVertex2d(BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER,BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER);
     glVertex2d(BUTTON_QUITTER_X,BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}
void relache_bouton_editer(void)
{
 glBegin(GL_LINE_LOOP);
     glColor3ub(GRAY_COLOR);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EDITER,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EDITER,BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}
void relache_bouton_explorer(void)
{
 glBegin(GL_LINE_LOOP);
     glColor3ub(GRAY_COLOR);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EXPLORER,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EXPLORER,BUTTON_EDITER_Y + BUTTON_HEIGHT_EXPLORER);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y + BUTTON_HEIGHT_EXPLORER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}
void relache_bouton_quitter(void)
{
 glBegin(GL_LINE_LOOP);
     glColor3ub(GRAY_COLOR);
     glVertex2d(BUTTON_QUITTER_X,BUTTON_QUITTER_Y);
     glVertex2d(BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER,BUTTON_QUITTER_Y);
     glVertex2d(BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER,BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER);
     glVertex2d(BUTTON_QUITTER_X,BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}