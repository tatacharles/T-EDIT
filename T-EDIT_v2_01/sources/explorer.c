#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "initialisation_menu.h"
#include "tourner_page.h"
#include "retour_accueil.h"

void explorer (void)
{
 initialisation_menu_explorer();

 while ( show )
 {
  SDL_WaitEvent(&event);
  switch(event.type)
  {
   case SDL_MOUSEBUTTONDOWN: // quand on appui sur le clic de la souris
    if (event.button.button == SDL_BUTTON_LEFT) // si on appui sur le clic gauche
    {
     appui_clic_page ();
     appui_slide_back ();
    }
   break;
   case SDL_MOUSEBUTTONUP: // quand on relache le clic de la souris
    if (event.button.button == SDL_BUTTON_LEFT) // si on relache le clic gauche
    {
     relache_clic_page ();
     relache_slide_back ();
    }
   break;
   case SDL_QUIT:
    show = 0;
    begin = 0;
   break;
   default:
   break;
  }
 }
}