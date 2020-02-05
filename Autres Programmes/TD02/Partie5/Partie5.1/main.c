#include<stdio.h>
int a=2, b=3;
int tmp;

int main()

{
    printf(" Avant : a = %d et b = %d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("Après : a = %d et b = %d\n", a, b);
    return 0;
}
