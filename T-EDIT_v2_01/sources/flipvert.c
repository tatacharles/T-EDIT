#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

/*************************************************
 * retourne l'image avant de la sauvegarder      *
 *************************************************
 * SDL_Surface* flipVert(sfc)                    *
 *************************************************/

//
// Avec l'aide sur le forum :
// http://fr.openclassrooms.com/forum/sujet/sauvegarde-de-son-ecran-opengl-en-images-bmp?page=1#message-85366943
// Et le tuto pour flipvert :
// http://content.gpwiki.org/index.php/OpenGL:Tutorials:Taking_a_Screenshot
//

SDL_Surface* flipVert(SDL_Surface *sfc)
{
 SDL_Surface *result = SDL_CreateRGBSurface(sfc->flags, sfc->w, sfc->h,
     sfc->format->BytesPerPixel * 8, sfc->format->Rmask, sfc->format->Gmask,
     sfc->format->Bmask, sfc->format->Amask);
 if (result == NULL) return NULL;

 Uint8* pixels = (Uint8*) sfc->pixels;
 Uint8* rpixels = (Uint8*) result->pixels;

 Uint32 pitch = sfc->pitch;
 Uint32 pxlength = pitch*sfc->h;

 for(int line = 0; line < sfc->h; ++line)
 {
     Uint32 pos = line * pitch;
     memcpy(&rpixels[pos], &pixels[(pxlength-pos)-pitch], pitch);
 }

 return result;
}