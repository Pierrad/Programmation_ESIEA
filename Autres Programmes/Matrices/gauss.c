#include "gauss.h"


int RechercherMax(Matrice *m,int r,int colonne){
	int i,k=r+1;
	double stock=m->M[r+1][colonne];
	
	for(i=r+1;i<m->height;i++){		
		if(m->M[i][colonne]>stock)
			k=i;		
	}
	return k;	
}



int Dilatation(Matrice *mat,int Li,double lambda){
	int j;
	for(j=0;j<mat->width;j++){
		
		mat->M[Li][j]/=lambda; //lambda = 1/pivot
	}
	return 1;	
}

int Transposition(Matrice *mat,int Li,int Lj){
	int j;
	double stock;
	for(j=0;j<mat->width;j++){
		
		stock=mat->M[Li][j];
		mat->M[Li][j]=mat->M[Lj][j];
		mat->M[Lj][j]=stock;
		
	}
	return 1;	
}

int Transvection(Matrice*mat,int Li, int Lj, double lambda){	
	int j;
	for(j=0;j<mat->width;j++)
		mat->M[Li][j]-=mat->M[Lj][j]*lambda;
	return 1;		
}

void EchelonnerMatrice(Matrice *m){
	int i,j,k,r=-1;
	for(j=0;j<m->width;j++){
		
		if((r==m->height-1)||(r==m->width-1))
			return;		
		k=RechercherMax(m,r,j);	
		
		if(m->M[k][j]!=0){			
			r++;
			
			assert(Dilatation(m,k,m->M[k][j]));					
			assert(Transposition(m,k,r));
						
			for(i=0;i<m->height;i++){				
				if(i!=r)					
					assert(Transvection(m,i,r,m->M[i][j]));												
			}			
		}				
	}
}

void clean_stdin( void )
{
    int c;
    do{
    c = getchar();
    }while (c != '\n' && c != EOF);

}

void PivotGaussManuel (Matrice *systeme)
{
    int suite = 1, Li, Lj;
    double lambda;
    char choix;
    while (suite == 1){
        AfficherMatrice(systeme);
        printf("Transposer : T\nDilater : D\nTransvection U\nQue faire ? ");
        clean_stdin();
        scanf("%c", &choix);
        clean_stdin();
        switch(choix)
        {
            case 'T' :
                    printf("Ligne a transposer ?\n");
                    scanf("%d", &Li);
                    printf("Avec quelle ligne ?\n");
                    scanf("%d", &Lj);
                    Transposition(systeme, Li-1, Lj-1);
                    AfficherMatrice(systeme);
                    printf("Continuer ?\nOui: 1\nNon: 0\n");
                    scanf("%d", &suite);
            break;
            
            case 'D' : 
                    printf("Dilater quelle ligne: \n");
                    scanf("%d", &Li);
                    printf("Dilater par quel reel: ");
                    scanf("%lf", &lambda);
                    Dilatation(systeme, Li-1, lambda);
                    AfficherMatrice(systeme);
                    printf("Continuer ?\nOui: 1\nNon: 0\n");
                    scanf("%d", &suite);
                    clean_stdin();
            break;
            
            case 'U' :
                    printf("Transvecter quelle ligne: \n"); 
                    scanf("%d", &Li);
                    printf("Transvecter avec quelle ligne: \n");
                    scanf("%d", &Lj);
                    printf("Ajouter a la ligne %d combien de fois la ligne %d ?", Li, Lj);
                    scanf("%lf", &lambda);
                    Transvection(systeme,Li-1,Lj-1,(-lambda));
                    AfficherMatrice(systeme);
                    printf("Continuer ?\nOui: 1\nNon: 0\n");
                    scanf("%d", &suite);
                    clean_stdin();
            
            break;
            
            
        }
        
        
        
        
        printf("Continuer les operations ?\nOui : 1\nNon : 0\n");
        scanf("%d", &suite);
    }
    
}