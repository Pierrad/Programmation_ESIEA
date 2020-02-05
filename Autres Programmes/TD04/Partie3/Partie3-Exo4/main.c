#include<stdlib.h>
#include<stdio.h>

int maximum (int a, int b)
{	
	if (a>b)
	{		
		return a;
	}
	else
		return b;
	return 0;	
}


int minimum3 (int a, int b, int c)
{
	if (a>b && b>c && a>c)
	{	
		return c;
	}
	if (b>a && c>a)
	{
		return a;
	}
	if (a>b && c>b)
	{
		return b;
	}
	return 0;
}



int main()
{
	int val1, val2, val3, val4, val5;
	printf("La valeur 1 est :");
	scanf ("%d", &val1);
	printf("La valeur 2 est :");
	scanf ("%d", &val2);
	printf("La valeur 3 est :");
	scanf("%d", &val4);
	
	val3 = maximum(val1, val2);
	printf("La valeur maximum est donc : %d\n", val3);
	if (val3>val1)
		printf("La plus grande valeur est %d et la plus petite est %d\n", val3, val1);
	else
		printf("La plus grande valeur est %d et la plus petite est %d\n", val1, val3);
	if (val3 == val1)
		printf("La plus grande valeur est %d et la plus petite est %d\n", val3, val2);
	

	val5 = minimum3(val1, val2, val4);
	printf("La plus petite valeur est : %d\n", val5);

	return 0;
}
