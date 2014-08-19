#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "lettres.h"

/******************************
 * affiche T.EDIT sur l'ecran *
 ******************************
 * affichage_accueil()        *
 ******************************/

void affichage_accueil (void)
{
// fond zone
 glBegin(GL_QUADS);
     glColor3ub(WHITE_COLOR);
     glVertex2d(0,0);
     glVertex2d(LARGEUR_ECRAN,0);
     glVertex2d(LARGEUR_ECRAN,HAUTEUR_ECRAN);
     glVertex2d(0,HAUTEUR_ECRAN);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 lettre_T(80,100);
 lettre_E(180,100);
 lettre_D(240,100);
 lettre_I(300,100);
 lettre_T(335,100);

 glLineWidth( 3 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(GRAY_COLOR);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EDITER,BUTTON_EDITER_Y);
     glVertex2d(BUTTON_EDITER_X + BUTTON_WIDTH_EDITER,BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER);
     glVertex2d(BUTTON_EDITER_X,BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 lettre_E(80,380);
 lettre_D(140,380);
 lettre_I(200,380);
 lettre_T(235,380);
 lettre_E(295,380);
 lettre_R(355,380);

 glLineWidth( 3 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(GRAY_COLOR);
     glVertex2d(BUTTON_EXPLORER_X,BUTTON_EXPLORER_Y);
     glVertex2d(BUTTON_EXPLORER_X + BUTTON_WIDTH_EXPLORER,BUTTON_EXPLORER_Y);
     glVertex2d(BUTTON_EXPLORER_X + BUTTON_WIDTH_EXPLORER,BUTTON_EXPLORER_Y + BUTTON_HEIGHT_EXPLORER);
     glVertex2d(BUTTON_EXPLORER_X,BUTTON_EXPLORER_Y + BUTTON_HEIGHT_EXPLORER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 lettre_E(5,485);
 lettre_X(65,485);
 lettre_P(125,485);
 lettre_L(185,485);
 lettre_O(245,485);
 lettre_R(305,485);
 lettre_E(365,485);
 lettre_R(425,485);

 glLineWidth( 3 );
 glBegin(GL_LINE_LOOP);
     glColor3ub(GRAY_COLOR);
     glVertex2d(BUTTON_QUITTER_X,BUTTON_QUITTER_Y);
     glVertex2d(BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER,BUTTON_QUITTER_Y);
     glVertex2d(BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER,BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER);
     glVertex2d(BUTTON_QUITTER_X,BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 lettre_Q(50,590);
 lettre_U(110,590);
 lettre_I(170,590);
 lettre_T(205,590);
 lettre_T(265,590);
 lettre_E(325,590);
 lettre_R(380,590);
}