#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "flipvert.h"

/*********************************
 * fonctions pour la sauvegarde  *
 *********************************
 * appui_clic_save()             *
 *                               *
 * relache_clic_save()           *
 ********************************/

void appui_clic_save(void)
{
 glLineWidth( 2 );

 if (event.button.x > SAVE_X && event.button.x < 95 && event.button.y > SAVE_Y && event.button.y < 45)
 {
  save_page = 1;
  glBegin(GL_LINE_LOOP);
      glColor3ub(BLACK_COLOR);
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
}

void relache_clic_save(void)
{
 glLineWidth( 2 );

 if (event.button.x > SAVE_X && event.button.x < 95 && event.button.y > SAVE_Y && event.button.y < 45)
 {
  if (save_page)
  {
   save_page = 0;
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

//
// Avec l'aide sur le forum :
// http://fr.openclassrooms.com/forum/sujet/sauvegarde-de-son-ecran-opengl-en-images-bmp?page=1#message-85366943
// Et le tuto pour flipvert :
// http://content.gpwiki.org/index.php/OpenGL:Tutorials:Taking_a_Screenshot
//
//
// screenshot de l'ecran
//

   surf = SDL_CreateRGBSurface(SDL_SWSURFACE, LARGEUR_ECRAN, HAUTEUR_ECRAN - SIZE_MENU_WIDTH, 24, 0x0000ff, 0x00ff00, 0xff0000, 0);
   if (surf == NULL)
   {}
   glReadPixels(0, 0, LARGEUR_ECRAN, HAUTEUR_ECRAN - SIZE_MENU_WIDTH, GL_RGB, GL_UNSIGNED_BYTE, surf->pixels);

   SDL_Surface *flip = flipVert(surf);
   if (flip == NULL)
   {}

// lecture du nombre
   int tata = 0;
   FILE* fichier = NULL;

   if (init_num_sauvegarde)
   {
    fichier = fopen("numero_sauvegarde.txt", "r"); // lit le fichier "numero_sauvegarde.txt"

    if (fichier != NULL) // verifie si le fichier existe
    {
     if(fgets(numero_sauvegarde, 100, fichier) == NULL); // place la valeur du fichier dans la variable numero_sauvegarde(-> string)
     {/*En cas d'erreur la fonction fgets retourne "NULL" mais si on arrive à la fin de notre fichier (comme dans notre cas alors elle renvoi aussi "NULL"*/}
    }

    fclose(fichier);

    fichier = fopen("numero_sauvegarde.txt", "w+"); // réouvre le fichier mais en mode ecriture et lecture
    if (fichier != NULL) // verifie si le fichier existe
    {
     tata = atoi(numero_sauvegarde); // transforme le chiffre ecrit dans le fichier en un entier
     tata = tata + 1;
     sprintf(numero_sauvegarde, "%d", tata); // transforme le chiffre en une chaine de caractere

// ecriture dans le fichier texte
 
     fputs(numero_sauvegarde, fichier);
     fclose(fichier);
     init_num_sauvegarde = 0;
    }
   }

   SDL_SaveBMP(flip, numero_sauvegarde);

   SDL_FreeSurface(flip);
   SDL_FreeSurface(surf);
  }
 }
}