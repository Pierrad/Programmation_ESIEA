#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    SDL_Surface *ecran = NULL;
    SDL_Surface *zozor = NULL;
    SDL_Event event;
    SDL_Rect position;
    int continuer = 1;
 
    if(SDL_Init(SDL_INIT_VIDEO)==-1)
    {
        exit(EXIT_FAILURE);
    }
    
    ecran = SDL_SetVideoMode(640,480, 32, SDL_HWSURFACE| SDL_DOUBLEBUF); // affiche fenetre 640*480, gere par la CG,et plus fluide
    if(ecran == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    SDL_WM_SetCaption("Test sdl", NULL); //permet de mettre un titre a la fenetre
    
    zozor = SDL_LoadBMP("zozor.bmp");
    SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));
    
    position.x = 320;
    position.y =250;
    SDL_EnableKeyRepeat(10, 10); // faire une action si key est garde enfoncée, si temps d'enfoncement 10ms alors continuer action 10 ms
    SDL_ShowCursor(SDL_DISABLE); // afficher ou desactiver le curseur
     while(continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT: //appui sur croix rouge
                continuer = 0;
            break;
            case SDL_KEYDOWN: // Si appui sur une touche
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP:
                        position.y--;
                    break;
                    case SDLK_DOWN:
                        position.y++;
                    break;
                    case SDLK_LEFT:
                        position.x--;
                    break;
                    case SDLK_RIGHT:
                        position.x++;
                    break;
                }
            break;
            case SDL_MOUSEBUTTONUP:
                switch(event.button.button)
                {
                    case SDL_BUTTON_RIGHT:
                        continuer=0;
                    break;
                    case SDL_BUTTON_LEFT:
                        position.x= event.button.x;
                        position.y=event.button.y;
                    break;
                }
            break;
            case SDL_MOUSEMOTION:
                position.x=event.motion.x;
                position.y=event.motion.y;
            break;
        }
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255)); 
        SDL_BlitSurface(zozor, NULL, ecran, &position);
        SDL_Flip(ecran); // met a jour l'affichage
    }
    SDL_FreeSurface(ecran);
    SDL_FreeSurface(zozor);
    SDL_Quit();
	return 0;
}
    //SDL_Surface *rectangle = NULL;
	//SDL_Surface *degrade[256] = {0};
    

    //rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, 220, 180, 32, 0, 0, 0, 0); // creer un rectangle de 220*180, gere par la CG
   
    //Icone avant setvideo
    //SDL_WM_SetIcon(SDL_LoadBMP("sdl_icone.bmp"), NULL); // permet de mettre une icone, prend la surface (sdl_loadbmp cree une surface) et la transparence NULL
   

    /*
    for(int i=0; i<255;i++)
    {
        degrade[i]=SDL_CreateRGBSurface(SDL_HWSURFACE, 640, 1, 32, 0, 0, 0, 0);
        SDL_FillRect(degrade[i], NULL, SDL_MapRGB(ecran->format, i, i, i));
        SDL_Rect position;
        position.x = 0;
        position.y = i;
        SDL_BlitSurface(degrade[i], NULL, ecran, &position);
    }
    */
    
    //SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 17, 206, 112)); // le pointeur, la partie a remplir, la couleur obtenue avec la fonction
    //SDL_FillRect(rectangle, NULL, SDL_MapRGB(ecran->format, 255, 255, 255)); // le pointeur, la partie a remplir, la couleur obtenue avec la fonction 
    
    //SDL_Rect position;
    //position.x = (640 / 2) - (220 / 2);
    //position.y = (480 / 2) - (180 / 2);
    
    //SDL_BlitSurface(rectangle, NULL, ecran, &position); //permet de dire de coller rectangle sur ecran aux bonnes positions
    
    /*
    SDL_Rect positionF;
    positionF.x = 0;
    positionF.y = 0;
    SDL_Surface *maSurface = SDL_LoadBMP("lac_en_montagne.bmp"); //creer une surface avec image
    SDL_BlitSurface(maSurface, NULL, ecran, &positionF); // colle maSurface sur ecran
    
    SDL_Rect positionZ;
    positionZ.x=500;
    positionZ.y=260;
    SDL_Surface *zozor = SDL_LoadBMP("zozor.bmp");
    //on rend le bleu derriere transparrent avec cette fonction:
    SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255)); //surface zozor, active la transparence de couleur bleu
    SDL_SetAlpha(zozor, SDL_SRCALPHA, 128);//autre facon d'activer la transparrence, on choisit la surface, on active la transparrence, et le degré
    SDL_BlitSurface(zozor, NULL, ecran, &positionZ);

    
    SDL_Flip(ecran); // met a jour l'affichage

    
    
    SDL_FreeSurface(rectangle); //libere la memoire
    SDL_FreeSurface(maSurface);
    SDL_FreeSurface(zozor);
    */