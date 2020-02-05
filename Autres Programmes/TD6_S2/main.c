#include "fonctions.h"

int main(int argc, char **argv)
{
    /*
	int N=6;
    int tab[6]={2,4,1,6,5,3};
    triinsertion(tab, N);
    affiche(tab, N);
	return 0;
    */
    
    int Tab[10000];
	for(int i=0;i<10;i++){
		InitTabUniforme(Tab,10000);
		trisbulle(Tab,10000);
		
	}
	for(int i=0;i<10;i++){
		InitTabUniforme(Tab,10000);
		triselection(Tab,10000);
		
	}
	for(int i=0;i<10;i++){
		InitTabUniforme(Tab,10000);
		trisinsertion(Tab,10000);
		
	}

	
	return 0;
}
