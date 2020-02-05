#include <stdio.h>


int main ()
{
    int a=2,b=5;
    printf("Avant : a = %d et b = %d\n",a , b);

    a += b;
    b = a-b;
    a = a-b;

    printf("Apres : a = %d et b = %d\n",a , b);
    return 0;
}
