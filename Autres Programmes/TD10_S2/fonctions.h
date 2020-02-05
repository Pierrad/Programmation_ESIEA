#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Sliste {

    char nom[100]; // Name of the bar (no space in the string)
    int poids; // Score associated to the distance
    int temps; // Price of one shooter
    
}Liste;

void sommeM (float somme);
int fiboR (int n);
int* fiboI (int n);
void affiche(int* tab, int n);
Liste *CreateTab (char *path, int *taille);
void DisplayTab (Liste *tab, int taille);
void algoGlouton (Liste *tab, int temps, int taille);
void Lexico (Liste *tab, int temps, int taille);
void laRemontada (Liste *tab);
int** algoDyna (Liste *tab, int temps, int taille);