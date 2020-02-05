#include "recursivite_term.h"

int main(int argc, char **argv)
{
    
    // Somme de facon terminale 
    /*
	int accu=0, n;
    printf("Entrez la valeur de n: ");
    scanf("%d", &n);
    printf("%d\n", SommeRec(n, accu));
	*/
    
    
    // Puissance de facon terminale 
    /*
    int accu=1, n, valeur;
    printf("Entrez le nombre a mettre a la puissance: ");
    scanf("%d", &valeur);
    printf("Entrez la valeur de la puissance n: ");
    scanf("%d", &n);
    printf("%ld\n", PuissanceRec( valeur, n, accu));
    */
    
    // Division euclidienne dint accu=1, n, valeur;
    int  a, b;
    printf("Entrez le dividende: ");
    scanf("%d", &a);
    printf("Entrez le diviseur: ");
    scanf("%d", &b);
    printf("%d\n", DivEucRec( a, b));
    
    return 0;
}
