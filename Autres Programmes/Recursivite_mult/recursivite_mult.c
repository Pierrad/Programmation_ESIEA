#include "recursivite_mult.h"


int CaseTriangle(int NumLig, int NumCol){
    
    if(NumCol == 1)
        return 1;
    if(NumCol == NumLig)
        return 1;
        
    return CaseTriangle(NumLig-1, NumCol) + CaseTriangle(NumLig-1, NumCol-1); 

}


void AfficheTrianglePascal(int NbLignes){
    
    int i,j;
    for (i=1; i<=NbLignes; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", CaseTriangle(i, j));
        }
        printf("\n");
    }
        
    }
    
    
