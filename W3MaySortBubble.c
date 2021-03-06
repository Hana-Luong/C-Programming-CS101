// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void) 
{ 
    // initialize a
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37}; 

    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) 
    {
        printf("%4d", a[i]);
    } 

    //bubble sort 
    // loop to control number of passes 
    for (unsigned int pass = 1; pass < SIZE; ++pass)    //size_t??? not here
    { 
        // loop to control number of comparisons per pass 
        for (size_t i = 0; i < SIZE - 1; ++i) 
        { 
            // compare adjacent elements and swap them if first
            // element is greater than second element 
            if (a[i] > a[i + 1]) 
            { 
                int hold = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = hold; 
            } 
        } 
    } 
    puts("\nData items in ascending order");

    // output sorted array
    for (size_t i = 0; i < SIZE; ++i) 
    {
        printf("%4d", a[i]);
    } 

    puts("");
}

//              15, 6, 4, 8, 7 (size - 1 = 4) step 
/* Initial     15,     6 , 4, 8, 7 
            6,      15, 4, 8, 7         //0
            6, 4        15, 8, 7        //1
            6, 4, 8,        15, 7       //2
            6, 4, 8, 7,        15       //3
            
Initial     6, 4, 8, 7
            4       6, 8, 7
            4, 6,      8, 7
            4, 6, 7,     8

Initial     4, 6, 7
            4       6, 7
            4, 6        7

Initial     4, 6
            4,      6 done
            
 */
           

 