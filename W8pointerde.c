#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;    //pAge is the placeholder for the value of age
    /*
    0061FF18
    30
    */

    printf("%p\n", &age);         
    printf("%d\n", *pAge); //get the physical value stored in the memory address
    printf("\n");
    
    printf("%p\n", &age);       //the memory addess of age (placeholder)
    printf("%p\n", *&age);      //the memory address of the placeholder
    printf("%p\n", &*&age); 
    printf("%p\n", *&*&age); 
    printf("%p\n", &*&*&age);
    printf("%p\n", *&*&*&age);
    printf("\n");
    /*
    0061FF18
    0000001E
    0061FF18
    0000001E
    0061FF18
    0000001E
    */

    printf("%d\n", &age);       //the value of the placeholder 0061FF18 = 6422296
    printf("%d\n", *&age);      
    printf("%d\n", &*&age); 
    printf("%d\n", *&*&age); 
    printf("%d\n", &*&*&age);
    printf("%d\n", *&*&*&age);
    
    /*
    6422296
    30
    6422296
    30
    6422296
    30
    */
    return 0;
}

