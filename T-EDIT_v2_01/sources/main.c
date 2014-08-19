// POUR LA COMPILATION SOUS LINUX AVEC gcc/g++ : -lGL -lGLU
// LA COMPILATION TOTAL : make
//
// VERSIONS UTILISEES : SDL(v1.2) OpengGL(v2.1)
//
// INSTALLATION SDL ET OPENGL : libsdl1.2 ET libgl1-mesa-swx11(POUR LE RASPBERRY PI)
//
// CHARLES TATA Licence CC-BY
//

#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"
#include "accueil.h"
#include "init_SDL_OPENGL.h"

int main(int argc, char *argv[])
{
 init_SDL_OPENGL();

 accueil();

 SDL_FreeSurface(ecran);
 SDL_Quit();
 return EXIT_SUCCESS;
}
