//Array name is the same as the address of the array’s first element.
//array, &array and &array[0] have the same value,
#include <stdio.h>

// function main begins program execution
int main(void)
{
    char array[5]; // define an array of size

    printf("array = %p\n&array[0] = %p\n&array = %p\n", array, &array[0], &array);
}

//To pass an array argument to a function, specify the array’s name without any brackets.
//Define an array: int hourlyTemperatures[HOURS_IN_A_DAY];
//Call it: modifyArray(hourlyTemperatures, HOURS_IN_A_DAY)