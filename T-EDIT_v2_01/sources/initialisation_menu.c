#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "chiffre.h"

/*****************************
 * init carrés couleurs menu *
 *****************************
 * initialisation_couleur()  *
 *****************************/

void initialisation_bouton_couleur(unsigned short int* pointeurrouge, unsigned short int* pointeurvert, unsigned short int* pointeurbleu)
{
 *pointeurrouge = 0;
 *pointeurvert = 0;
 *pointeurbleu = 0;

// noire
 glBegin(GL_QUADS);
     glColor3ub(BLACK_COLOR);
     glVertex2d(COLOR_BLACK_X,COLOR_BLACK_Y);
     glVertex2d(COLOR_BLACK_X,COLOR_BLACK_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_BLACK_X + SIZE_MENU_COLOR,COLOR_BLACK_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_BLACK_X + SIZE_MENU_COLOR,COLOR_BLACK_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

// bleu
 glBegin(GL_QUADS);
     glColor3ub(BLUE_COLOR);
     glVertex2d(COLOR_BLUE_X,COLOR_BLUE_Y);
     glVertex2d(COLOR_BLUE_X,COLOR_BLUE_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_BLUE_X + SIZE_MENU_COLOR,COLOR_BLUE_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_BLUE_X + SIZE_MENU_COLOR,COLOR_BLUE_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

// vert
 glBegin(GL_QUADS);
     glColor3ub(GREEN_COLOR);
     glVertex2d(COLOR_GREEN_X,COLOR_GREEN_Y);
     glVertex2d(COLOR_GREEN_X,COLOR_GREEN_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_GREEN_X + SIZE_MENU_COLOR,COLOR_GREEN_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_GREEN_X + SIZE_MENU_COLOR,COLOR_GREEN_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

// rouge
 glBegin(GL_QUADS);
     glColor3ub(RED_COLOR);
     glVertex2d(COLOR_RED_X,COLOR_RED_Y);
     glVertex2d(COLOR_RED_X,COLOR_RED_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_RED_X + SIZE_MENU_COLOR,COLOR_RED_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_RED_X + SIZE_MENU_COLOR,COLOR_RED_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

// blanc
 glBegin(GL_QUADS);
     glColor3ub(WHITE_COLOR);
     glVertex2d(COLOR_WHITE_X,COLOR_WHITE_Y);
     glVertex2d(COLOR_WHITE_X,COLOR_WHITE_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_WHITE_X + SIZE_MENU_COLOR,COLOR_WHITE_Y + SIZE_MENU_COLOR);
     glVertex2d(COLOR_WHITE_X + SIZE_MENU_COLOR,COLOR_WHITE_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}

/***************************************
 * init boutton plus et moins          *
 ***************************************
 * initialisation_boutton_plus_moins() *
 ***************************************/

void initialisation_bouton_plus_moins(void)
{
 glLineWidth( 2 ); // largeur de la ligne
// boutton plus
 glBegin(GL_LINE_LOOP); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(SQUARED_PLUS_X,SQUARED_PLUS_Y);
     glVertex2d(SQUARED_PLUS_X,SQUARED_PLUS_Y + SIZE_MENU_SIZE);
     glVertex2d(SQUARED_PLUS_X + SIZE_MENU_SIZE,SQUARED_PLUS_Y + SIZE_MENU_SIZE);
     glVertex2d(SQUARED_PLUS_X + SIZE_MENU_SIZE,SQUARED_PLUS_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 glBegin(GL_LINES); // dessin du plus
     glColor3ub(WHITE_COLOR);
     glVertex2d(SQUARED_PLUS_X + 15,SQUARED_PLUS_Y + 3);
     glVertex2d(SQUARED_PLUS_X + 15,SQUARED_PLUS_Y + 27);
     glVertex2d(SQUARED_PLUS_X + 5,SQUARED_PLUS_Y + 15);
     glVertex2d(SQUARED_PLUS_X + 25,SQUARED_PLUS_Y + 15);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

// boutton moins
 glBegin(GL_LINE_LOOP); // dessin du carré
     glColor3ub(WHITE_COLOR);
     glVertex2d(SQUARED_MINUS_X,SQUARED_MINUS_Y);
     glVertex2d(SQUARED_MINUS_X,SQUARED_MINUS_Y + SIZE_MENU_SIZE);
     glVertex2d(SQUARED_MINUS_X + SIZE_MENU_SIZE,SQUARED_MINUS_Y + SIZE_MENU_SIZE);
     glVertex2d(SQUARED_MINUS_X + SIZE_MENU_SIZE,SQUARED_MINUS_Y);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 glBegin(GL_LINES); // dessin du moins
     glColor3ub(WHITE_COLOR);
     glVertex2d(SQUARED_MINUS_X + 5,SQUARED_MINUS_Y + 15);
     glVertex2d(SQUARED_MINUS_X + 25,SQUARED_MINUS_Y + 15);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 chiffre_zero(220,45,20);
 chiffre_un(245,45,20);

}

/**************************************
 * init page suivante/precedente      *
 **************************************
 * initialisation_bouton_page()       *
 **************************************/

void initialisation_bouton_page(void)
{
  glLineWidth( 2 );
  glBegin(GL_LINE_LOOP); // bouton precedent
      glColor3ub(WHITE_COLOR);
      glVertex2d(BUTTON_BEFORE_X - SIZE_BUTTON_BEFORE_NEXT - 5,BUTTON_BEFORE_Y + SIZE_BUTTON_BEFORE_NEXT);
      glVertex2d(BUTTON_BEFORE_X,BUTTON_BEFORE_Y + 2*SIZE_BUTTON_BEFORE_NEXT);
      glVertex2d(BUTTON_BEFORE_X,BUTTON_BEFORE_Y);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();

  glLineWidth( 2 );
  glBegin(GL_LINE_LOOP); // bouton suivant
      glColor3ub(WHITE_COLOR);
      glVertex2d(BUTTON_NEXT_X,BUTTON_NEXT_Y);
      glVertex2d(BUTTON_NEXT_X + SIZE_BUTTON_BEFORE_NEXT + 5,BUTTON_NEXT_Y + SIZE_BUTTON_BEFORE_NEXT);
      glVertex2d(BUTTON_NEXT_X,BUTTON_NEXT_Y + 2*SIZE_BUTTON_BEFORE_NEXT);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
}


/**************************************
 * init save                          *
 **************************************
 * initialisation_save()              *
 **************************************/

void initialisation_save(void)
{
  glLineWidth( 2 );
  glBegin(GL_LINE_LOOP);
      glColor3ub(WHITE_COLOR);
      glVertex2d(SAVE_X,SAVE_Y);
      glVertex2d(SAVE_X + 30,SAVE_Y);
      glVertex2d(SAVE_X + 35,SAVE_Y + 5);
      glVertex2d(SAVE_X + 35,SAVE_Y + 40);
      glVertex2d(SAVE_X + 30,SAVE_Y + 40);
      glVertex2d(SAVE_X + 30,SAVE_Y + 25);
      glVertex2d(SAVE_X + 5,SAVE_Y + 25);
      glVertex2d(SAVE_X + 5,SAVE_Y + 40);
      glVertex2d(SAVE_X + 30,SAVE_Y + 40);
      glVertex2d(SAVE_X,SAVE_Y + 40);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
}

/**************************************
 * init new page                      *
 **************************************
 * initialisation_new_page()          *
 **************************************/

void initialisation_new_page(void)
{
  glLineWidth( 2 );
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
}

/**************************************
 * init menu explorer                 *
 **************************************
 * initialisation_menu_explorer()     *
 **************************************/

void initialisation_menu_explorer(void)
{
 glBegin(GL_QUADS);
     glColor3ub(WHITE_COLOR);
     glVertex2d(0,0);
     glVertex2d(LARGEUR_ECRAN,0);
     glVertex2d(LARGEUR_ECRAN,HAUTEUR_ECRAN);
     glVertex2d(0,HAUTEUR_ECRAN);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();

 // fond du menu
 glBegin(GL_QUADS);
     glColor3ub(GRAY_COLOR);
     glVertex2d(MENU_X,MENU_Y);
     glVertex2d(LARGEUR_ECRAN,MENU_Y);
     glVertex2d(LARGEUR_ECRAN,SIZE_MENU_WIDTH);
     glVertex2d(MENU_X,SIZE_MENU_WIDTH);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
 initialisation_bouton_page();
}

/**************************************
 * init couleurs fond du menu         *
 **************************************
 * initialisation_couleur_fond_menu() *
 **************************************/

void initialisation_couleur_fond_menu(void)
{
 // fond du menu
 glBegin(GL_QUADS);
     glColor3ub(GRAY_COLOR);
     glVertex2d(MENU_X,MENU_Y);
     glVertex2d(LARGEUR_ECRAN,MENU_Y);
     glVertex2d(LARGEUR_ECRAN,SIZE_MENU_WIDTH);
     glVertex2d(MENU_X,SIZE_MENU_WIDTH);
 glEnd();

 glFlush();
 SDL_GL_SwapBuffers();
}