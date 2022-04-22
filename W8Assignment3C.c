#include <stdio.h>
#include <stdlib.h>
/*
Write a program in C that finds the smallest of several integers. 
Assume that the first value read specifies the number of values remaining to be entered. 

Here is a sample run:

Enter the number of integers to be processed: 5
Enter an integer: 34
Enter next integer: 52
Enter next integer: 23
Enter next integer: 76
Enter next integer: 44

The smallest integer is: 23
*/
int main()
{
    int count = 0;
    int numberOfEntries;
    int num; 
    int min = 2147483647;   //largest possible int

    printf("Enter the number of integers to be processed: ");
    scanf("%d", &numberOfEntries);
    while(count < numberOfEntries)
    {
        printf("Enter an integer: ");
        scanf("%d", &num);
        
        ++count;
        printf("Count is %d\n", count);

        if(min > num)
            min = num;        
    }
    printf("The smallest integer is: %d", min);
    return 0;
}

