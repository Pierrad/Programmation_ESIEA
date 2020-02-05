#include <stdlib.h>
#include "sdl_stuff.h"
#include "fpstimer.h"
#include <math.h>
#include "balle.h"
#include "vecteur.h"

int main ( int argc, char** argv )
{
   if(argc>1)
    {
        if(!sdl_startup())
        {
            return -1;
        }
        fpsInit();
        
        Balle info = chargerBalle(argv[1]); // Charger la balle a partir de balle.txt
        float attenue = -0.9; // Float comprenant la valeur (-1) pour le reajustement par rapport aux bords, et la valeur de la perte d'energie
    
        do // Boucle pour mettre a jour en continue la simulation
        {
            fpsStep();

            majPosition(&info, fpsGetDeltaTime()); // Mise a jour de la position de la balle 
            // Les "if" suivants verifie et ajuste la position et la vitesse de la balle par rapport aux bords
            if (info.position.x<BALL_RADIUS)
            {
                info.position.x=BALL_RADIUS;
                info.vitesse.x*=attenue;
            }
            if (info.position.y<BALL_RADIUS)
            {
                info.position.y=BALL_RADIUS;
                info.vitesse.y*=attenue;
            }
            if (info.position.x>1-BALL_RADIUS)
            {    
                info.position.x=1-BALL_RADIUS;
                info.vitesse.x*=attenue;
            }
            if (info.position.y>1-BALL_RADIUS)
            {
                info.position.y=1-BALL_RADIUS;
                info.vitesse.y*=attenue;
            }
           
            sdl_setBallPosition(info.position.x,info.position.y); // Mise a jour de la position de la balle
        }
        while(sdl_loop()); // End main loop
        sdl_clean();
    }
    return 0;
    
}
