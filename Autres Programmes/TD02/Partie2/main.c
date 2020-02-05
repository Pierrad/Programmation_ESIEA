#include<stdio.h>

int main()
{
    int a;
    float x,y;

    x = (int)100;
    a = (int)1/(float)x * (int)150;
    y = (int)a * (float)73.0;

    printf("y = %d\n", (int)y);
    return 0;
}
