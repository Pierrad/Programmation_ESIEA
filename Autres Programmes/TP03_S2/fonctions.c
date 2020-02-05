#include "fonctions.h"

Bar *CreateTab (char *path, int *taille){
    
    Bar *tab=NULL;
    int c, i, n=1;
    FILE *fichier = fopen(path,"r");
    if(fichier != NULL)
    {		
            while ((c = getc(fichier)) != EOF)
            {
                if (c == '\n')
                    n++;
            }
            fseek(fichier,0,SEEK_SET);
            tab = (Bar*) calloc(n, sizeof(Bar));
            for(i=0; i<n;i++)
            {
                fscanf(fichier, "%s %f %f\n",tab[i].name, &tab[i].dist, &tab[i].price);
            }
    }
    (*taille) = n;
    fclose(fichier);
    return tab;
}

void DisplayTab (Bar *tab, int taille){
    
    int i;
    
    for(i=0; i<taille; i++)
    {
        printf("%s  %f  %f\n", tab[i].name, tab[i].dist, tab[i].price);
    }
}

void Lexico (Bar *Tab, int taille){
    
    int i,j,tris;
    Bar tmp;
	for(i=0;i<taille-1;i++)
    {
		tris=1;
		for(j=0;j<taille-1-i;j++)
        {
			if(Tab[j].dist>Tab[j+1].dist)
            {
				tris=0;
				tmp=Tab[j];
				Tab[j]=Tab[j+1];
				Tab[j+1]=tmp;
			}
            if(Tab[j].dist==Tab[j+1].dist)
            {
                if(Tab[j].price>Tab[j+1].price)
                {
                    tris=0;
                    tmp=Tab[j];
                    Tab[j]=Tab[j+1];
                    Tab[j+1]=tmp;
                }
			}
		}
	}
}

void BubbleSort (Bar *tab, int taille, int key){
    
    int i,j,tris;
    Bar tmp;
    if (key==0)
    {
        for(i=0;i<taille-1;i++)
        {
            tris=1;
            for(j=0;j<taille-1-i;j++)
            {
                if(tab[j].dist>tab[j+1].dist)
                {
                    tris=0;
                    tmp=tab[j];
                    tab[j]=tab[j+1];
                    tab[j+1]=tmp;
                }
            }
        }
    }
    if(key==1)
    {
        for(i=0;i<taille-1;i++)
        {
            tris=1;
            for(j=0;j<taille-1-i;j++)
            {
                if(tab[j].price>tab[j+1].price)
                {
                    tris=0;
                    tmp=tab[j];
                    tab[j]=tab[j+1];
                    tab[j+1]=tmp;
                }
            }
        }
    }
}

void SelectionSort (Bar *tab, int taille, int key){
    
    int i=0,j=0,index=0, tris;
    Bar tmp, min;
    if(key==0)
    {
        for(i=0;i<taille;i++)
        {
            tris=1;
            min=tab[i];
            index=i;
            for(j=i;j<taille;j++)
            {
                if(tab[j].dist<min.dist)
                {	
                    tris=0;
                    min=tab[j];
                    index=j;
                }						
            }
            tmp=min;
            tab[index]=tab[i];
            tab[i]=tmp;	
        }	
    }
    if(key==1)
    {
        for(i=0;i<taille;i++)
        {
            tris=1;
            min=tab[i];
            index=i;
            for(j=i;j<taille;j++)
            {
                if(tab[j].price<min.price)
                {	
                    tris=0;
                    min=tab[j];
                    index=j;
                }						
            }
            tmp=min;
            tab[index]=tab[i];
            tab[i]=tmp;	
        }	
    }
}

void InsertionSort (Bar *tab, int taille, int key){
    
	int i,j;
    Bar marqueur;
    if(key==0)
    {
        for(i=1;i<taille;i++)
        {
            marqueur=tab[i];
            for(j=i;j>0 && tab[j-1].dist>marqueur.dist;j--)
            {	
                tab[j] = tab[j-1];
            }
            tab[j] = marqueur;
        }
    }
    if(key==1)
    {
        for(i=1;i<taille;i++)
        {
            marqueur=tab[i];
            for(j=i;j>0 && tab[j-1].price>marqueur.price;j--)
            {	
                tab[j] = tab[j-1];
            }
            tab[j] = marqueur;
        }
    }
}


void SmartSort (Bar *tab, int taille){
    
    
    
    
    
}