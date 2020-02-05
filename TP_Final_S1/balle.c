#include "balle.h"
#include "vecteur.c"

Balle chargerBalle(char* chemin){
    Balle info; 
    FILE *fichier = fopen(chemin,"r");
        if (fichier != NULL ){
            fscanf(fichier,"masse %f\nfCoef %f\nposition %f %f\nvitesse %f %f", 
            &info.masse, &info.coeffriction, &info.position.x, &info.position.y, &info.vitesse.x, &info.vitesse.y);
            fclose(fichier);
        }
    return info; 
    
}

int majPosition(Balle * balle, float dt){
    
    if (balle == NULL){
        return -1;
    }

    Vecteur g = creerVect(0,-9.81);
    float masse = balle.masse;
    Vecteur poids = multScalVect(masse, g);
    
    float alpha = balle.coeffriction;
    Vecteur vitesse = creerVect(balle.vitesse.x, balle.vitesse.y);
    Vecteur frottements = multScalVect(alpha, vitesse);
    
}