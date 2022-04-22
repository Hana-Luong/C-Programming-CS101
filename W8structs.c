#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student                      //equivalent of constructor?
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;                //equivalent of instantiation
    student1.age = 23;                      //like a const in Javascript?
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");           //copy the string "Jim" to dest student1.name
    strcpy(student1.major, "Business");     
                                            
    printf("%.1f\n", student1.gpa);
    printf("%s", student1.major);
          
    return 0;
}

