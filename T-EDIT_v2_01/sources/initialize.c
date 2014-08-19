#include <SDL/SDL.h>
#include "initialisation_menu.h"
#include "declarations.h"
#include "initialisation_zone_dessin.h"

void initialisation (void)
{
 initialisation_new_page();
 initialisation_couleur_fond_menu();
 initialisation_zone_dessin ();
 initialisation_bouton_couleur(&rouge, &vert, &bleu);
 initialisation_bouton_plus_moins();
 initialisation_bouton_page();
 initialisation_save();
 initialisation_new_page();
 /* must be called twice to make it work, else the program name keeps displayed ... */
 initialisation_zone_dessin ();
}
