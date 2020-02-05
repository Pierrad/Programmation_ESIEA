#include<stdlib.h>
#include<stdio.h>

int Mirror(int n)
{
	int v, s = 0;
	do{
		v = n % 10;
		s = s * 10 + v;
		n = n /10;
	}while(n != 0);
	return s;
}
int Mirror2(int i, int *compteur)
{
	int s = 0;
	do
	{					
		s = Mirror(i);
		i = i + s;
		if (i > 100000000)
			*compteur += 0;
		else
			*compteur += 1;
	}while (i != Mirror(i));
	return 0;
}


int main()
{
	int compteur = 0;	
	int i = 97;
	while(i < 1000)
	{	
		Mirror2(i, &compteur);
		i++;
	}
	int moyenne;
	moyenne = compteur / 886;
	printf("En moyenne il faut : %d essais pour trouver un palindrome\n", moyenne);
    	return 0;
}	












/*
	printf("Rentrez un nombre inferieur a 1000 : ");
	scanf("%d", &n);
	while (n)
	{
	s = Mirror(n);
	n = n + s;
	compteur1 += 1;
	if (n == Mirror(n))
		break; 
	}
    	printf("c'est un palindrome : %d\n", n);
	
	int m, d, compteur2 = 0;
	printf("Rentrez un nouveau nombre inferieur a 1000 : ");
	scanf("%d", &m);
	while (m)
	{
	d = Mirror(m);
	m = m + d;
	compteur2 += 1;
	if (m == Mirror(m))
		break; 
	}
    	printf("c'est un palindrome : %d\n", m);
	
	int w, f, compteur3 = 0;
	printf("Rentrez un dernier nombre inferieur a 1000 : ");
	scanf("%d", &w);
	while (w)
	{
	f = Mirror(w);
	w = w + f;
	compteur3 += 1;
	if (w == Mirror(w))
		break; 
	}
    	printf("c'est un palindrome : %d\n", w);

	float compteurfinal;
	compteurfinal = (compteur1+compteur2+compteur3)/3;
	printf("En moyenne il faut : %.2f essais pour trouver un palindrome\n", compteurfinal);
    	return 0;

*/


	
		
	

		
	






