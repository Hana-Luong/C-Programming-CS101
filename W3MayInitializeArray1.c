#include <stdio.h>
//<stddef.h>
//Type size_t is defined in header <stddef.h>, which is often included by other
//headers (such as <stdio.h>

//if you don't initialize, it is a garbage number in the memory location

// function main begins program execution
int main(void)
{
    int n[5]; // n is an array of five integers
    // set elements of array n to 0 
    for (size_t i = 0; i < 5; ++i) 
    { 
        n[i] = 0; // set element at location i to 0
    } 

    printf("%s%13s\n", "Element", "Value");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) 
    { 
        printf("%7u%13d\n", i, n[i]); 
    }
}