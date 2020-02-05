#include<stdio.h>
#include<stdlib.h>

int main()
{
	int  n=0, b;
	printf("Rentrez un nombre: ");
	scanf("%d", &b);
	if (b<127)		
		printf("La valeur max de b est : 160\n");
	else
		printf("La valeur max de b est : 4372\n");
	while (b !=1)
	{
		if (b%2 == 0)
		{		
			b = b/2;
				
		}
		else 
			b = (3*b)+1;
	n = n+1;
	}
	printf("La valeur de n est : %d\n", n);
	printf("la valeur de b est : %d\n", b);
	
}

