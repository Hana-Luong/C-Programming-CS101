#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Write a C program that 
takes a temperature in Fahrenheit from the user and converts it into Centigrade.
°C = (°F - 32) × 5/9*/

int main()
{
    double tempF;
    double tempC;
    printf("Enter the degree in Fahrenheit: ");
    scanf("%lf", &tempF);                //lf to get double
    tempC = (tempF - 32) * 5 / 9;
    printf("Degree in Centigrade: %.1f \n", tempC);   

    return 0;
}