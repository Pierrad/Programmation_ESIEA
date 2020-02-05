#include "balle.h"
#include "vecteur.h"

Balle chargerBalle(char* chemin)
{
    
    Balle info; 
    FILE *fichier = fopen(chemin,"r"); // Lecture des donnees du fichier balle.txt
    if (fichier != NULL ) // On verifie que l'on puisse bien lire le fichier
    { 
            fscanf(fichier,"masse %f\nfCoef %f\nposition %f %f\nvitesse %f %f", 
            &info.masse, &info.coeffriction, &info.position.x, &info.position.y, &info.vitesse.x, &info.vitesse.y); // Remplissage de la structure
            fclose(fichier);
    }
    else
        printf("Impossible d'ouvrir le fichier");
        
    info.ballePrecedente=NULL; // On initialise la balle precedente a nulle
    info.balleSuivante=NULL; // On initialise la balle suivante a nulle
    return info; 
    
}

int majPosition(Balle * balle, float dt)
{
    
    if (balle == NULL)
    {
        return -1; //securite
    }
    
    float k = 200, l_p=0, l_s=0, lo = 0.02; // Coefficient estimes
    
    Vecteur g = creerVect(0,-9.81); // Creation vecteur g
    
    Vecteur poids = multScalVect(balle->masse, g); // Calcul du poids
    
    Vecteur frottements = multScalVect(-balle->coeffriction , balle->vitesse); // Calcul des forces de frottements
    
    Vecteur rappel_p = creerVect(0,0); // On initialise les forces de rappel a 0
    Vecteur rappel_s = creerVect(0,0);
    
    if (balle->ballePrecedente!=NULL) // Si il existe une balle precedente, on calcule la force de rappel entre la balle precedente et la balle actuelle
    {
        Vecteur distance_p = subVect(balle->position, balle->ballePrecedente->position);
        l_p = normVect(distance_p);
        rappel_p = multScalVect(-k*(l_p-lo), normaliseVect(distance_p)); // Application de la formule de la force
    }
    
    if (balle->balleSuivante!=NULL) // Si il existe une balle precedente, on calcule la force de rappel entre la balle actuelle et la suivante
    {
        Vecteur distance_s = subVect(balle->position, balle->balleSuivante->position );
        l_s = normVect(distance_s);
        rappel_s = multScalVect(-k*(l_s-lo), normaliseVect(distance_s)); // Application de la formule de la force
    }
    
    
    Vecteur somme = addVect(addVect(poids, frottements),addVect(rappel_p, rappel_s)); // Sommes des forces 
    
    Vecteur acceleration = multScalVect((float)(1/balle->masse), somme); // Calcul de l'acceleration
 
    balle->vitesse = addVect(balle->vitesse, multScalVect(dt, acceleration)); // Mise a jour de la vitesse de la balle
    balle->position = addVect(balle->position, multScalVect(dt, balle->vitesse)); // Mise a jour de la position de la balle 
    
    return 0;
}

