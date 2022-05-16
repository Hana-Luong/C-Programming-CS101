#include <stdio.h> 

int square(int y); // function prototype
//KINDA REDUNDANT HERE?

int main(void)
{
// loop 10 times and calculate and output square of x each time
    for (int x = 1; x <= 10; ++x) 
    {
        printf("%d ", square(x)); // function call
    } 

    puts("");//WHAT DOES IT DO? 
    // return 0 implicitly
    // return non-zero for failure
} 

// square function definition returns the square of its parameter
int square(int y) // y is a copy of the argument to the function 
{ 
 return y * y; // returns the square of y as an int 
}


