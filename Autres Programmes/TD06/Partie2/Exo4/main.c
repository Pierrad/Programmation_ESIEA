#include <stdlib.h>
#include <stdio.h>

int SaisirCrottes(int tab[], int n){
	int i;
	for (i = 0; i<n; i++)
	{
		int a;		
		printf("Combien de crottes a t'il produit : ");
		scanf("%d", &a);
		tab[i] = a;
		if (a<0)
			break;
	}
	printf("%d cases sont remplies\n", i);
	return 0;
}

int main () {
	int n=128;
	int tab[128] = {0};
	SaisirCrottes(tab, n);
}
