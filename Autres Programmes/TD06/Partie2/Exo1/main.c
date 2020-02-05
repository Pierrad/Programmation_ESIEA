#include <stdlib.h>
#include <stdio.h>

int main() {
	int N = 5;
	float tabf[N];
	int tabEntiers[100] = {1, 2, 3, 4, 5};
	char tabCara[5] = {'a', 'b', 'c', 'd', 'e'};
	float tabFloat[5] = {3.14f}; 
	//1.5) nom: tabFloat    type: float
	//1.6) contient 5 cases
	//1.7) 
	//1.8) case0: 3.14 case1: 0 case5: 0
	int i = 0; 
	short T[7] = {3, -2, 1};
	T[0] = 14;    // Modification de la case 0 du tableau T
	T[3] = T[i];  // Modification de la case 3 du tableau T
	for(i=0; i<7; i++)
	T[i] = i;  // Parcours et remplissage du tableau

}
