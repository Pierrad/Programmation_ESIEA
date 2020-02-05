#include <stdlib.h>
#include <stdio.h>

typedef struct Polynome_s{
    
    int deg;           // degre du coefficient
    float *coeffs;  // tableau des coefficients
    
}Polynome;


int ChargerPolynome (char *path, Polynome *p);

void LibererPolynome(Polynome *p);

void AfficherPolynome(Polynome *p);

int EgalitePolynome(Polynome *p, Polynome *q);

int AddPolynome (Polynome P, Polynome Q, Polynome *Res);

int MultPolynome (Polynome P, Polynome Q, Polynome *Res);
