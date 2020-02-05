#include<stdlib.h>
#include<stdio.h>
#include<math.h>

float solution(float a, float b,float c)
{	
	float x,y;
	int discri;
	discri = ((b*b)-4*a*c);
	
	if (discri>0)
	{
		x = ((-b-sqrt(discri))/(2*a));
		y = ((-b+sqrt(discri))/(2*a));
		printf("La premiere forme est : \n");		
		printf("La valeur de x est : %.2f\n", x);
		printf("La valeur de y est : %.2f\n", y);
		
		printf("La deuxieme forme est : \n");
		printf("La valeur de x est : ((-%.2f-sqrt(%d))/(2*%.2f))\n", b, discri, a);
		printf("La valeur de y est : ((-%.2f+sqrt(%d))/(2*%.2f))\n", b, discri, a);
	}

	if (discri==0)
	{
		x = (-b/(2*a));
		printf("La premiere forme est : \n");	
		printf("La valeur de x est : %.2f\n", x);
		
		printf("La deuxieme forme est : \n");
		printf("La valeur de x est : ((-%.2f)/(2*%.2f))\n", b, a);	
	}

	if (discri<0)
	{
		printf("Pas de solution\n");
	}
	return 0;
}


	
int main()
{
	float a,b,c;
	printf("Quelles sont les valeurs de A, de B et de C : ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	solution(a, b, c);
}
	
	
