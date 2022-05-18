 // Treating character arrays as strings.
#include <stdio.h>
#define SIZE 20 //CAPITAL LETTER

// function main begins program execution
int main(void)
{
    //Example
    //char string1[] = "first"; 
    //the string "first" contains five characters plus the null character  '\0'.
    //char string1[] = {'f', 'i', 'r', 's', 't', '\0'};
    /*Another
    char string2[20];
    scanf("%19s", string2); //%10s for security; string2 does not have &
    */

    char string1[SIZE]; // reserves 20 characters
    char string2[] = "string literal"; // reserves 15 characters; white space only string1

    // read string from user into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1); // input no more than 19 characters

    // output strings
    printf("string1 is: %s\nstring2 is: %s\n" 
            "string1 with spaces between characters is:\n",string1, string2);
  
    //output characters until null character is reached 
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) 
    {
        printf("%c ", string1[i]);
    } 

    puts("");
} 