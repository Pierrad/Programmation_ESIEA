#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    int diametre1, diametre3, hauteur, longueur, largeur;
    double surfaceC, surfaceR, surfaceCY;
    float R = 3.14;
    printf("Rentrez le diametre du cercle : ");
        scanf("%d", &diametre1);

        surfaceC = (R/4) * (diametre1*diametre1);

    printf("La surface de votre cercle = %f\n", surfaceC);


    printf("Rentrez la longueur puis la largeur de votre rectangle : ");
        scanf("%d\n", &longueur);
        scanf("%d", &largeur);

        surfaceR = longueur * largeur;

    printf("La surface de votre rectangle = %f\n", surfaceR);


    printf("Rentrez la hauteur pour le cylindre : ");
        scanf("%d", &hauteur);
    printf("Rentrez le diametre pour le cylindre : ");
        scanf("%d", &diametre3);

        surfaceCY = R*diametre3 * (hauteur * (diametre3/2));


    printf("La surface de votre cylindre = %f\n", surfaceCY);
 }
