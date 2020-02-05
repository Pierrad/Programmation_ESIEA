#include "balle.h"
#include "vecteur.h"
#include "math.h"
#define PI 3.14159265
Balle chargerBalle(char* chemin)
{
    Balle info; 
    FILE *fichier = fopen(chemin,"r"); // Lecture des donnees du fichier balle.txt
    if (fichier != NULL ) // On verifie que le pointeur sur fichier est valide
    {
        fscanf(fichier,"masse %f\nfCoef %f\nposition %f %f\nvitesse %f %f", 
        &info.masse, &info.coeffriction, &info.position.x, &info.position.y, &info.vitesse.x, &info.vitesse.y); // Remplissage de la structure
        fclose(fichier);
    }
    else
        printf("Impossible d'ouvrir le fichier");
    return info; 
}

int majPosition(Balle * balle, float dt) // Met a jour la position de la balle avec le PFD
{
    
    if (balle == NULL)
    {
        return -1; // Securite
    }

    Vecteur g = creerVect(0,-9.81); // Creation vecteur g
    
    
    
    Vecteur poids = multScalVect(balle->masse, g); // Calcul du poids
    
    Vecteur frottements = multScalVect(-balle->coeffriction , balle->vitesse); // Calcul des forces de frottements
    
    Vecteur somme = addVect(poids, frottements); // Sommes des forces (poids et frottements)
    
    Vecteur acceleration = multScalVect((float)(1/balle->masse), somme); // Calcul de l'acceleration
 
    balle->vitesse = addVect(balle->vitesse, multScalVect(dt, acceleration)); // Mise a jour de la vitesse de la balle
    balle->position = addVect(balle->position, multScalVect(dt, balle->vitesse)); // Mise a jour de la position de la balle 
    
    /*
        Avec le fichier csv, en x, on obtient la distance maximale qui est la derniere valeur de notre tableau
    */
    
    float val = 180 / PI; // a multiplier avec le arccos et le arcsin
    
    // calcul de teta en x
    float calcul1 = (balle->position.x / balle->vitesse.x);
    
    float anglex = acos(calcul1) * val; 
    
    // calcul de teta en y 
    float calcul2 = (balle->position.y / balle->vitesse.y);
    
    float angley = asin(calcul2) * val;
    
    printf("%f\n", anglex); 
    printf("*********************\n");
    printf("%f\n", angley); 
    
    return 0;
}

