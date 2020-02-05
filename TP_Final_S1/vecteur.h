#include <stdio.h>
#include <stdlib.h>

typedef struct Vecteur_decl{
    float x;
    float y;
}Vecteur;

Vecteur creerVect(float x, float y); // Retourne une structure Vecteur initialisee a (x,y).
Vecteur multScalVect(float s, Vecteur v); // Multiplie un scalaire avec un vecteur et retourne le resultat.
Vecteur addVect(Vecteur v1, Vecteur v2); // Additionne 2 vecteurs et retourne le resultat.
