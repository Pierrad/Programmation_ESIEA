#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d, e;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a<b)
	{
		e=a;
		a=b;
		b=e;
	}
	for(d=0; d<8; d++)
	{	
		scanf("%d", &c);
		if (c>a)
		{
			a=c;
		}
		else
		{	
			if (c<b)
			{
				b=c;
			}
		}
	}
	printf("le plus grand nombre est : %d et le plus petit est : %d\n ", a, b);	
		
}	
	
	
	
