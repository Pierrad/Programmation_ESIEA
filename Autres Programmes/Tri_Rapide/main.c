#include "fonctions.h"

int main(int argc, char **argv)
{
    printf("Entrer une valeur entre 0 et 50000\n");
    int valeur;
    scanf("%d", &valeur);
	int res = rechercheDichI(valeur);
    printf("%d\n", res);
    printf("\n\n\n");
    int res1 = rechercheDichR(valeur, 0, 50000);
    printf("%d\n", res1);
	
    int Tab[6]={4,1,5,2,6,3};
    TrisRapide(Tab,0,5);
    affiche(Tab, 6);
    return 0;
}
