#include <stdlib.h>
#include <stdio.h>
int height;
int width;
char **grid; 
char **tab;

int InitGame (void)
{
	printf("***************** Menu *****************\n");
	printf("\n");	
	printf("Quelle est la taille de votre damier ?\n");
	printf("\n");
	printf("Entrez la largeur: ");
	scanf("%d", &width);
	printf("Entrez la hauteur: ");
	scanf("%d", &height);
	

	
	printf("\n\n");
	printf("Quelle motif voulez-vous ?\n");
	printf("\n");
	printf("Vous avez le choix entre les motifs suivants:\n1- Ligne de 3 elements\n2- Un U\n3- Un Vaisseau\n4- Aleatoire\n5- Aleatoire symetrie verticale\n6- Aleatoire symetrie horizontale\n");
	printf("Rentrez le numero du motif choisi: ");
	int motif;
	scanf("%d", &motif);
		if (motif>6 || motif < 0)
		{
			printf("Veuillez ressaisir un numero entre 1 et 6: ");
			scanf("%d", &motif);
		}	
	return motif;
}

void DrawGame ( char **grid )
{
		int i = 0;
		int j = 0;
		for(int p=0; p<height; p++)
			{		
				while (i<(width+3))
				{
					printf("-");
					i++;
					if (i==(width+3))
						printf("\n");
				}
				printf("|");
				for (int q = 0; q<width; q++)
				{
					printf("%c", grid[q][p]);
						
				}

				printf("%c|\n", *grid[p]);
				
			}	
		while (j<(width+3))
				{
					printf("-");
					j++;
					if (j==(width+3))
						printf("\n");
				}

}


int AllocGame (int motif)
{
	grid = (char**) malloc(width*sizeof(char*));
	for(int i=0; i<width; i++)
		grid[i] = (char*) malloc(height*sizeof(char));
	if (motif == 1)
	{
				
		for (int o=0; o<width; o++)
		{
			
			for ( int j=0; j<height; j++)
				grid[o][j] = ' ';
		}
		grid[(width/2)-1][height/2] = '#';
		grid[width/2][height/2] = '#';
		grid[(width/2)+1][height/2] = '#';
		DrawGame(grid);
		
		
	}	
	return 0;
}


int IsInRange (int ligne, int colonne)
{
	if ((ligne<width) && (colonne<height))
		return 1;
	else
		return 0;

}


int NbCasesAdj (int height, int width)
{
	tab = (char**) malloc(width*sizeof(char*));
	for(int i=0; i<width; i++)
	{
		tab[i] = (char*) malloc(height*sizeof(char));
	}
	for (int o=0; o<width; o++)
		{
			for ( int j=0; j<height; j++)
				tab[o][j] = ' ';
		}
		int compteur = 0;
		for(int p=0; p<height; p++)
			{		
				for (int q=0; q<width; q++)
				{
						
							for(int h=-1;h<2;h++)
							{
								if(((p == height-1) && (h==1))){
									h++;printf("ok2\n");
									continue;
								}
							for(int j=-1;j<2;j++)
							{
									if(p==0 && h==-1){
										h++;printf("ok3\n");	
									}
									if((q==0 && j==-1)){    
										j++;printf("ok4\n");
									}
									if(((q==width-1) && (j==1))){
										j++;printf("ok5\n");
										continue;
									} 	
						
									if (grid[p+h][q+j] == '#') 
									{
										printf("ok1\n");
										compteur++;
										printf("%d\n", compteur);
										if (h==0 && j==0)
										{
											compteur--;
										}
									}
							
								if (((compteur==2) || (compteur==3)) && (grid[p][q]=='#'))
								{
									tab[p][q] = '#';printf("ok6\n");
								}							
								if ((grid[p][q]==' ') && (compteur==3))
								{					
									tab[p][q] = '#'; printf("ok7\n");
									
								}
								
							}
							}
					
					
				}
				
			}
DrawGame(tab);			
return 0;
}



int main()
{
	system("clear");
	int motif;
	motif = InitGame();
	AllocGame (motif);
	int ligne, colonne, vrai;
	scanf("%d", &ligne);
	scanf("%d", &colonne);
	vrai = IsInRange(ligne, colonne);
	printf("%d\n", vrai);
	NbCasesAdj(height, width);
	
	return 0;
}
