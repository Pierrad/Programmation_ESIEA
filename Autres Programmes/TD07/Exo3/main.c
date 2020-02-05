#include <stdlib.h>
#include <stdio.h>

int main() {


	float a = 2;
	printf("%p\n", &a);
	char tab[2] = {'a','b'};
	for(int i=0;i<3; i++)
		printf("%p\n", &tab[i]);	
	char *p_a = "Douglas Power\0";
	printf("%p\n", p_a);
	short *tab1 = (short*) calloc (2 ,sizeof(short));
	for (int o=0; o<3; o++)
		printf("%p\n", &tab1[o]);
	return 0;
	
}
