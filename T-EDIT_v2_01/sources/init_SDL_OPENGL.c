#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

void init_SDL_OPENGL (void)
{
/*--------------------------------------------------------------------------------------------------------*/
 SDL_Init(SDL_INIT_VIDEO);

 SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

 ecran = SDL_SetVideoMode(LARGEUR_ECRAN, HAUTEUR_ECRAN, 32, SDL_HWSURFACE|SDL_OPENGL); // initialise la fenetre

/* pour vérifier qu'il n'y a pas d'erreur a l'execution */
 fprintf(stderr, "Mode vidéo: %d x %d %d\n", ecran->w, ecran->h, ecran->format->BitsPerPixel);

 SDL_WM_SetCaption("T-EDIT", NULL); // affiche du texte en haute de la fenetre

 glMatrixMode( GL_PROJECTION );
 glLoadIdentity( );
 gluOrtho2D(0,LARGEUR_ECRAN,HAUTEUR_ECRAN,0); // changement de base (base identique à celle d'une surface SDL

/*--------------------------------------------------------------------------------------------------------*/
}