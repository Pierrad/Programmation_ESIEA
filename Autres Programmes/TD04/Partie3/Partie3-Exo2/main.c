#include<stdlib.h>
#include<stdio.h>

int addition(int c, int d)
{
	int res;	
	res = c + d;
	return res;
}

int main()
{
	int a,b, res;
	printf("Rentrez la valeur de A : \n");
	scanf("%d", &a);
	printf("Rentrez la valeur de B : \n");
	scanf("%d", &b);
	
	res = addition (a ,b);

	printf("Le resultat de l'addition est : %d\n", res);
	return 0;
}



