#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char i, res=0;
    while (res < 10)
    {
        i = scanf("%c", &res);
        printf ("i: %d\t-- %d --\n", i, res);
    }
    return 0;
}

