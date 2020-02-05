
#ifndef _GAME_METRICS_INCLUDED_
#define _GAME_METRICS_INCLUDED_

#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include "../GameModel/model.h"
#include "textures.h"

//
// gestion de la position des différents objets
//
typedef struct Metrics_s
{
    SDL_Rect screen;
    SDL_Rect note;
    SDL_Rect gameArea;
    SDL_Rect background;
	SDL_Rect strum[MAX_STRINGS];
	SDL_Rect cords[MAX_STRINGS];
	SDL_Rect strumH[MAX_STRINGS];
	SDL_Rect score[10];
} Metrics;

Metrics * newMetrics(Textures * textures);
void freeMetrics(Metrics * metrics);

void initMetrics(Metrics *metrics, int nbStrings);

#endif
