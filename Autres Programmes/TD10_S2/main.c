#include "fonctions.h"
int taille = 0;
int temps = 15;

int main(int argc, char **argv)
{
    
	//sommeM(11.5);
    //printf("Fibo recursif: %d\n", fiboR(14));
    //int* tab = fiboI(14);
    //affiche(tab, 15);
    

    if(argc>1)
    {
       
        Liste *tab = CreateTab (argv[1], &taille);
        //DisplayTab(tab, taille);
        //algoGlouton(tab, temps, taille);
        //DisplayTab(tab, taille);
        //laRemontada(tab);
        
        int** P = algoDyna(tab,temps,taille);
        
        for (int i = 0; i < taille-1; i++)
        {
            for (int j = 0; j < temps; j++)
            {
                printf("[%d]", P[i][j]);
            }
            printf("\n");
        }
        
    }
    //free(tab);
    
	return 0;
}
