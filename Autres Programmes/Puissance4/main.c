#include "sdl.h"

JetonList gJetonList;

/*
void clicSouris(float x, float y) // fonction appellée lorsque l'on appuie avec le bouton gauche de la souris
{
    // NB : une variable locale declaree static ne perd pas sa valeur entre deux appels a la fonction
    // son initialisation est effectué au tout premier appel de la fonction
    // on s'en sert ici pour savoir quel attracteur on est en train de positioner
    static int JetonCurrent = 0 ; 

    // gere les position de la liste des attracteurs 
    gJetonList.utiliseMoi[JetonCurrent]=1; // Quand un attracteur est pose, on l'indique par un 1 dans utiliseMoi a l'indice AttracteurCurrent
    gJetonList.positionJeton[JetonCurrent]=creerVect(x,y); // Creer le vecteur position de l'attracteur
    
    sdl_setJetonPosition(JetonCurrent,x,y); // Positionne le jeton
    JetonCurrent ++;
    JetonCurrent %=NB_JETON; // Empeche JetonCurrent de depasser NB_Jeton
}
*/



int main(int argc, char **argv)
{
    sdl_start();
	return 0;
}

