#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "ltexture.h"
#include "declarations.h"

//
// Avec l'aide sur le forum
// http://fr.openclassrooms.com/forum/sujet/opengl-charger-une-texture-1?page=1#message-85934346
//
// Avec les fichiers lbmp.c et ltexture.c
//

void load_texture(char numero_sauvegarde[100])
{
 glEnable(GL_TEXTURE_2D);
 glColor3ub(WHITE_COLOR);

 GLuint matexture = chargerTexture(numero_sauvegarde);

 glColor3ub(WHITE_COLOR);

 glBindTexture(GL_TEXTURE_2D, matexture);
 glBegin(GL_QUADS);
     glTexCoord2d(0,1);  glVertex2d(0,SIZE_MENU_WIDTH);
     glTexCoord2d(0,0);  glVertex2d(0,HAUTEUR_ECRAN);
     glTexCoord2d(1,0);  glVertex2d(LARGEUR_ECRAN,HAUTEUR_ECRAN);
     glTexCoord2d(1,1);  glVertex2d(LARGEUR_ECRAN,SIZE_MENU_WIDTH);
 glEnd();

 glDisable(GL_TEXTURE_2D);

 glColor3ub(WHITE_COLOR);
}