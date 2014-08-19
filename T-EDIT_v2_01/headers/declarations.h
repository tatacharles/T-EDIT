#ifndef __DECLARATION_H__
#define __DECLARATION_H__

 SDL_Event event;

 SDL_Surface *ecran;
 SDL_Surface *surf;

 SDL_Rect positionPoint0;
 SDL_Rect positionPoint1;

 SDL_Rect positionBackP0;
 SDL_Rect positionBackP1;

 unsigned short *pointeurrouge;
 unsigned short *pointeurvert;
 unsigned short *pointeurbleu;

 unsigned short rouge;
 unsigned short vert;
 unsigned short bleu;

 unsigned short trace;
 unsigned short touch;
 unsigned short begin;
 unsigned short show;

 unsigned short taille;

 unsigned short page_precedente;
 unsigned short page_suivante;
 unsigned short screen_precedent;
 unsigned short screen_suivant;
 unsigned short init_num_sauvegarde;
 unsigned short new_page;
 unsigned short save_page;
 unsigned short size_minus;
 unsigned short size_plus;
 unsigned short black_color;
 unsigned short blue_color;
 unsigned short green_color;
 unsigned short red_color;
 unsigned short white_color;

 char numero_sauvegarde[1000];

#define LARGEUR_ECRAN 480
#define HAUTEUR_ECRAN 800

#define RED_INTRO_COLOR_VALUE		217
#define GREEN_INTRO_COLOR_VALUE		80
#define BLUE_INTRO_COLOR_VALUE		1
#define INTRO_COLOR RED_INTRO_COLOR_VALUE, GREEN_INTRO_COLOR_VALUE, BLUE_INTRO_COLOR_VALUE

#define BLACK_COLOR 0, 0, 0
#define RED_COLOR 255, 0, 0
#define GREEN_COLOR 0, 255, 0
#define BLUE_COLOR 0, 0, 255
#define WHITE_COLOR 255, 255, 255

#define GRAY_COLOR 100,100,100

#define MENU_X 0
#define MENU_Y 0

#define SIZE_MENU_WIDTH 50

#define LETTER_SDL_DELAY 100
#define FINAL_SDL_DELAY  1000

#define SIZE_MENU_COLOR 20

#define COLOR_BLACK_X 320
#define COLOR_BLACK_Y 15

#define COLOR_BLUE_X 350
#define COLOR_BLUE_Y 15

#define COLOR_GREEN_X 380
#define COLOR_GREEN_Y 15

#define COLOR_RED_X 410
#define COLOR_RED_Y 15

#define COLOR_WHITE_X 440
#define COLOR_WHITE_Y 15

#define SIZE_MENU_SIZE 30

#define SQUARED_MINUS_X 185
#define SQUARED_MINUS_Y 10

#define SQUARED_PLUS_X 270
#define SQUARED_PLUS_Y 10

#define NOMBRE_1_X 220
#define NOMBRE_1_Y 45
#define NOMBRE_2_X 245
#define NOMBRE_2_Y 45
#define LARGEUR_NOMBRE 20

#define SIZE_BUTTON_BEFORE_NEXT 20

#define BUTTON_BEFORE_X 135
#define BUTTON_BEFORE_Y 5

#define BUTTON_NEXT_X 140
#define BUTTON_NEXT_Y 5

#define SAVE_X 60
#define SAVE_Y 5

#define NEW_X 10
#define NEW_Y 5

#define BUTTON_HEIGHT_EDITER 95
#define BUTTON_WIDTH_EDITER 345
#define BUTTON_EDITER_X 70
#define BUTTON_EDITER_Y 370

#define BUTTON_HEIGHT_EXPLORER 95
#define BUTTON_WIDTH_EXPLORER 476
#define BUTTON_EXPLORER_X 2
#define BUTTON_EXPLORER_Y 475

#define BUTTON_HEIGHT_QUITTER 95
#define BUTTON_WIDTH_QUITTER 400
#define BUTTON_QUITTER_X 40
#define BUTTON_QUITTER_Y 580

#endif