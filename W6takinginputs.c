#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Pls enter your age: ");
    scanf("%d", &age);                      //Don't forget &;
    printf("Your age is %d years old", age);

    return 0;
}