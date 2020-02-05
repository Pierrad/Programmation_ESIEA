#include <stdlib.h>
#include <stdio.h>

int SommeRec (int n){
    
    if(n<=0)
        return 0;
        
    return n + SommeRec(n-1);
}


int SommeRecterm(int n, int accu){
    
    if(n<=0)
        return accu;
        
    return SommeRecterm(n-1, accu+n);
}