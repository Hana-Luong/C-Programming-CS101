#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int counter = 0;
    int grade;
    int total = 0;
    float average;

    printf("%s", "Enter grade, -1 to end: ");   //why needs %s here?
    scanf("%d", &grade);
    while(grade != -1)
    {
        total += grade;
        counter += 1;
        printf("%s", "Enter grade, -1 to end: ");   //why needs %s here?
        scanf("%d", &grade);
    }
    if (counter != 0)
    {
        average = (float) total / counter;
        printf("Class average is %.2f\n", average);
    } else 
    {
        puts("No grades were entered");
    }   
    return 0;
}