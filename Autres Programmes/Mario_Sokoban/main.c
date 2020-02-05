#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include "constantes.h"
#include "jeu.h"
#include "editeur.h"

int main(int argc, char **argv)
{
	SDL_Surface *ecran = NULL, *menu=NULL;
    SDL_Rect positionMenu;
    SDL_Event event;
    
    int continuer = 1;
    
    if(SDL_Init(SDL_INIT_VIDEO)==-1)
    {
        exit(EXIT_FAILURE);
    }
    SDL_WM_SetIcon(SDL_LoadBMP("caisse.jpg"), NULL);
    ecran = SDL_SetVideoMode(LARGEUR_FENETRE,HAUTEUR_FENETRE, 32, SDL_HWSURFACE| SDL_DOUBLEBUF);
    if(ecran == NULL)
    {
        exit(EXIT_FAILURE);
    }
    SDL_WM_SetCaption("Mario Sokoban", NULL);
    
    menu = SDL_LoadBMP("menu.bmp");
 
    positionMenu.x=0;
    positionMenu.y=0;
    
    while(continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
            break;
            
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        continuer = 0;
                    break;
                    case SDLK_a:
                        positionMenu.x=positionMenu.x+20;
                        jouer(ecran);
                    break;
                    case SDLK_b:
                        positionMenu.x=positionMenu.x-20;
                    break;
                }
            break;
        }
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255)); 
        SDL_BlitSurface(menu, NULL, ecran, &positionMenu);
        SDL_Flip(ecran); // met a jour l'affichage
    }
    SDL_FreeSurface(ecran);
    SDL_FreeSurface(menu);
    SDL_Quit();
	return 0;
}
