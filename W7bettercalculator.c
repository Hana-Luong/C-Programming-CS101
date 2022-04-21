#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter the first number: ");
    scanf("%lf", &num1);            //%f float %lf double
    printf("Enter the second number:  ");
    scanf("%lf", &num2);
    printf("Enter operator: ");
    scanf(" %c", &op);               //%c for character, need a space;
    
    
    switch(op)
    {
        case '+':
            printf("%f", num1 + num2);
            break;
        case '-': 
            printf("%f", num1 - num2);  
            break;
        case '*':
            printf("%f", num1 * num2);
            break;
        case '/':
            printf("%f", num1 / num2);
            break;
        default:
            printf("Invalid operator!");
    }
    return 0;
}


