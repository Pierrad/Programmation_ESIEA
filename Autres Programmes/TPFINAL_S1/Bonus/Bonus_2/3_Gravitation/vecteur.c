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


Vecteur addVect(Vecteur v1, Vecteur v2){ // Additionne 2 vecteurs
    
    Vecteur v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v; 
    
}


Vecteur normaliseVect(Vecteur v){ // Egalise la norme du vecteur v a 1
    
    float norme = normVect(v);
    if (norme==0){
        printf("Division par zero"); // Permet de gerer le cas ou la norme est nulle
        return creerVect(0,0);
    }
    Vecteur normalise = multScalVect((1/norme), v); 
    return normalise;
    
}


float normVect(Vecteur v){ // Calcule la norme du vecteur v
    
    float norme;
    norme = sqrt(pow(v.x,2)+pow(v.y,2));
    return norme;
    
}


Vecteur subVect(Vecteur v1, Vecteur v2){ // Soustrait 2 vecteurs et retourne le resultat
    
    Vecteur v;
    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;
    return v; 
    
    
}