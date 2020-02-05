#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*
int f(int a, float *b, char c)
{

}
*/

/*
void Puissance_pointeur(int *p_a, int n)
{
	*p_a = pow(*p_a, n);
}

int main()
{
	int n = 3;
	int m = 4;
	Puissance_pointeur(&m, n);
	printf("La valeur est : %d \n", m);

}
*/
/*
char Echange(char *a, char *b)
{
	int tmp = *a;
	*a = *b;
	printf("Nous sommes actuellement dans la fonction, les valeurs de c1 et c2 sont : %c, %c\n", *a, *b);
	*b = tmp;
	return 0;
}


int main()
{
	char c1 = 'r';
	char c2 = 'k';
	printf("Les valeurs de c1 et c2 au debut sont : %c, %c\n", c1, c2);		
	Echange(&c1, &c2);
	printf("Les valeurs de c1 et c2 a la fin sont : %c, %c\n", c1, c2);
}
*/

char Echange(char *a, char *b)
{
	int tmp = *a;
	*a = *b;
	printf("Nous sommes actuellement dans la fonction, les valeurs de c1 et c2 sont : %c, %c\n", *a, *b);
	*b = tmp;
	return 0;
}


int main()
{
	char c1 = 'r';
	char c2 = 'k';
	printf("Les valeurs de c1 et c2 au debut sont : %c, %c\n", c1, c2);		
	Echange(&c1, &c2);
	printf("Les valeurs de c1 et c2 a la fin sont : %c, %c\n", c1, c2);
}






