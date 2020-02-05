#include<stdlib.h>
#include<stdio.h>

int Mirror(int n)
{
	int v, s = 0;
	do{
		v = n % 10;
		n = n /10;
		s = s * 10 + v;
	}while(n != 0);
	return s;
}

int NdDigit(int n)
{
	int v, s = 0, compteur =0;
	do{
		v = n % 10;
		n = n /10;
		s = s * 10 + v;
		compteur += 1;
	}while(n != 0);
	return compteur;
}

int Palindromize(int n)
{
	int v, s = 0;
	do{
		v = n % 10;
		n = n /10;
		s = s * 10 + v;
		printf("%d\n", s);
	}while(n != 0);
	return s;
}


int main()
{ 

	int n, s, d, f;
	printf("Rentrez une chiffre : ");
	scanf("%d", &n);
	
	s = Mirror(n);

	d = NdDigit(n);

	f = Palindromize(n); 
	n = n / 10;
		
	printf("Le nombre mirroir est : %d\n", s);
	printf("Le nombre de chiffres est : %d\n", d);
	printf("Le nombre de Palindrome est : %d%d\n", n, f);
	return 0;
}


