#include "matrice.h"


Matrice *ChargerMatrice (char *path){
	Matrice *m;
	int i,j,hauteur,largeur;
	
	FILE *fichier = fopen(path,"r");
	if(fichier != NULL){ // On vérifie que le fichier ouvert est valide
		
		fscanf(fichier,"%d*%d\n",&hauteur,&largeur); // On récupère la dimension n*p de la matrice : respectivement width et height
		
		assert((m = AllocMatrice(hauteur,largeur)));
				
		for(i=0;i<m->height;i++){			
			for (j=0;j<m->width-1;j++)	
				fscanf(fichier,"[%lf]",&m->M[i][j]);
				
			fscanf(fichier,"[%lf]\n",&m->M[i][m->width-1]); // Permet de gérer le retour à la ligne pour la nouvelle ligne de la matrice							
		}			
		fclose(fichier);
		return m;						
	}
	else{		
		printf("Le fichier n'a pas pu être ouvert\n");
		return NULL;
	}	
}

Matrice *AllocMatrice(int height, int width){ // Ouvre un fichier.txt afin de remplir la structure Matrice	
		int i;
		Matrice *m=malloc(sizeof(*m));
		m->width=width;
		m->height=height;
		m->M = (double**) calloc(m->height,sizeof(double*)); // On alloue dynamiquement le tableau à doubles entrées en fonction de n et p
		
		for(i=0;i<m->height;i++)
			m->M[i] = (double*) calloc(m->width,sizeof(double));
			
		return m;
}

int AfficherMatrice(Matrice *m){
	int i,j;
	
	for(i=0;i<m->height;i++){
			printf("%d ",i);
			for (j=0;j<m->width;j++)		
				printf("[%.0f]",m->M[i][j]);
				
			printf("\n");						
	}	
	printf("\n");
	return 1;
	
}

int EcrireMatrice (char*path, Matrice *m){
	int i,j;
	
	FILE *fichier = fopen(path,"w");
	fprintf(fichier,"%d*%d\n",m->height,m->width);
	if(fichier != NULL){
	
		for(i=0;i<m->height;i++){			
			for (j=0;j<m->width-1;j++)	
				fprintf(fichier,"[%.1lf]",m->M[i][j]);
				
			fprintf(fichier,"[%.1lf]\n",m->M[i][m->width-1]); // Permet de gérer le retour à la ligne pour la nouvelle ligne de la matrice							
		}			
		fclose(fichier);
		return 1;
	}
	else{
		printf("Probleme dans l ecriture");
		return 0;
	}
	
	
	
}

void EchelonnerMatrice(Matrice *m){
	int c,i,j,k=0,r=-1;
	double stock;	
	
	for(j=0;j<m->height;j++){
		
		if(r<m->width-1){
		
			for(i=r+1;i<=m->width;i++){ // Recherche le maximum de la colonne pour i=r+1 jusqu'a la fin de la ligne
				stock=m->M[i][j];
				
				if(m->M[i][j]>stock)
					k=i;			
			}
			if(m->M[k][j]!=0){			
				r++;						
				
				for(c=0;c<m->height;c++){
					m->M[k][c]/=m->M[k][j]; // Divise la ligne du pivot par le pivot				
					
					stock=m->M[r][c]; // Echange la ligne du pivot avec la ligne r
					m->M[r][c]=m->M[k][c];
					m->M[k][c]=stock;						
				}
				for(i=0;i<m->width;i++){ // Si la ligne i n'est pas la ligne du pivot, alors on lui soustraire la ligne r multipliée				
					if(i!=r){   		 // par le coefficient [i][j] de la matrice
						stock=m->M[i][j];
						for(c=0;c<m->height;c++)						
							m->M[i][c]-=m->M[r][c]*stock;						
					}
				}			
			}
			
		
		}											
	}			
}


double Trace (Matrice *m){
    
    int i, j;
    double somme = 0;
    for(i = 0; i<m->height; i++)
    {
        for(j=0; j<m->width; j++)
        {
            if (i==j)
            {
                somme+=m->M[i][j];
            }
            
        }
        
    }
    return somme;
}

Matrice *Addition (Matrice *m, Matrice *n){
    
    Matrice *p = AllocMatrice(m->height,m->width);
    int i, j;
    for(i = 0; i<m->height; i++)
    {
        for(j=0; j<m->width; j++)
        {
            p->M[i][j]=m->M[i][j] + n->M[i][j];
        }
    }
    return p;
    
}

Matrice *Soustraction (Matrice *m, Matrice *n){
    
    Matrice *p = AllocMatrice(m->height,m->width);
    int i, j;
    for(i = 0; i<m->height; i++)
    {
        for(j=0; j<m->width; j++)
        {
            p->M[i][j]=m->M[i][j] - n->M[i][j];
        }
    }
    return p;
    
}

Matrice *ProduitExterne (Matrice *m, double s){
    
    Matrice *p = AllocMatrice(m->height,m->width);
    int i, j;
    for(i = 0; i<m->height; i++)
    {
        for(j=0; j<m->width; j++)
        {
            p->M[i][j]=m->M[i][j]*s;
        }
    }
    return p;
}

Matrice *ProduitInterne (Matrice *m, Matrice *n){
    
    Matrice *p=AllocMatrice(m->width, n->height);
    int k,i,j;
        for(i=0;i<m->height;i++)
        {
            for(j=0; j<n->width;j++)
            {
                p->M[i][j]=0;
                for(k=0; k<m->width;k++)
                {
                    p->M[i][j]+=m->M[i][k]*n->M[k][j];
                }
            }            
        }
    
    return p;
    
    
}

Matrice *Puissance (Matrice m, int n){
    
    Matrice *p=&m;
    int i;
    for(i=0;i<n;i++)
    {
        p=ProduitInterne(p, &n);
    }
    return p;
}

void LibererMatrice(Matrice *m){
	
	free(m->M);	
    free(m);
}
