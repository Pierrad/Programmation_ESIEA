#include "fonctions.h"
int comparaisons=0, echanges=0;



void trisbulle(int* Tab,int N){
	int i,j,tmp,tris, comparaisons=0, echanges=0;
	
	for(i=0;i<N-1;i++)
    {
		tris=1;
		comparaisons++;
		for(j=0;j<N-1-i;j++)
        {
			comparaisons++;
			if(Tab[j]>Tab[j+1])
            {
				comparaisons++;
				tris=0;
				tmp=Tab[j];
				Tab[j]=Tab[j+1];
				Tab[j+1]=tmp;
				echanges++;
			}				
		}
		if(tris)
        {
			printf("Trisbulle : %d comparaisons %d echanges\n",comparaisons,echanges);
			return;	
		}	
	}
}
void triselection(int* Tab,int N){
	
	int i=0,j=0,min,index=0, tmp=0, tris, comparaisons=0, echanges=0;
	for(i=0;i<N;i++)
    {
		comparaisons++;
		tris=1;
		min=Tab[i];
		index=i;
		for(j=i;j<N;j++){
			comparaisons++;
			if(Tab[j]<min){	
				comparaisons++;
				tris=0;
				min=Tab[j];
				index=j;
			}						
		}
		if(tris)
        {
			printf("Triselection : %d comparaisons %d echanges\n", comparaisons, echanges);
			return;
		}
		tmp=min;
		Tab[index]=Tab[i];
		Tab[i]=tmp;	
		echanges++;
	}	
}

void triinsertion(int* Tab,int N){
	
	int i,j,marqueur;
    //int comparaisons=0, echanges=0;
	for(i=1;i<N;i++)
    {
		//comparaisons++;
		marqueur=Tab[i];
		for(j=i;j>0 && Tab[j-1]>marqueur;j--)
        {	
			//comparaisons+=2;
			Tab[j] = Tab[j-1];
		}
        Tab[j] = marqueur;
		//echanges++;
	}
	//printf("Trisinsertion : %d comparaisons %d echanges\n",comparaisons,echanges);
}

void affiche(int* tab, int N){
    
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d  ",tab[i]);
    }
}


void shuffle(int* Tab,int N){
	int j;
	for(int i=N-1;i>0;i--){
       j =rand() % (i + 1 - 0) + 0;
       Echange(Tab,j,i);
	   
	}
}

void InitTabPresqueTrie(int* Tab,int N,int P){
	int k,l;
	for(int i=0;i<N;i++)
		Tab[i]=i;
	affiche(Tab,N);	
	for(int j=0;j<P;j++){
		k=rand()%(N);	
		l=rand()%(N);
		Echange(Tab,k,l);
		affiche(Tab,N);
	}
	
}

void InitTabUniforme(int* Tab,int N){
	
	for(int i=0;i<N;i++)
		Tab[i]=i+1;
	
	shuffle(Tab,N);
}
void InitTabRepetition(int* Tab,int N,int R){
	
	for(int i=0;i<N;i++)
		Tab[i]=rand()%(R);	
}

void Echange(int* Tab,int i,int j){
	int tmp=Tab[i];
	Tab[i]=Tab[j];
	Tab[j]=tmp;
	
}