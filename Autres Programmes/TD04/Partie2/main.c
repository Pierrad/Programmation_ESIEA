#include<stdlib.h>
#include<stdio.h>

int power ( int a, short b)
{

	short i;
	int res = 1;

	for (i=0; i<b; i++)
		res *= a;
	return res;

}

int main()
{

	int a = 2;
	short b = 3;
	int res;


	res = power (a, b);

	return 0;
}
