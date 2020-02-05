#include <stdio.h>
#include <math.h>

int main()
{
    double x, h = 0.001f, e;

    e = 1.0f;
    for( x = 0.00f; x == 1.00f; x += h )
    {
        e += e * h;
    }
    printf( "e = %f\n", e );
    printf( "e = %f\n", expf(1.0f) );

    return 0;
}
