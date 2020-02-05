#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int a=0, i;
	int nombre;
	while (a==0)
	{
		for(i=0; i<=20; i++)
		{
			nombre = rand();
			if(nombre%2==0)
				printf(" ");
			else
			{	
				printf("*");				
			}
		}
	
	}
	printf("\n");
}
