
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "../SheetMusic/analysis.h"
#include "../SheetMusic/midiFile.h"
#include "../SheetMusic/sheetMusic.h"
#include "../GameModel/model.h"
#include "../tools.h"
#include "display.h"

#include "mainWindow.h"
#include "textures.h"

GameDisplay * newGameDisplay(MainWindow * mainWindow)
{
    GameDisplay * gameDisp = NULL;

    if (!mainWindow)
        return NULL;

    gameDisp = (GameDisplay *)calloc(1, sizeof(GameDisplay));
    if (!gameDisp)
        goto ERROR_LABEL;

    gameDisp->textures = newTextures(mainWindow->renderer);
    if (!gameDisp->textures)
        goto ERROR_LABEL;
		
    gameDisp->metrics = newMetrics(gameDisp->textures);
    if (!gameDisp->metrics)
        goto ERROR_LABEL;
	
	
    return gameDisp;

ERROR_LABEL:
    freeGameDisplay(gameDisp);
    return NULL;
}

void freeGameDisplay(GameDisplay * gameDisp)
{
    if (gameDisp)
    {
        freeTextures(gameDisp->textures);
        freeMetrics(gameDisp->metrics);

        free(gameDisp);
    }
}

void updateGameDisplay(GameDisplay *gameDisp, MainWindow *mainWindow, Model *model)
{
    SDL_Renderer *renderer = mainWindow->renderer;
    Textures *textures = gameDisp->textures;
    GameSheet *gameSheet = model->gameSheet;
    GameNote *notes, *curNote;
    Metrics *metrics;
    int x, y, i;
    int stringIdx, staffIdx;
	int nbStrings = model->gameSheet->nbStrings;

    staffIdx = gameSheet->staffIdx;
    notes = gameSheet->notes[staffIdx];
    metrics = gameDisp->metrics;
	int space = metrics->gameArea.w / nbStrings;
    //******************************************************************************************************************
    // Remise à zéro de l'affichage

    SDL_RenderClear(renderer);

	//******************************************************************************************************************
    // Background

    x = metrics->background.x;
    y = metrics->background.y;
    renderTexture(textures->background, renderer, x, y);
	
    //******************************************************************************************************************
    // Fond de la guitare
	/*
    x = metrics->gameArea.x;
    y = metrics->gameArea.y;
    renderTexture(textures->gameArea, renderer, x, y);
	*/
	
	//******************************************************************************************************************
    // Scores
	for(i = 0; i < 9; i++)
	{
		x = metrics->score[i].x;
		y = metrics->score[i].y;
		renderTexture(textures->score[i], renderer, x, y);
	}
	
	//******************************************************************************************************************
    // Strum
	
	for (i = 0; i < nbStrings ;i++)
	{
		x = metrics->strum[i].x;
		y = metrics->strum[i].y;
		if(model->keys->fretDown[i] == 1) // si on appuie sur une des touches configurées
		{	
			renderTexture(textures->strumH[i], renderer, x, y);
		}
		else if(model->keys->fretDown[i] == 0) // si on n'appuie pas sur une des touches configurées
		{
			renderTexture(textures->strum[i], renderer, x, y);
		}
	}
	
	
	//******************************************************************************************************************
    // Cordes
	
	for (i = 0; i < nbStrings ;i++)
	{
		x = metrics->cords[i].x;
		y = metrics->cords[i].y;
		renderTexture(textures->cords[i], renderer, x, y);
	}
	
    //******************************************************************************************************************
    // Notes
	
	for (i = 0; i< model->gameSheet->nbNotes[0]; i++)
	{
		curNote = &notes[i];
		stringIdx = curNote->stringIdx;
		//
		// On adapte le x des notes pour chaque string
		//
		switch(stringIdx)
		{
			case 0:
				x = metrics->gameArea.x + space*(1) - (metrics->strum[0].w)/2 + metrics->gameArea.w;
			break;
			
			case 1:
				x = metrics->gameArea.x + space*(2) - (metrics->strum[1].w)/2 + metrics->gameArea.w;
			break;
			
			case 2:
				x = metrics->gameArea.x + space*(3) - (metrics->strum[2].w)/2 + metrics->gameArea.w;
			break;
			
			case 3:
					x = metrics->gameArea.x + space*(4) - (metrics->strum[3].w)/2 + metrics->gameArea.w;
			break;
			
			case 4:
				x = metrics->gameArea.x + space*(5) - (metrics->strum[4].w)/2 + metrics->gameArea.w;
			break; 
		}
		
		y = metrics->gameArea.y + curNote->relPos * metrics->gameArea.h;
		//
		// On vérifie si l'etat de la note est vivant sinon on met son argument visible a 0 
		//
		if(curNote->state != stateAlive)
		{
			curNote->visible = 0;
			
		}
		//
		// On render la texture si la note doit etre visible et si le nombre de string demandé par le joueur est supérieur 
		// au stringIdx de la note
		//
		if(nbStrings > stringIdx && curNote->visible == 1 )
		{
			renderTexture(textures->notes[stringIdx], renderer, x, y);
		}
	}
	
    //******************************************************************************************************************
    // Mise à jour de l'affichage

    SDL_RenderPresent(renderer);
}
