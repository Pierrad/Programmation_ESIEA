#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{	
	int nombre, test;
	int tentatives = 3;
	nombre = rand()%5 + 1;	
	test = 0;
	do 
	{
		tentatives --;
		printf("A quel nombre je pense? ");
		scanf("%d", &test);
		if (test!=nombre)
			printf("Raté\n");
		if (test==nombre) { break;}		
	} while (tentatives>0);	
	
	if (test == nombre)
	{
		printf("Gagné!\n");
	}
	else 
	{	
		printf("Raté, le nombre recherche est : %d\n", nombre);
	}
}
