#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    for(i=i,j=j;i<=3;i=i+1,j=j+2)
    {
        printf("i = %d\n", i);
        printf("j = %d\n", j);
    if ((i==j))
        i=2*j;
    else
        printf("%d\n",j);
    }
    printf("\nAu revoir\n");
    return(0);
}
