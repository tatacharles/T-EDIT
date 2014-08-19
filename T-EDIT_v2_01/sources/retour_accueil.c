#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "init_variables.h"
#include "init_accueil.h"
#include "save.h"

void appui_slide_back (void)
{
 if (event.button.x > 60 && event.button.x < 95 && event.button.y > 5 && event.button.y < 45)
 {
  positionBackP0.x = event.button.x;
  positionBackP0.y = event.button.y;
 }
}

void relache_slide_back (void)
{
 if (event.button.x > 320 && event.button.x < 460 && event.button.y > 5 && event.button.y < 45)
 {
  positionBackP1.x = event.button.x;
  positionBackP1.y = event.button.y;

  if (positionBackP1.x - positionBackP0.x > 320)
  {
   init_variables();
   affichage_accueil();
   show = 0;
   touch = 0;
  }
 }
}
