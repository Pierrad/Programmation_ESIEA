#ifndef gauss_h
#define gauss_h

#include "matrice.h"


int Transvection(Matrice*mat,int Li,int Lj, double lambda);
int Dilatation(Matrice *mat ,int Li,double lambda);
int Transposition(Matrice *mat,int Li,int Lj);

int RechercherMax(Matrice *m,int r,int colonne);

void EchelonnerMatrice(Matrice *m); // Permet d'échelonner et réduire une matrice grâce à la méthode Gauss-Jordan

void PivotGaussManuel (Matrice *systeme); 
void clean_stdin( void );
#endif