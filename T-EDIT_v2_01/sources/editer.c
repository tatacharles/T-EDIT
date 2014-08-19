#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "draw.h"
#include "declarations.h"
#include "event_screen.h"
#include "initialize.h"

void editer (void)
{
 initialisation();

 while (touch)
 {
  event_screen(&rouge, &vert, &bleu);
  draw(trace, rouge, vert, bleu);
 }
}