#include<stdlib.h>
#include<stdio.h>

void swap(int *a, int *b)
{	
	int e = 0;
	e = *a;
	*a = *b;
	*b = e;
}

int main()
{
	int a,b;	
	printf("Entrez la valeur de A et de B\n");	
	scanf("%d", &a);
	scanf("%d", &b);
	
	
	swap(&a, &b); 
	
	printf("Les nouvelles valeurs de A et B sont : %d, %d\n", a, b);
	return 0;
}

