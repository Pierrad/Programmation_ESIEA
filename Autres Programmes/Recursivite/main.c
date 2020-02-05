#include "recursivite.h"

int main(int argc, char **argv)
{
    // Pour la puissance
	/*
    unsigned long valeur;
    short n;
    printf("Entrez un nombre: ");
    scanf("%lu", &valeur);
    printf("Entrez une valeur de puissance: ");
    scanf("%hd", &n);
    printf("%lu\n", PuissanceRec(valeur, n));
	return 0;
    */
    
    // Pour la factorielle
    /*
    int n;
    printf("Entrez la valeur de la factorielle: ");
    scanf("%d", &n);
    printf("%d\n", FactRec(n));
    return 0;
    */
    
    //Pour la division euclidienne
    
    int a,b;
    printf("Entrez le dividende: ");
    scanf("%d", &a);
    printf("Entrez le diviseur: ");
    scanf("%d", &b);
    printf("Le resultat est: %d\n", DivEucRec(a,b));
    return 0;
}
