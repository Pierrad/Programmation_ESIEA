#include "recursivite_term.h"


int SommeRec (int n, int accu){
    
    if(n<=0)
        return accu;
        
    return SommeRec(n-1, accu+n);
}

unsigned long PuissanceRec( unsigned long valeur, short n, unsigned long accu){
    
    if (n==0)
        return accu;
        
    return PuissanceRec(valeur, (n-1), valeur*accu);
    
    
}

int DivEucRec(int a, int b){
    
    if (a<b)
        return a;
        
    return DivEucRec(a-b, b);
    
}