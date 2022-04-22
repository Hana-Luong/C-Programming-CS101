#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
     
    printf("%p\n", &age);     //p pointer, memory address;
    
    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    return 0;
}

