#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include <unistd.h>

int TirageAleatoire(int N)
{
	srand(time(NULL));
	int entier;
	entier = (int)rand()%((N + 1 - 0) + 0); 
	return entier;
}

int EstInscrit (int res, float x, float y)
{
	int un =1;
	int zero = 0;	
	float d;
	d = sqrt(((x - res/2)*(x - res/2)) + ((y - res/2)*(y-res/2)));
	if (d <= (res/2))
		return un;
	else
		return zero;
}


int main()
{
	int N = 100, res, fois;
	
	float x, y;
	printf("Rentrez les valeurs de x et y pour le carré: \n");
	scanf("%f", &x);
	scanf("%f", &y);
	
	printf("Combien de fois voulez vous reiterer le programme : \n");
	scanf("%d", &fois);
	
	int i, inscrits = 0, tires = 0;
	
	for (i=0; i<fois; i++)
	{
		res = TirageAleatoire(N);
		printf("%d\n", res);	
		
		sleep (1);		
	
		float res2;	
		res2 = EstInscrit(res, x, y);
		if (res2 == 1)
			inscrits = inscrits + 1;
		tires = tires + 1;
	}	
	float ratio;
	ratio = (inscrits/tires)*4;
	printf("L'approximation de Pi est : %f\n", ratio);
	
}
