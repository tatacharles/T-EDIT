#include <stdio.h>
#include <stdlib.h>
struct
{
    int tailleEnteteImage;
    int largeur;
    int hauteur;
    short nbre_plans;
    short profondeurCodage;
    int compression;
    int tailleImage;
    int resolutionHorizontale;
    int resolutionVerticale;
    int nbre_couleurPlte;
    int nbreCouleurImportantes;
}bmp_enteteImage;

typedef struct bmp_couleurPlte bmp_couleurPlte;
struct bmp_couleurPlte
{
    unsigned char b;
    unsigned char v;
    unsigned char r;
    unsigned char reserve;
};

typedef struct bmp_bvr bmp_bvr;
struct bmp_bvr
{
    unsigned char b;
    unsigned char v;
    unsigned char r;
};

void bmpLirePixels24( FILE * fichier, unsigned char * buf, int l, int h )
{
    bmp_bvr px;
    int i,j;

    for( j= h-1; j > -1; j-- )
    {
        for( i=0; i<l; i++ )
        {
            fread( &px, sizeof(bmp_bvr), 1, fichier );
            *buf = px.r; buf++;
            *buf = px.v; buf++;
            *buf = px.b; buf++;
        }
        if( l % 4 != 0 )
           fseek( fichier, 4 - (l*3 % 4), SEEK_CUR );
    }

}

void bmpLirePixels8( FILE * fichier, unsigned char *buf, bmp_couleurPlte *palette, int l, int h )
{
   int i,j;
   unsigned char px = 0;

   for( i=h-1; i > -1; i-- )
   {
       for( j=0; j<l; j++ )
       {
           fread( &px, 1, 1, fichier );
           *buf = palette[px].r; buf++;
           *buf = palette[px].v; buf++;
           *buf = palette[px].b; buf++;
       }
       if( l % 4 != 0 )
          fseek( fichier, 4 - (l % 4), SEEK_CUR );
   }

}

void bmpLirePixelsRLE8( FILE *fichier, unsigned char *buf, bmp_couleurPlte *palette, int l, int h )
{
   //idemg
}

int chargerImageBMP( const char *nom, unsigned char **pxls, int *l, int *h, int *bpp )
{
    bmp_couleurPlte *palette = NULL;
    FILE* fichier = NULL;
    unsigned char *buf=NULL;

    fichier = fopen( nom, "rb" );
    if( !fichier ) return 1;

    //lecture de l'entete
    fseek( fichier, 14, SEEK_SET );
    fread( &bmp_enteteImage, sizeof( bmp_enteteImage ), 1, fichier );

    //chargement de la palette
    if( bmp_enteteImage.profondeurCodage == 8 && bmp_enteteImage.nbre_couleurPlte == 0 )
       bmp_enteteImage.nbre_couleurPlte = 256;
    if( bmp_enteteImage.nbre_couleurPlte )
    {
        palette = (bmp_couleurPlte*)malloc( sizeof( bmp_couleurPlte ) * bmp_enteteImage.nbre_couleurPlte );
        if( !palette )
        {
            fclose( fichier );
            return 1;
        }
        fread( palette, sizeof(bmp_couleurPlte),
               bmp_enteteImage.nbre_couleurPlte, fichier );
    }

    buf = (unsigned char*)malloc( bmp_enteteImage.largeur*bmp_enteteImage.hauteur*3 );
    if( !pxls )
    {
        fclose( fichier );
        free( palette );
        return 1;
    }

    switch( bmp_enteteImage.profondeurCodage )
    {
        case 24 : bmpLirePixels24( fichier, buf, bmp_enteteImage.largeur, bmp_enteteImage.hauteur  );
                  *bpp = 24;
        break;
        case 8 : if( bmp_enteteImage.compression == 1 )
                    bmpLirePixelsRLE8( fichier, buf,palette, bmp_enteteImage.largeur, bmp_enteteImage.hauteur );
                 else
                    bmpLirePixels8( fichier, buf,palette, bmp_enteteImage.largeur, bmp_enteteImage.hauteur );
                 *bpp = 24;
        /*
        break;
        case 4:
        break;
        case 1:
        break;
        */
    }

    *l = bmp_enteteImage.largeur;
    *h = bmp_enteteImage.hauteur;
    *pxls = buf;

    fclose( fichier );
    return 0;
}