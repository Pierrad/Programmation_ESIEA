#include "fonctions.h"
int taille=0;
int main(int argc, char **argv)
{
    if(argc>1){
        printf("0 pour distance et 1 pour prix\n");
        Bar *tab = CreateTab (argv[1], &taille);
        Bar *copy = malloc(taille*sizeof(Bar));
        DisplayTab(tab, taille);
        printf("\n");
        memcpy(copy, tab, taille*sizeof(Bar));
        //Lexico(copy, taille);
        BubbleSort(copy, taille, 1); //stable
        //SelectionSort(copy, taille, 1); //pas stable
        //InsertionSort(copy,taille, 0); //stable
        DisplayTab(copy, taille);
        free(tab);
        free(copy);
    }
	return 0;
}
