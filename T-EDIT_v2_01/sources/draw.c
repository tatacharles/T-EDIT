#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "declarations.h"

/*****************************
 * fonction pour dessiner    *
 *****************************
 * draw()                    *
 *****************************/

void draw (int trace, int rouge, int vert, int bleu)
{
 glPointSize( taille - 2 ); // taille du point
 glLineWidth( taille ); // largeur de la ligne
 // si on enleve cette condition une ligne se crée entre le point et l'origine du repere lorsque l'on veut dessiner sur un des bords de la fenetre
 if (positionPoint0.x != 0 && positionPoint1.x != 0 && positionPoint0.y > SIZE_MENU_WIDTH && positionPoint1.y > SIZE_MENU_WIDTH)
 {
  if (trace)
  {
   glBegin(GL_POINTS); // fonction GL pour afficher un point
       glColor3ub(rouge,vert,bleu); // la couleur
       glVertex2d(positionPoint0.x, positionPoint0.y); // (en x, en y)
   glEnd();

   glFlush(); //  termine le dessin et force toutes les commandes à être éxécutées puis envoie le flux de données vers le buffer d'affichage
   SDL_GL_SwapBuffers(); // pour l'échange des buffers

   // relie le point0 et le point1 si ils ont un écart de plus de 3px
   if ((positionPoint1.x - positionPoint0.x) > 1 || (positionPoint0.x - positionPoint1.x) > 1 || (positionPoint1.y - positionPoint0.y) > 1 || (positionPoint0.y - positionPoint1.y) > 1)
   {
    glBegin(GL_LINES); // fonction GL pour relier 2 points
        glColor3ub(rouge,vert,bleu); // la couleur
        glVertex2d(positionPoint0.x, positionPoint0.y); // (en x, en y)
        glVertex2d(positionPoint1.x, positionPoint1.y); // (en x, en y)
    glEnd();

    glFlush();
    SDL_GL_SwapBuffers();
   }
  }
 }
}