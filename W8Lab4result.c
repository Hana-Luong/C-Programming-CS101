#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//2. What does the following program print?
// Predict: 1^2 + 2^2 + 3^2 ...10^2 = 385

int main()
{
    unsigned int x = 1;
    unsigned int total = 0;
    unsigned int y;
    unsigned int squaredSum;

    while(x <= 10)
    {
        y = x * x;
        printf("%d\n", y);
        total += y;
        ++x;
    }
    printf("Total is %d\n", total);

    squaredSum = pow(1,2) + pow(2,2) + pow(3,2) + pow(4,2) + pow(5,2) + 
                pow(6,2) + pow(7,2) + pow(8,2) + pow(9,2) + pow(10,2);
    printf("Calculated squared sum is %d\n", squaredSum);
    
    return 0;
}

