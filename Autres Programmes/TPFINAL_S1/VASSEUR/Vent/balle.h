#include "vecteur.h"


typedef struct Balle_decl{
    
    float masse;            // Kg
    float coeffriction;     // (sans unite)
    Vecteur position;       // En metres
    Vecteur vitesse;        // En metres / sec
    Vecteur acceleration;   // En metres / sec / sec
    Vecteur vent;           // En metres / sec

}Balle; 

/* Retourne une structure Balle initialisee
avec les valeurs du fichier de configuration */
Balle chargerBalle(char* chemin); 



/* Met a jour la position de la balle en appliquant le PFD
retourne -1 si balle est NULL (securite) */
int majPosition(Balle * balle, float dt);