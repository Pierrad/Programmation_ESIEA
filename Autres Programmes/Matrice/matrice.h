#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct Matrice_s{
	
	int height;	   // Contient le nombre de lignes de la matrice
	int width;	   // Contient le nombre de colonnes de la matrice
	double **M;    // Tableau contenant les coefficients de la matrice	
}Matrice;

Matrice *AllocMatrice(int height, int width); // Permet de charger une matrice de taille n*p à partir d'un fichier de configuration
Matrice *ChargerMatrice (char *path); // Charge la matrice
int EcrireMatrice (char*path, Matrice *m); // Ecris la matrice dans un fichier
int AfficherMatrice(Matrice *m); // Permet d'afficher une matrice
void EchelonnerMatrice(Matrice *m); // Permet d'échelonner et réduire une matrice grâce à la méthode Gauss-Jordan
void LibererMatrice(Matrice *m); // Permet de libérer l'espace mémoire alloué à la matrice
double Trace (Matrice *m); // Permet de realiser la trace de la matrice
Matrice *Addition (Matrice *m, Matrice *n);  // Addionne deux matrices
Matrice *Soustraction (Matrice *m, Matrice *n); // Soustraie deux matrices
Matrice *ProduitExterne (Matrice *m, double s); // Multiplie la matrice par un scalaire
Matrice *ProduitInterne (Matrice *m, Matrice *n); // Multiplie deux matrices
Matrice *Puissance (Matrice m, int n); // Met a la puissance une matrice