#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int mult_addi(int a, int b, int c)
{
	int res;
	res = a*(b+c);
	return res;
}

int multiplication(int a, int b)
{
	int res;
	res = a*b;
	return res; 
}

int multiplication2(int a, int b, int c)
{
	int res;
	res = a*b*c;
	return res;
}

int puissance(int a, int b)
{
	int res;
	if(b>0)
	{
		res = pow(a,b);
		return res;
	}
	else
		printf("Pas de resultat");
	return 0;
}

int factorielle(int a)
{
	int i;
	int resultat=1;
	for(i=1; i<=a; i++)
	{
		resultat = resultat*i;	
	}
	
	return resultat;
}

int main()
{
	int a, b, c, res1, res2, res3, res4, res5;
	printf("Quel est la valeur de A : \n");	
	scanf("%d", &a);
	printf("Quel est la valeur de B : \n");	
	scanf("%d", &b);
	printf("Quel est la valeur de C : \n");	
	scanf("%d", &c);
	
	res1 = multiplication(a, b);
	printf("Le resultat de la multiplication de A et B est : %d\n", res1);

	res2 = mult_addi(a, b, c);
	printf("Le resultat de la multiplication et l'addition de A, B, C est : %d\n", res2);
	
	res3 = multiplication2(a, b, c);
	printf("Le resultat de la multiplication de A et B et C est : %d\n", res3);	

	res4 = puissance(a,b);
	printf("Le resultat de la puissance de A par B est : %d\n", res4);

	res5 = factorielle(a);
	printf("Le resultat de la factorielle de A est : %d\n", res5);

	return 0;
}


