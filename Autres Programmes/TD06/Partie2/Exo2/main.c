#include <stdlib.h>
#include <stdio.h>

int main() {

	int i = 5;	
	int tab[6] = {0,0,0,0,0,-2};
	printf ("%d\n", tab[i]);
	printf ("%d\n%d\n%d\n", tab[0], tab[1], tab[2]);
	for (i=0; i<6; i++)
	{
		tab[i] = i;
		printf("%d\n", tab[i]);	
	}	
	return 0;
}
