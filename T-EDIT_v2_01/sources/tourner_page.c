#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "load_texture.h"

void appui_clic_page (void)
{
 if (event.button.x > BUTTON_BEFORE_X - SIZE_BUTTON_BEFORE_NEXT - 5 && event.button.x < BUTTON_BEFORE_X && event.button.y > BUTTON_BEFORE_Y && event.button.y < BUTTON_BEFORE_Y + 2*SIZE_BUTTON_BEFORE_NEXT)
 {
  glLineWidth( 2 );
  glBegin(GL_LINE_LOOP); // bouton precedent
      glColor3ub(BLACK_COLOR);
      glVertex2d(BUTTON_BEFORE_X - SIZE_BUTTON_BEFORE_NEXT - 5,BUTTON_BEFORE_Y + SIZE_BUTTON_BEFORE_NEXT);
      glVertex2d(BUTTON_BEFORE_X,BUTTON_BEFORE_Y + 2*SIZE_BUTTON_BEFORE_NEXT);
      glVertex2d(BUTTON_BEFORE_X,BUTTON_BEFORE_Y);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
  page_precedente = 1;
 }

 else if (event.button.x > BUTTON_NEXT_X && event.button.x < BUTTON_NEXT_X + SIZE_BUTTON_BEFORE_NEXT + 5 && event.button.y > BUTTON_NEXT_Y && event.button.y < BUTTON_NEXT_Y + 2*SIZE_BUTTON_BEFORE_NEXT)
 {
  glLineWidth( 2 );
  glBegin(GL_LINE_LOOP); // bouton suivant
      glColor3ub(BLACK_COLOR);
      glVertex2d(BUTTON_NEXT_X,BUTTON_NEXT_Y);
      glVertex2d(BUTTON_NEXT_X + SIZE_BUTTON_BEFORE_NEXT + 5,BUTTON_NEXT_Y + SIZE_BUTTON_BEFORE_NEXT);
      glVertex2d(BUTTON_NEXT_X,BUTTON_NEXT_Y + 2*SIZE_BUTTON_BEFORE_NEXT);
  glEnd();

  glFlush();
  SDL_GL_SwapBuffers();
  page_suivante = 1;
 }
}

void relache_clic_page (void)
{
 if (event.button.x > BUTTON_BEFORE_X - SIZE_BUTTON_BEFORE_NEXT - 5 && event.button.x < BUTTON_BEFORE_X && event.button.y > BUTTON_BEFORE_Y && event.button.y < BUTTON_BEFORE_Y + 2*SIZE_BUTTON_BEFORE_NEXT)
 {
  if (page_precedente) // sécurité pour ne pas relacher le clic n'importe où
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
   page_precedente = 0;


   if (init_num_sauvegarde)
   {
    FILE* fichier = NULL;
 
    fichier = fopen("numero_sauvegarde.txt", "r"); // lit le fichier "numero_sauvegarde.txt"

    if (fichier != NULL) // verifie si le fichier existe
    {
     if(fgets(numero_sauvegarde, 100, fichier) == NULL); // place la valeur du fichier dans la variable numero_sauvegarde(-> string)
     {/*En cas d'erreur la fonction fgets retourne "NULL" mais si on arrive à la fin de notre fichier (comme dans notre cas alors elle renvoi aussi "NULL"*/}
    }

    fclose(fichier);
    init_num_sauvegarde = 0;
   }

   screen_precedent = atoi(numero_sauvegarde);
   screen_precedent = screen_precedent - 1;

   if (screen_precedent > 0)
   {
    sprintf(numero_sauvegarde, "%d", screen_precedent);
    load_texture(numero_sauvegarde);
   }
  }
 }

 else if (event.button.x > BUTTON_NEXT_X && event.button.x < BUTTON_NEXT_X + SIZE_BUTTON_BEFORE_NEXT + 5 && event.button.y > BUTTON_NEXT_Y && event.button.y < BUTTON_NEXT_Y + 2*SIZE_BUTTON_BEFORE_NEXT)
 {
  if (page_suivante) // sécurité pour ne pas relacher le clic n'importe où
  {
   glLineWidth( 2 );
   glBegin(GL_LINE_LOOP); // bouton suivant
       glColor3ub(WHITE_COLOR);
       glVertex2d(BUTTON_NEXT_X,BUTTON_NEXT_Y);
       glVertex2d(BUTTON_NEXT_X + SIZE_BUTTON_BEFORE_NEXT + 5,BUTTON_NEXT_Y + SIZE_BUTTON_BEFORE_NEXT);
       glVertex2d(BUTTON_NEXT_X,BUTTON_NEXT_Y + 2*SIZE_BUTTON_BEFORE_NEXT);
   glEnd();

   glFlush();
   SDL_GL_SwapBuffers();
   page_suivante = 0;

   screen_suivant = atoi(numero_sauvegarde); 

   screen_suivant = screen_suivant + 1;

   sprintf(numero_sauvegarde, "%d", screen_suivant); 
   load_texture(numero_sauvegarde);
  }
 }
}