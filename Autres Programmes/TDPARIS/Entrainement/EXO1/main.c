#include <stdlib.h>
#include <stdio.h>
int main() {

int iVar;
int *p_iVar = NULL;

printf("The value of &iVar is %p and p_iVar is %p.\n", &iVar, p_iVar);

p_iVar = &iVar;

printf("The value of &iVar is %p and p_iVar is %p.\n", &iVar, p_iVar);


double a = 1;
double *pa = &a;

char b = 'b';
char *pb = &b;

printf("L'adresse d'un flottant (double) est : %p\n", pa);
printf("L'adresse d'un caractère (char) est : %p\n", pb);

}
