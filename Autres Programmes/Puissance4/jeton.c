#include "jeton.h"


Vecteur creerVect(float x, float y){ // Initialise la structure Vecteur
    
    Vecteur Init;
    Init.x = x;
    Init.y = y;
    return Init; 
    
}


Vecteur addVect(Vecteur v1, Vecteur v2){ // additionne 2 vecteurs
    
    Vecteur v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v; 
    
}

Vecteur multScalVect(float s, Vecteur v){ // Multiplie composantes x et y par le scalaire
    
    v.x *= s;
    v.y *= s;
    return v;
    
}


int majPosition(Jeton * jeton, float dt) // Met a jour la position de la balle avec le PFD
{
    if (jeton == NULL)
    {
        return -1; // Securite
    }

    Vecteur g = creerVect(0,-9.81); // Creation vecteur g
    
    Vecteur poids = multScalVect(jeton->masse, g); // Calcul du poids
 
    jeton->vitesse = multScalVect(dt, poids); // Mise a jour de la vitesse de la balle
    jeton->position = addVect(jeton->position, multScalVect(dt, jeton->vitesse)); // Mise a jour de la position de la balle 
    
    return 0;
}