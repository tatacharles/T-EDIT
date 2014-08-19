#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <dirent.h>
#include "declarations.h"
#include "choix_couleur.h"
#include "size.h"
#include "tourner_page.h"
#include "new_page.h"
#include "save.h"
#include "retour_accueil.h"

/************************
 * evenements souris    *
 ************************
 * event_screen()       *
 ************************/

void event_screen(unsigned short int* pointeurrouge, unsigned short int* pointeurvert, unsigned short int* pointeurbleu)
{
 positionPoint0.x = event.button.x;
 positionPoint0.y = event.button.y;

 while (SDL_PollEvent(&event))
 {
  switch(event.type)
  {
   case SDL_MOUSEBUTTONDOWN: // quand on appui sur le clic de la souris
    if (event.button.button == SDL_BUTTON_LEFT) // si on appui sur le clic gauche
    {
     appui_clic_couleur();
     appui_plus_moins();
     appui_clic_page();
     appui_clic_save();
     appui_clic_new();
     appui_slide_back ();

     positionPoint1.x = event.button.x;
     positionPoint1.y = event.button.y;

     if (trace == 0)
     {
      positionPoint0.x = positionPoint1.x;
      positionPoint0.y = positionPoint1.y;
     }

     trace = 1;
    }
   break;
   case SDL_MOUSEBUTTONUP: // quand on relache le clic de la souris
    if (event.button.button == SDL_BUTTON_LEFT) // si on relache le clic gauche
    {
     relache_clic_couleur(&rouge, &vert, &bleu);
     relache_plus_moins(&taille);
     relache_clic_page();
     relache_clic_save();
     relache_clic_new();
     relache_slide_back ();
     trace = 0;
    }
   break;
   case SDL_QUIT:
    touch = 0;
    begin = 0;
   break;
   default:
   break;
  }

  positionPoint1.x = event.button.x;
  positionPoint1.y = event.button.y;
 }
}