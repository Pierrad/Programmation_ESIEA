#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float montant, rendu;
    float argent;
    montant = (float) rand()/10000000;
    printf("Montant a payer: %.2f euros\n", montant);
    scanf("%f", &argent);
    printf("Vous donnez: %.2f euros\n", argent);
    rendu = argent-montant;
    printf("Rendu : %.2f euros\n", rendu);
}
