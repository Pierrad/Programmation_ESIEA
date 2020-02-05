#include "vecteur.h"


typedef struct Balle_decl{
    
    float masse;            // kg
    float coeffriction;     // (sans unite)
    Vecteur position;       // en metres
    Vecteur vitesse;        // en metres / sec
    Vecteur acceleration;   // en metres / sec / sec

}Balle; 

/* Retourne une structure Balle initialisee
avec les valeurs du fichier de configuration */
Balle chargerBalle(char* chemin); 



/* Met a jour la position de la balle en appliquant le PFD
retourne -1 si balle est NULL (securite) */
int majPosition(Balle * balle, float dt);