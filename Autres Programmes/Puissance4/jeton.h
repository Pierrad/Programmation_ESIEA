#ifndef JETON_H
#define  JETON_H

#define NB_JETON 42

//Structure contenant les coordonnées x et y d'un vecteur
typedef struct Vecteur_decl{
    float x;
    float y;
}Vecteur;


typedef struct JetonList_decl{ // Liste contenant les informations relatives aux attracteurs

    Vecteur positionJeton[NB_JETON]; // Enregistre les positions des attracteurs
    int utiliseMoi[NB_JETON];              // Gere le nombre d'attracteurs present
        
}JetonList;

Vecteur creerVect(float x, float y);
Vecteur addVect(Vecteur v1, Vecteur v2); 
Vecteur multScalVect(float s, Vecteur v);


typedef struct Jeton_decl{
    
    float masse = 0.1;
    Vecteur position;       // En metres
    Vecteur vitesse;

}Jeton; 


int majPosition(Jeton * jeton, float dt);

#endif