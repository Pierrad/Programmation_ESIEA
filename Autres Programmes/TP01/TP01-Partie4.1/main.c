#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{	
	srand(time(NULL));	
	int nombre, test;
	nombre = (rand()%40000) + 10000;
	time_t start = time (NULL);	
	test = 0;
	printf("A quel nombre je pense? ");
	while((int) (time (NULL) - start)<45)	
	{
		
		scanf("%d", &test);
		if (test!=nombre)
		{
			if(test<nombre)printf("C'est plus!\n");
			if(test>nombre)printf("C'est moins!\n");
		}

		if (test==nombre) { break;}		
	} 	
	
	if (test == nombre)
	{
		printf("Gagné!\n");
	}
	else 
	{	
		printf("Raté, le temps est écoulé\n");
	}
}
