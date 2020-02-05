#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;
}


void CompteARebours (int duree)
{
	/*	
	clock_t tempsDebut;
	tempsDebut = (duree * CLOCKS_PER_SEC) + clock();
	while (tempsDebut > clock())
	{
		;
	}
	*/
	srand(time(NULL));
	int entier;
	entier = (int)rand()%((duree + 1 - 0) + 0); 	
	int i;
	for( i = entier; i != 0; i--)
	{
    		printf("Il vous reste %d secondes.\n", i);
    		sleep(1);
	}
	
}

double TempsAleatoire (int max)
{
	srand(time(NULL));
	int entier;
	entier = (int)rand()%((max + 1 - 0) + 0); 	
	int i;
	for( i = entier; i != 0; i--)
	{
    		sleep(1);
	}
	return 0;
	
}

double DeroulerJeu (int duree)
{
	int i, p, touche;
	for (i=0; i<4; i++)
	{
		for (p=0; p < 5 ; p++)	
		{
			printf("*\n");
			sleep(0.2);
		}
		touche = kbhit();
		if (touche == 1)
		{			
			printf("Votre temps de reaction est egale a %d secondes.\n", i);			
			break;
		}		
		sleep(1);
	}
	if (i == 4)
		printf("Vous etes lent\n");
	return 0;
}



int main()
{
	int duree = 30;
	int max = 20;	
	CompteARebours(duree);
	TempsAleatoire(max);
	DeroulerJeu(duree);
}
