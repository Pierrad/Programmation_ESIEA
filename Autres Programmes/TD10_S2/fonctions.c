#include "fonctions.h"

void sommeM (float somme){
    
    float M[8] = {2,1,0.5,0.2,0.1,0.05,0.02,0.01};
    int i;
    
    for(i = 0; i < 8; i++)
    {
        while(somme >= M[i])
        {
            somme = somme - M[i];
            printf("Il faut rendre: %.2f\n", M[i]);
        }
    }
}

int fiboR(int n){
    
    if(n == 0)
    {
        return n;
    }
    if(n == 1)
    {
        return n;
    }
    return fiboR(n-1) + fiboR(n-2);
}

int* fiboI (int n){
    
    int* tab = (int*) calloc (n+1, sizeof(int));
    int i;
    tab[0] = 0;
    tab[1] = 1;
    for(i = 2; i <= n; i++)
    {
        tab[i] = tab[i-1] + tab[i-2];
    }
    return tab;
}


void affiche(int* tab, int n){
    
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d  \n",tab[i]);
    }
}

Liste *CreateTab (char *path, int *taille){
    
    Liste *tab = NULL;
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
            tab = (Liste*) calloc(n, sizeof(Liste));
            for(i = 0; i < n;i++)
            {
                fscanf(fichier, "%s %d %d\n",tab[i].nom, &tab[i].poids, &tab[i].temps);
            }
    }
    (*taille) = n;
    fclose(fichier);
    return tab;
}

void DisplayTab (Liste *tab, int taille){
    
    int i;
    
    for(i = 0; i < taille-1; i++)
    {
        printf("%s  %d  %d\n", tab[i].nom, tab[i].poids, tab[i].temps);
    }
}

void algoGlouton (Liste *tab, int temps, int taille){
    
    int i;
    int p = 0;
    Lexico(tab, taille, temps);
    for(i = 0; i<6; i++)
    {
        if((tab[i].temps <= temps) && temps > 0)
        {
            p = p + tab[i].poids;
            temps = temps - tab[i].temps;
            printf("Manger aliment : %s\n", tab[i].nom);
        }
    }
    printf("Le poids total est : %d\n", p);
}

void Lexico (Liste *tab, int temps, int taille){
    
    int i,j;
    Liste tmp;
	for(i=0; i<taille-1; i++)
    {
		for(j=0;j<taille-1-i;j++)
        {
			if( (float) (tab[j].poids)/(tab[j].temps) > (float) (tab[j+1].poids)/(tab[j+1].temps) )
            {
				tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
			}
            if( (float) (tab[j].poids)/(tab[j].temps) == (float) (tab[j+1].poids)/(tab[j+1].temps) )
            {
                if(tab[j].temps <  tab[j+1].temps)
                {
                    tmp = tab[j+1];
                    tab[j+1] = tab[j];
                    tab[j] = tmp;
                    
                }
                if(tab[j+1].temps < tab[j].temps)
                {
                    tmp = tab[j];
                    tab[j] = tab[j+1];
                    tab[j+1] = tmp;
                }
			}
		}
	}
}

void laRemontada (Liste *tab){
    
    /*
    int P[7][16] = {{0,0,0,0,0,100,100,100,100,100,100,100,100,100,100,100},
                   {0,0,0,0,0,100,100,150,150,150,150,150,250,250,250,250},
                   {0,10,10,10,10,100,110,150,160,160,160,160,250,260,260,260},
                   {0,10,10,10,10,100,110,150,160,160,160,160,250,260,260,260},
                   {0,10,10,10,10,100,110,150,160,180,190,190,250,260,280,290},
                   {0,10,40,50,50,100,110,150,160,190,200,220,250,260,290,300},
                   {0,10,40,50,70,100,110,150,160,190,200,220,250,260,290,300}};
    
    int j = 15, i;
    for (i = 7; i<2; i--)
    {
        if(P[i][j] != P[i-1][j])
        {
            printf("Aliment : %s\n", tab[i].nom);
            j = j-tab[i].temps;
        }
    }
    */
}

int** algoDyna (Liste *tab, int temps, int taille){
    
    printf("temps : %d\ntaille: %d\n", temps, taille);
    int** P = (int**)calloc(taille,sizeof(int*));
    
    for(int i = 0; i<taille; i++)
    {
        P[i] = (int*) calloc(temps, sizeof(int));
    }
    
    for (int i = 0; i < taille; i++)
    {
            for (int j = 0; j < temps; j++)
            {
                P[i][j] = 0;
            }
    }
        
    
    for(int j = 0; j<temps;j++)
    {
        if(j<tab[0].temps)
        {
            P[0][j] = 0;
        }
        else
        {
            P[0][j] = tab[0].poids;
        }
    }

    for(int i = 1; i < taille; i++)
    {
        for (int j = 0; j <= temps; j++)
        {
            if(j-tab[i].temps < 0)
            {
                P[i][j] = P[i-1][j];
            }
            else
            {
                if(P[i-1][j] > (tab[i].poids + P[i-1][j-tab[i].temps]))
                {
                    P[i][j] = P[i-1][j];
                }
                if(P[i-1][j] < (tab[i].poids + P[i-1][j-tab[i].temps]))
                {
                    P[i][j] = tab[i].poids + P[i-1][j-tab[i].temps];
                } 
            }
        }
    }
    
    return P;
    
}




/*
for (int i =0; i<7; i++)
    {
        for (int j=0; j<16; j++)
        {
            printf("[%d]", P[i][j]);
        }
        printf("\n");
    }
  */  
