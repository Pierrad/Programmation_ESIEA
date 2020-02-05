#include<stdlib.h>
#include<stdio.h>

/*
int main()
{
	int a = 10;
	int *p_a;
	p_a = &a;
	printf("Valeur1 : %p\n", &a);
	printf("Valeur2 : %p\n", p_a);
	printf("Valeur3 : %d\n", *p_a);
	printf("Valeur4 : %d\n", a);
	return 0;
}
*/


int main()
{
	int *p_a = NULL;
	*p_a = 10;
}

/*
int main()
{
	float f;
	double *p2;
	//Il est interdit de faire pointer un pointeur sur une variable de type différent.
}
*/


