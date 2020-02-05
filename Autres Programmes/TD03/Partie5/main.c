#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    for(i=1;i<=99;i++)
    {
        i=i+0;
    }
    printf("%d\n", i);

}

int main()
{
    int a, tentatives =0;
    int aleatoire;
    aleatoire = (int) (100.*(rand()/RAND_MAX));
    scanf("%d", &a);
    tentatives+=1;
    while (a != aleatoire )
        {
            scanf("%d", &a);
            tentatives+=1;
        }
    printf("La valeur est : %d\n", a);
    printf("Le nombre de tentatives est : %d\n", tentatives);
    return 0;
}
