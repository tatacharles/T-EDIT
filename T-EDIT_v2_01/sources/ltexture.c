//#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int chargerImageBMP( const char *nom, unsigned char **pxls, int *l, int *h, int *bpp );

GLuint chargerTexture( const char *nom )
{
    unsigned char *texture;
    int l,h,bpp;
    GLuint gl_texture;

    //if( strstr( nom, ".bmp" ) )
        if( chargerImageBMP( nom, &texture, &l, &h, &bpp ) )
            fprintf( stderr, "Impossible de charger le fichier %s", nom );

    glGenTextures( 1, &gl_texture );
    glBindTexture( GL_TEXTURE_2D, gl_texture );
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    switch( bpp )
    {
        case 24 : 
         //glGenerateMipmap(GL_TEXTURE_2D);
         gluBuild2DMipmaps(GL_TEXTURE_2D, 3, l, h, GL_RGB,GL_UNSIGNED_BYTE, texture );
        break;
    }

    free( texture );
    return gl_texture;
}
