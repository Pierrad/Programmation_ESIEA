#include <stdlib.h>
#include <stdio.h>

void AfficheMatrice (int mat[][6], int nbLignes)
{
	int somme = 0;
	for(int i=0; i<nbLignes; i++)
	{		
		for (int j = 0; j < 6; j++)
		{
			printf("%d", mat[i][j]);
			somme = somme + mat[i][j];
			mat[i][6] = somme;
		}	
		printf("%d\n", *mat[i]);
		somme = somme + *mat[i];	
	}	
	float moyenne = 0;
	moyenne = (float)somme/(6*6);
	printf("la moyenne est : %.2f\n", moyenne);
    mat[7][1] = moyenne;
    for(int i=0; i<7; i++)
	{		
		for (int j = 0; j < 6; j++)
		{
			printf("%d", mat[i][j]);
		}	
		printf("%d\n", *mat[i]);
	}	
}

int main () {
	int mat[7][6] = {{1,2,3},{4,5,6},{7,8,9},{1,3,5}};
	AfficheMatrice(mat, 7);
}
