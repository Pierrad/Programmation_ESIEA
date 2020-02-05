#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int i;
    for(i=0;i<10;i=i+1)
        printf("%d\n", (int) (100.*rand()/RAND_MAX));
    return 0;
}

