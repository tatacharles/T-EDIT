#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "init_variables.h"
#include "init_accueil.h"
#include "editer.h"
#include "explorer.h"
#include "bouton_accueil.h"
#include "ltexture.h"

void accueil (void)
{
 init_variables();
 affichage_accueil();

 while ( begin )
 {
 SDL_WaitEvent(&event);
 switch(event.type)
 {
  case SDL_MOUSEBUTTONDOWN: // quand on appui sur le clic de la souris
   if (event.button.button == SDL_BUTTON_LEFT) // si on appui sur le clic gauche
   {
    if (event.button.x > BUTTON_EDITER_X && event.button.x < BUTTON_EDITER_X + BUTTON_WIDTH_EDITER && event.button.y > BUTTON_EDITER_Y && event.button.y < BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER) // EDITER
    {
     appui_bouton_editer();
    }
    else if (event.button.x > BUTTON_EXPLORER_X && event.button.x < BUTTON_EXPLORER_X + BUTTON_WIDTH_EXPLORER && event.button.y > BUTTON_EXPLORER_Y && event.button.y < BUTTON_EXPLORER_Y + BUTTON_HEIGHT_EXPLORER) // EXPLORER
    {
     appui_bouton_explorer();
    }
    else if (event.button.x > BUTTON_QUITTER_X && event.button.x < BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER && event.button.y > BUTTON_QUITTER_Y && event.button.y < BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER) // QUITTER
    {
     appui_bouton_quitter();
    }
   }
  break;
  case SDL_MOUSEBUTTONUP: // quand on relache le clic de la souris
   if (event.button.button == SDL_BUTTON_LEFT) // si on relache le clic gauche
   {
    if (event.button.x > BUTTON_EDITER_X && event.button.x < BUTTON_EDITER_X + BUTTON_WIDTH_EDITER && event.button.y > BUTTON_EDITER_Y && event.button.y < BUTTON_EDITER_Y + BUTTON_HEIGHT_EDITER) // EDITER
    {
     relache_bouton_editer();
     editer();
     touch = 1;
     trace = 0;
     show = 1;
    }
    else if (event.button.x > BUTTON_EXPLORER_X && event.button.x < BUTTON_EXPLORER_X + BUTTON_WIDTH_EXPLORER && event.button.y > BUTTON_EXPLORER_Y && event.button.y < BUTTON_EXPLORER_Y + BUTTON_HEIGHT_EXPLORER) // EXPLORER
    {
     relache_bouton_explorer();
     explorer();
     touch = 1;
     trace = 0;
     show = 1;
    }
    else if (event.button.x > BUTTON_QUITTER_X && event.button.x < BUTTON_QUITTER_X + BUTTON_WIDTH_QUITTER && event.button.y > BUTTON_QUITTER_Y && event.button.y < BUTTON_QUITTER_Y + BUTTON_HEIGHT_QUITTER) // QUITTER
    {
     relache_bouton_quitter();
     begin = 0;
    }
   }
  break;
  case SDL_QUIT:
   begin = 0;
  break;
  default:
  break;
 }
 }
}