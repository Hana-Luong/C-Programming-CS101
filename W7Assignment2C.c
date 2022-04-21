#include <stdio.h>
#include <stdlib.h>

/*
Drivers are concerned with the mileage obtained by their automobiles. 
One driver has kept track of several tankfuls of gasoline by recording miles driven 
and gallons used for each tankful. Develop a program in C that will input the miles 
driven and the gallons used for each tankful. 
The program should calculate and display the miles per gallon obtained for each tankful.
After processing all input information, the program should calculate and print the overall miles per gallon obtained for all tankfuls.  

Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles / gallon for this tank was 22.421875

Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles / gallon for this tank was 19.417475

Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles / gallon for this tank was 24.000000

Enter the gallons used (-1 to end): -1

The overall average miles / gallon was 21.601423
*/   
int main()
{
    double gallons, miles;
    double tankAverage;
    double totalGallons, totalMiles;
    double totalAverage;

    printf("%s", "Enter the gallons used (-1 to end): ");   
    scanf("%lf", &gallons);
    printf("%s", "Enter the miles driven: "); 
    scanf("%lf", &miles);
     
    while(gallons != -1)
    {
      if(gallons != 0)
      {
        tankAverage = miles/gallons;
        printf("The miles / gallon for this tank was %f\n", tankAverage);
      }
      totalMiles += miles;
      totalGallons += gallons;
        
      printf("%s", "Enter the gallons used (-1 to end): ");   
      scanf("%lf", &gallons);
      if(gallons != -1)
      {
        printf("%s", "Enter the miles driven: "); 
        scanf("%lf", &miles);
      }      
    }
    totalAverage = totalMiles / totalGallons;
    printf("The overall average miles / gallon was %f\n", totalAverage);
      
    return 0;
}