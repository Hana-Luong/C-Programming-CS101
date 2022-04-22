#include <stdio.h>
#include <stdlib.h>
//1. Write a C program that calculates the sum of the integers from 1 to 10.
//Hint: Use the while statement.

int main()
{
    int num = 1;
    int sum = 0;
    while(num >=1 && num <= 10)
    {
        printf("num before increased is %d\n", num);
        sum += num;
        printf("Sum after one summation is %d", sum);
        num++;
        printf("num after increased is %d\n", num);
        printf("\n");
    }
    printf("The sum is %d\n", sum);
    int gSum = 10*11/2;
    printf("According to Gauss, the sum is %d", gSum );

    return 0;
}

