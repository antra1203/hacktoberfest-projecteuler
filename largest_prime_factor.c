#include <stdio.h>
#include <math.h>

#define NUMBER 600851475143

int isPrime(int ztest)
{
    int ki=0;
    int ss=( (int) sqrt(ztest) );

    for(ki = 3; ki <= ss; ki+=2)
    {
        if(ztest % ki == 0)
        {
            return 0;
        }
    }

    return 1;
}
