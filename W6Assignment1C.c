#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Write a program in C that reads in the radius of a circle 
and prints the circle's diameter, circumference and area. 

Use the constant value of 3.1415 for pi . 
Perform each of these calculations inside the printf statement(s) 
and use the conversion specifier %f./
*/
int main()
{
    const double magnum = 3.1415;
    double radius;
    
    printf("Enter the radius: ");
    scanf("%lf", &radius);               
    
    printf("Diameter is: %f \n", 2 * radius);   
    printf("Circumference is: %f \n", 2 * magnum * radius); //C = 2 \pi r
    printf("Area is: %f \n", magnum * (pow(radius,2)));     //A = pi r^2
    return 0;
}