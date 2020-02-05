#include "sdl.h"
#include "jeton.h"

/*
extern void clicSouris(float x, float y);


typedef struct
{
    float x,y;
} vec2f;

vec2f JetonPos[NB_JETON];
int JetonSetFlag[NB_JETON]= {0,0,0,0,0};

void sdl_setJetonPosition(int index, float x,float y)
{
    JetonPos[index].x = x;
    JetonPos[index].y = y;

    JetonSetFlag[index] = 1;
}

*/

void sdl_start(){
    
    SDL_Surface *ecran = NULL;
    SDL_Surface *grille = NULL;
    SDL_Surface *rouge = NULL;
    SDL_Event event;
    SDL_Rect positionG;
    SDL_Rect positionR;
    int continuer = 1;
 
    if(SDL_Init(SDL_INIT_VIDEO)==-1)
    {
        exit(EXIT_FAILURE);
    }
    
    ecran = SDL_SetVideoMode(742,650, 32, SDL_HWSURFACE| SDL_DOUBLEBUF); // affiche fenetre 640*480, gere par la CG,et plus fluide
    if(ecran == NULL)
    {
        exit(EXIT_FAILURE);
    }
    SDL_WM_SetCaption("Puissance 4", NULL);
    
    grille = SDL_LoadBMP("grille.bmp");
    
    rouge = SDL_LoadBMP("rouge.bmp");
    SDL_SetColorKey(rouge, SDL_SRCCOLORKEY, SDL_MapRGB(rouge->format, 0, 0, 255));    
    
    positionG.x = 0;
    positionG.y = 80;
    
    positionR.x = -10;
    positionR.y = -10;
    
    //SDL_ShowCursor(SDL_DISABLE);
    while(continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT: //appui sur croix rouge
                continuer = 0;
            break;
            case SDL_MOUSEMOTION:
                positionR.x=event.motion.x;
                positionR.y=event.motion.y;
            break;
            case SDL_MOUSEBUTTONDOWN:
            {

            //Si le bouton gauche de la souris est presse
            if( event.button.button & SDL_BUTTON_LEFT )
            {
                // recuperation de la position du clic
                int x,y;
                SDL_GetMouseState(&x,&y);
                clicSouris((float)x/ 720, (float)(720-y)/720);
            }
            break;
            }

        }
        /*
        SDL_Rect dstrect;
        for(int i = 0; i <NB_JETON; i++)
        {
                if(JetonSetFlag[i])
                {
                    dstrect.x =  720*(JetonPos[i].x) - rouge->w/2;
                    dstrect.y =  720 - 720*(JetonPos[i].y) - rouge->h/2;
                    SDL_BlitSurface(rouge, 0, ecran, &dstrect);
                }

        }
        */
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255)); 
        SDL_BlitSurface(grille, NULL, ecran, &positionG);
        SDL_BlitSurface(rouge, NULL, ecran, &positionR);
        SDL_Flip(ecran); // met a jour l'affichage
    }
    SDL_FreeSurface(ecran);
    SDL_FreeSurface(grille);
    SDL_Quit();
}




    
    