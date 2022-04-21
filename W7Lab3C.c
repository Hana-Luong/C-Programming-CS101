#include <stdio.h>
#include <stdlib.h>

//Write a program in C that inputs grade from the user and converts it to a letter grade.

int main()
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);          
    
    if(grade > 90)
    {
        printf("Your letter grade is A");
    }
    else if(grade > 85)
    {
        printf("Your letter grade is B");
    }
    else if(grade > 80)
    {
        printf("Your letter grade is C");
    }
     else if(grade > 70)
    {
        printf("Your letter grade is D");
    }
     else 
    {
        printf("Your letter grade is F");
    }
    return 0;
}


