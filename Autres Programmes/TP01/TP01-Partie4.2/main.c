#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	
	float montant;
	float money;
	float rendu;
	montant = ((float)rand()/RAND_MAX)*50;

	balise :
	printf("Montant a payer : %.2f\n", montant);
	printf("Vous payez : \n");
	scanf("%f", &money);

	rendu = money - montant;


	if (rendu<0)
	 {
	 printf("il manque %.2f\n", -rendu);
	 goto balise;
	 }
	printf("Rendu : %.2f\n", rendu);

	if(rendu >= 500)
	{
		int b500 = 0;
		while (rendu>500)
		{
			rendu = rendu - 500;
			b500++;
		}
		printf("%d x 500 euros\n",b500);
	}


	if(rendu >= 200)
	{
		int b200 = 0;
		while (rendu>200)
		{
			rendu = rendu - 200;
			b200++;
		}
		printf("%d x 200 euros\n",b200);
	}

	if(rendu >= 100)
	{
		int b100 = 0;
		while (rendu>100)
		{
			rendu = rendu - 100;
			b100++;
		}
		printf("%d x 100 euros\n",b100);
	}

	if(rendu >= 50)
	{
		int b50 = 0;
		while (rendu>50)
		{
			rendu = rendu - 50;
			b50++;
		}
		printf("%d x 50 euros\n",b50);
	}



	if(rendu >= 20)
	{
		int b20 = 0;
		while (rendu>20)
		{
			rendu = rendu - 20;
			b20++;
		}
		printf("%d x 20 euros\n",b20);
	}
	if(rendu >= 10)
	{
		int b10 = 0;
		while (rendu>10)
		{
			rendu = rendu - 10;
			b10++;
		}
		printf("%d x 10 euros\n",b10);
	}
	if(rendu >= 5)
	{
		int b5 = 0;
		while (rendu>2)
		{
			rendu = rendu - 5;
			b5++;
		}
		printf("%d x 5 euros\n",b5);
	}
	if(rendu >= 2)
	{
		int pcs2 = 0;
		while (rendu>2)
		{
			rendu = rendu - 2;
			pcs2++;
		}
		printf("%d x 2 euros\n",pcs2);
	}
	if(rendu >= 1)
	{
		int pcs1 = 0;
		while (rendu>1)
		{
			rendu = rendu - 1;
			pcs1++;
		}
		printf("%d x 1 euros\n",pcs1);
	}

	if(rendu >= 0.50)
	{
		int cts50 = 0;
		while (rendu>0.50)
		{
			rendu = rendu - 0.50;
			cts50++;
		}
		printf("%d x 50 centimes \n",cts50);
	}
	
	if(rendu >= 0.20)
	{
		int cts20 = 0;
		while (rendu>0.20)
		{
			rendu = rendu - 0.20;
			cts20++;
		}
		printf("%d x 20 centimes\n",cts20);
	}
	
	if(rendu >= 0.10)
	{
		int cts10 = 0;
		while (rendu>0.10)
		{
			rendu = rendu - 0.10;
			cts10++;
		}
		printf("%d x 10 centimes\n",cts10);
	}

	if(rendu >= 0.05)
	{
		int cts5 = 0;
		while (rendu>0.05)
		{
			rendu = rendu - 0.05;
			cts5++;
		}
		printf("%d x 5 centimes\n",cts5);
	}
	if(rendu >= 0.02)
	{
		int cts2 = 0;
		while (rendu>0.02)
		{
			rendu = rendu - 0.02;
			cts2++;
		}
		printf("%d x 2 centimes\n",cts2);
	}
	if(rendu >= 0.01)
	{
		int cts1 = 0;
		while (rendu>0.01)
		{
			rendu = rendu - 0.01;
			cts1++;
		}
		printf("%d x 1 centimes\n",cts1);
	}
}
