#include <stdlib.h>
#include <stdio.h>

void AfficheTab (int tab[], int n)
{	
	int i, resultat = 0;
	for (i = 0; i<n; i++)
	{
		tab[i] = i;
		resultat = resultat + i;
		printf("%d\n", tab[i]);	
	}
	resultat = resultat/n;
	printf("la moyenne est : %d\n", resultat);
}



int main()
{
	int tab[10];
	AfficheTab (tab, 10);
	return 0;
}
