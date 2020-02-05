#include "recursivite.h"


unsigned long PuissanceRec( unsigned long valeur, short n ){
    
    if (n==0)
        return 1;
        
    return valeur* PuissanceRec(valeur, (n-1));
}

int FactRec (int N ){
    // Condition d'arrêt
    if  (N<=1) 
        return 1;
    // Retour du résultat
    return N * FactRec(N-1);
}

int DivEucRec(int a, int b){
    
    if (a<b)
        return a;
        
    return DivEucRec(a-b, b);
}