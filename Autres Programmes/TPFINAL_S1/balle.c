#include "balle.h"
#include "vecteur.h"

Balle chargerBalle(char* chemin){
    Balle info; 
    FILE *fichier = fopen(chemin,"r"); // lecture des donnees du fichier balle.txt
        if (fichier != NULL ){
            fscanf(fichier,"masse %f\nfCoef %f\nposition %f %f\nvitesse %f %f", 
            &info.masse, &info.coeffriction, &info.position.x, &info.position.y, &info.vitesse.x, &info.vitesse.y); //Remplissage de la structure
            fclose(fichier);
        }
    return info; 
    
}

int majPosition(Balle * balle, float dt){
    
    if (balle == NULL){
        return -1; //securite
    }

    Vecteur g = creerVect(0,-9.81); // creation vecteur g
    
    Vecteur poids = multScalVect(balle->masse, g); //calcul du poids
    
    Vecteur frottements = multScalVect(-balle->coeffriction , balle->vitesse); // calcul des frottements
    
    Vecteur somme = addVect(poids, frottements); // sommes des forces (poids et frottements)
    
    Vecteur acceleration = multScalVect((float)(1/balle->masse), somme); //calcul de l'acceleration
 
    balle->vitesse = addVect(balle->vitesse, multScalVect(dt, acceleration)); // mise a jour de la vitesse de la balle
    balle->position = addVect(balle->position, multScalVect(dt, balle->vitesse)); // mise a jour de la position de la balle 
    
    return 0;
}

