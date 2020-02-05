#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int res,n;
    for(res=1,n=1;n<8;n=n+1)
    {
        res=2*res;
        printf("res=%d\n", res);
    }
    return 0;
}
