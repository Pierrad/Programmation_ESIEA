#include<stdlib.h>
#include<stdio.h>

float calcul(float a, float c, float p ) 
{
	float racine = c;
	do 
	{	
		racine = ( (0.5) *(racine+(a/racine)));
		printf("%f\n", racine);
	}while ((racine - ( (0.5) * (racine+(a/racine)))) > p);
	return racine;
}


int main()
{
	float res;	
	float a;
	printf("Rentrez la valeur de A : \n");
	scanf("%f", &a);
	float c = 100; 
	
	float p; 
	printf("Rentrez la valeur de precision : \n");
	scanf("%f", &p);

	res = calcul(a, c, p);
	printf("La valeur de la racine de A est : %.5f\n", res);

}
