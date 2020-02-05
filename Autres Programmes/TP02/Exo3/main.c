#include <stdlib.h>
#include<stdio.h>

float dilution(float degre)
{
	int i;	
	for(i=0; i <=2; i++)
	{
		degre = degre*0.75;
	}
	return degre;
}

float dilution2(float degre2)
{
	int i;	
	for(i=0; i <=3; i++)
	{
		degre2 = degre2*0.75;
	}
	return degre2;
}


int main()
{
	printf("Au debut de la soirée, le degre d'alcool est de : 20\n");
	
	float degre = 20;
	float res;
	res = dilution(degre);
	printf("Le degre a 23h30 est egal a : %f\n", res);
	
	float degre2 = 20;
	float res2;
	res2 = dilution2(degre2);
	printf("Le degre a 00h15 est egal a : %f\n", res2);
	
	return 0;
}






