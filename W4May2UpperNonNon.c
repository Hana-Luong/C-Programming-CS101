// Converting a string to uppercase using a 
// non-constant pointer to non-constant data.
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); // prototype

int main(void)
{
    char string[] = "cHaRaCters and $32.98"; // initialize char array

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string); 
}

// convert string to uppercase letters
void convertToUppercase(char *sPtr)     //string is like an array, one char after another
{
    while (*sPtr != '\0')   // current character is not '\0'
                            //the content inside sPtr is not null
    {       
        *sPtr = toupper(*sPtr); // convert to uppercase
                                // take the content inside Ptr and convert it to upper
        sPtr++; // make sPtr point to the next character
                //in a string, adjacent memory
    }
} 
