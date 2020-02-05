#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int my_rand(int min, int max)
{
	srand(time(NULL));
	int entier;
	entier = (int)rand()%((max + 1 - min) + min);//ne rien mettre dans les parenthèse 'rand()' et pas oublier le '%'
	return entier;
}

int main()
{
	int min, max, entier;
	printf("Quel est la valeur de min ?\n");
	scanf("%d", &min);
	printf("Quel est la valeur de max ?\n");
	scanf("%d", &max);
	
	entier = my_rand (min, max);
	
	printf("La valeur aléatoire entre min et max est : %d\n", entier);
	return 0;
}
