#include "vecteur.h"

Vecteur creerVect(float x, float y){ // Initialise la structure Vecteur
    
    Vecteur Init;
    Init.x = x;
    Init.y = y;
    return Init; 
    
}

Vecteur multScalVect(float s, Vecteur v){ // Multiplie composantes x et y par le scalaire
    
    v.x *= s;
    v.y *= s;
    return v;
    
}


Vecteur addVect(Vecteur v1, Vecteur v2){ // additionne 2 vecteurs
    
    Vecteur v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v; 
    
}
