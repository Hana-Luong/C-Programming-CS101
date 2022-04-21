#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age);//need to be here.

int main()
{
    sayHi("Mike", 40);
    sayHi("Tom", 20);
    sayHi("Steve", 10);
    return 0;
}

void sayHi(char name[], int age)    //age;
{
    printf("Hello %s, you are %d years old.\n", name, age);
}
