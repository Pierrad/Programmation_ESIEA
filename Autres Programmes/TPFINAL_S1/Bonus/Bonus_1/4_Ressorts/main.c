#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "sdl_stuff.h"
#include "vecteur.h"
#include "balle.h"
#include "decl.h"
#include "fpstimer.h"

Balle gBalleTab[NB_BALLES];


void dragSouris(float x, float y) // Fonction appellée lorsque le bouton de la souris est maintenu
{
    gBalleTab[NB_BALLES-1].position = creerVect(x,y); // Initialise le vecteur position de la structure balle avec le vecteur (x,y)
}


int main ( int argc, char** argv )
{
     if(argc>1)
     {
        fpsInit();
        
        if(!sdl_startup())
        {
            return -1;
        }
        
        Balle info = chargerBalle(argv[1]); // On charge une balle
        
       
        for (int i=0; i<NB_BALLES; i++) // On initialise les 25 balles 
        {
            gBalleTab[i]=info;
        }
       
        for(int i=0; i<NB_BALLES; i++) // On relie les balles entre elles en verifiant que la balle precedente et suivante existe bien
        {
            if (i!=0)
                gBalleTab[i].ballePrecedente=&gBalleTab[i-1];
            if (i!=NB_BALLES-1)
                gBalleTab[i].balleSuivante=&gBalleTab[i+1];
        }

        do // Program main loop
        {
            fpsStep();
            
            for(int i=0; i<NB_BALLES; i++) // Mise a jour des NB_BALLES
            {
                majPosition(&gBalleTab[i], fpsGetDeltaTime()); // Mise a jour de la position de la balle 
                // Les "if" suivants gerent les collisions avec les bords
                if (gBalleTab[i].position.x<BALL_RADIUS)
                {
                    gBalleTab[i].position.x=BALL_RADIUS;
                    gBalleTab[i].vitesse.x*=info.attenuation;
                }
                if (gBalleTab[i].position.y<BALL_RADIUS)
                {
                    gBalleTab[i].position.y=BALL_RADIUS;
                    gBalleTab[i].vitesse.y*=info.attenuation;
                }
                if (gBalleTab[i].position.x>1-BALL_RADIUS)
                {    
                    gBalleTab[i].position.x=1-BALL_RADIUS;
                    gBalleTab[i].vitesse.x*=info.attenuation;
                }
                if (gBalleTab[i].position.y>1-BALL_RADIUS)
                {
                    gBalleTab[i].position.y=1-BALL_RADIUS;
                    gBalleTab[i].vitesse.y*=info.attenuation;
                }
                
                sdl_setBallPosition(i,gBalleTab[i].position.x,gBalleTab[i].position.y); // Affiche la balle i avec les positions mises a jour
            }
        } 
        while(sdl_loop()); // End main loop
    
        sdl_clean();
     }
    return 0;
}
