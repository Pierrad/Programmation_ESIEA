#include <stdlib.h>
#include <stdio.h>

int rechercheDichI (int N);
int rechercheDichR(int N, int min, int max);
void TrisRapide(int* Tab,int i,int j);
int Partitionnement(int* Tab,int premier,int dernier);
void Echange(int* Tab,int i,int j);
void affiche(int* tab, int N);