
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int  i;
    int  n;
    float a = 0 ;
    printf("Rang de la serie harmonique? : ");
    scanf("%d", & n);
    for (i=1; i<=n; i++)
        {
            a = (a + (1/(float)i));
            printf("Le résultat est : %f\n", a);
        }
    return 0;
}

