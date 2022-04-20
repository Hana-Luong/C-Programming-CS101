#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Sum: %d \n", num1 + num2);
    printf("Difference: %d \n", num1 - num2);
    printf("Product: %d \n", num1 * num2);
    printf("Quotient: %d \n", num1 / num2);
    printf("Remainder: %d \n", num1 % num2); */

    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);                //lf to get double
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Sum: %f \n", num1 + num2);
    printf("Difference: %f \n", num1 - num2);
    printf("Product: %f \n", num1 * num2);
    printf("Quotient: %f \n", num1 / num2);
    

    return 0;
}