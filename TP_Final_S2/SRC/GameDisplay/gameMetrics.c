#ifdef _WIN32
	#include <SDL.h>
#else
	#include <SDL2/SDL.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gameMetrics.h"
#include "../tools.h"


Metrics * newMetrics(Textures * textures)
{
    Metrics * metrics = NULL;
    int w, h, i;

    if (!textures)
        return NULL;

    metrics = (Metrics *)calloc(1, sizeof(Metrics));
    if (!metrics)
        return NULL;

    metrics->screen.x = 0;
    metrics->screen.y = 0;
    metrics->screen.w = WINDOW_WIDTH ;
    metrics->screen.h = WINDOW_HEIGHT ;

    SDL_QueryTexture(textures->notes[0], NULL, NULL, &w, &h);
    metrics->note.x = 0;
    metrics->note.y = 0;
    metrics->note.w = w;
    metrics->note.h = h;

    SDL_QueryTexture(textures->gameArea, NULL, NULL, &w, &h);
    metrics->gameArea.x = (metrics->screen.w - w) /2;
    metrics->gameArea.y = (metrics->screen.h - h) / 2;
    metrics->gameArea.w = w;
    metrics->gameArea.h = h;
	
	SDL_QueryTexture(textures->background, NULL, NULL, &w, &h);
    metrics->background.x = (metrics->screen.w - w) / 2;
    metrics->background.y = (metrics->screen.h - h) / 2;
    metrics->background.w = w;
    metrics->background.h = h;
	
	//
	//Pour determiner les w et h des metrics de initmetrics();
	//
	for (i = 0; i<5 ; i++)
	{
		SDL_QueryTexture(textures->strum[i], NULL, NULL, &w, &h);
		SDL_QueryTexture(textures->cords[i], NULL, NULL, &w, &h);
		SDL_QueryTexture(textures->strumH[i], NULL, NULL, &w, &h);

		
		metrics->strum[i].w = w;
		metrics->strum[i].h = h;
		
		metrics->cords[i].w = w;
		metrics->cords[i].h = h;
		
		metrics->strumH[i].w = w;
		metrics->strumH[i].h = h;
	}
	for (i = 0; i<9; i++)
	{
		SDL_QueryTexture(textures->score[i], NULL, NULL, &w, &h);

		metrics->score[i].w = w;
		metrics->score[i].h = h;
	}
	
    return metrics;
}

void freeMetrics(Metrics * metrics)
{
    free(metrics);
}

void initMetrics(Metrics * metrics, int nbStrings)
{
    
	/*
	Textures * textures = NULL;
	textures = (Textures *)calloc(1, sizeof(Textures));
    if (!textures)
	{
        return ;
	}
	*/
	//
	// Calcule les positions des éléments en fonction du nombre de cordes
	//
	int i;
	int space = metrics->gameArea.w / nbStrings;
	
	for(i = 0; i < nbStrings; i++)
	{
		//
		// Position des strums 
		//
		metrics->strum[i].x = metrics->gameArea.x + space*(1+i) - (metrics->strum[i].w)/2 + metrics->gameArea.w; 
		metrics->strum[i].y = metrics->gameArea.h*1.14 ; 
		//
		// Position des cordes
		//
		metrics->cords[i].x = metrics->gameArea.x + space*(1+i) + metrics->gameArea.w;
		metrics->cords[i].y = metrics->gameArea.h* 0.49 ; 
		//
		// Position des strums couleurs (meme que les strums normaux) 
		//
		metrics->strumH[i].x = metrics->gameArea.x + space*(1+i) - (metrics->strum[i].w)/2 + metrics->gameArea.w;
		metrics->strumH[i].y = metrics->gameArea.h + 1.14 ; 
		
	}
	
	for(i = 0; i< 9 ; i++)
	{
		metrics->score[i].x = metrics->gameArea.x + space*(1+i) - (metrics->strum[i].w)/2 ; 
		metrics->score[i].y = 0; 
	}
	
	
	
}