#include <stdio.h>
#include <stdlib.h> //'srand'

int main(void)
{
    unsigned int seed; 

    printf("%s", "Enter seed: ");
    scanf("%u", &seed); // note %u for unsigned int

    srand(seed); // seed the random number generator
    // loop 20 times
    for (unsigned int i = 1; i <= 20; ++i) {
 
        // pick random number from 1 to 6 and output it
         printf("%10d", 1 + (rand() % 6));  //pseudorandom numbers

        // if counter is divisible by 5, begin new line of output
        if (i % 5 == 0) {
            puts("");//start a new line after 5 numbers
        } 
    } 
} 
/*Notice that exactly the same sequence of values was printed - work properly. 
Function rand actually generates pseudorandom numbers. 
Once a program has been thoroughly debugged,
it can be conditioned to produce a different sequence of random numbers for each 
execution. 
This is called randomizing and is accomplished with the standard library function
srand. Function srand takes an unsigned int argument and seeds function rand to produce a different sequence of random numbers for each execution of the program. 
*/