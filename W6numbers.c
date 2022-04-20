#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("%f\n", 8.9);//default 6 decimals    
    printf("%d\n", 5/4);
    printf("%f\n", 5/4.0);
    printf("%f\n", 5/4);

    printf("%d\n", pow(2,3));
    printf("%f\n", pow(2,3));

    printf("%d\n", sqrt(36));//?
    printf("%f\n", sqrt(36));

    printf("%f\n", ceil(3.7));
    printf("%f\n", floor(3.7));

    return 0;
}