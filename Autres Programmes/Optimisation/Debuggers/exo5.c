#include "exo5.h"

int main(int argc, char **argv)
{
    /*
    //Somme de facon simple
    
    //marche pas pour 10^6
    
    int n;
    printf("Entrez la valeur de n: ");
    scanf("%d", &n);
    printf("%d\n", SommeRec(n));
    */
    
    
    // Somme de facon terminale 
    
    //marche pas pour 10^6
    
	int accu=0, n;
    printf("Entrez la valeur de n: ");
    scanf("%d", &n);
    printf("%d\n", SommeRecterm(n, accu));
	
    return 0;
}