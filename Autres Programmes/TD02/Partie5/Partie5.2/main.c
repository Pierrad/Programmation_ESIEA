#include<stdio.h>

int a=2, b=3,c=4;
int tmp;
int tmp_1;

int main()

{
    printf("Avant : a = %d et b = %d et c = %d\n", a, b, c);
    tmp = a;
    tmp_1 = b;
    a = c;
    b = tmp;
    c = tmp_1;
    printf("Après : a = %d et b = %d et c = %d\n", a, b, c);
    return 0;
}
