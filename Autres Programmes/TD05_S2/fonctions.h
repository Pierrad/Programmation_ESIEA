#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int MirorGD(int N,int nb);
int NbDigit(int N);

void NbMiroir();

int power_of_two(int a);
unsigned int ExpoNaiveIte(unsigned int g,unsigned int e,unsigned int n);
unsigned int ExpoPuiss2Rec(unsigned int g,unsigned int e,unsigned int n);
unsigned int ExpoPuiss2();
unsigned int ExpoTabulaire(unsigned int g,unsigned int e,unsigned int n);
int NombreBits (unsigned int n);
int *DecompoBinaire(int n,int *taille);	
unsigned int ExpoRapide(unsigned int g, unsigned int e, unsigned int n);

void porciney(char *path1, char *path2);









/*
    if(!puissance(b))
    {
        return 0;
    }
    */
    //Verification tableau bon sens 
    /*
    int N=NombreBits(b);
    int *Tab = DecompoBinaire(b, &N);
    for(int i=0; i<N; i++)
    {
        printf("%d\n", Tab[i]);
	}
     */
    //test des fonctions expos 
    /*
        unsigned int a=4,b=22,c=7;
    printf("\n%d\n", ExpoRapide(a,b,c));
    
    //printf("%d\n",ExpoPuiss2(a,b,c));		
	*/