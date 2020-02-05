#include <stdlib.h>
#include <stdio.h>

void AfficheTab (int *tab,  int N)
{
	for( ; N>0; N--)
		printf("%d\t", tab[N-1]);
	printf("\n");
}

int* AllocTab (int n)
{
	int i, *tab = NULL;
	tab = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		tab[i] = i;
	AfficheTab(tab, n);
	return tab;
}

int RandTab (int a, int b)
{
	srand(time(NULL));
	int entier;
	entier = (int)rand()%((b + 1000 - a) + a); 
	return entier;
    
} 

int main() {

	int n;
	printf("Quelle est la valeur de N?\n");
	scanf("%d\n", &n);
	int *tab;	
	tab = NULL;
	tab = AllocTab(n);
    int b = 2000;
    int a = 1;
    int c;
    c = RandTab(a,b);
    printf("%d\n", c);
	return 0;
}




