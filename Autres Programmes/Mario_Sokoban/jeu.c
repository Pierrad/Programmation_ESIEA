#include "constantes.h"


void jouer(SDL_Surface* ecran){
    
    SDL_Surface *mario[4] = {NULL}; // 4 surfaces pour 4 directions de mario
    SDL_Surface *mur = NULL, *caisse = NULL, *caisseOK = NULL, *objectif = NULL, *marioActuel = NULL;
    SDL_Rect position, positionJoueur;
    SDL_Event event;
    
    int continuer = 1, objectifsRestants = 0, i = 0, j = 0;
    int carte[NB_BLOCS_LARGEUR][NB_BLOCS_HAUTEUR] = {0};

    
    
    
    
    
}