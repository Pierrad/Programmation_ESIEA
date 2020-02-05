#include "fonctions.h"

int rechercheDichI (int N){
    
    int min=0, max=50000, valeur=0;
    
    while(valeur!=N)
    {
        if (valeur<N)
        {
            min=valeur;
            valeur = (min+max)/2;
            printf("%d\n", valeur);
        }
        if (valeur>N)
        {
            max=valeur;
            valeur = (min+max)/2;
            printf("%d\n", valeur);
        }
        if(valeur==N)
        {
            printf("%d\n", valeur);
        }    
        
    }
    return valeur;
}

int rechercheDichR(int N, int min, int max){
    int valeur = (max+min)/2;
    printf("%d\n", valeur);
   
        if (valeur<N)
        {
            valeur = rechercheDichR(N, valeur+1, max);
        }
        if (valeur>N)
        {
            valeur = rechercheDichR(N, min, valeur-1);
        }
        if(valeur==0)
        {
            return valeur;
        }    
        
        return valeur;
    }


void Echange(int* Tab,int i,int j){
	int tmp=Tab[i];
	Tab[i]=Tab[j];
	Tab[j]=tmp;
	
}
int Partitionnement(int* Tab,int indiceMarqueur,int max){
	while (1){		
		if(Tab[max]<=Tab[indiceMarqueur])
			Echange(Tab,max,indiceMarqueur);						
														
		if(max<indiceMarqueur)
			max++;
			
		if(max>indiceMarqueur)
			max--;			
		
		if(max==indiceMarqueur)
			break;				
	}
	return indiceMarqueur;
}

void TrisRapide(int* Tab,int i,int j){
	int p;
	if(i<j){
		p=Partitionnement(Tab,i,j);
		printf("%d\n",p);
		TrisRapide(Tab,i,p-1);
		TrisRapide(Tab,p+1,j);		
	}	
}

void affiche(int* tab, int N){
    
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d  ",tab[i]);
    }
}
