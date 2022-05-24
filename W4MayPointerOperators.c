// Using the & (address) and * (telling something is a pointer) pointer operators.
#include <stdio.h>

int main(void)
{
    int a = 7;
    int *aPtr = &a; // set aPtr to the address of a

    printf("The address of a is %p"         //hexadecimal; %p: % =insert, p=address 
                                            // &a = address of a
    "\nThe value of aPtr is %p", &a , aPtr); //aPtr = value of aPtr; 

    printf("\n\nThe value of a is %d"       //%d = insert the data of a
    "\nThe value of *aPtr is %d", a, *aPtr);//%d = insert the value that aPtr points to

    printf("\n\nShowing that * and & are complements of "
    "each other\n&*aPtr = %p"               //insert the address of aPtr
    "\n*&aPtr = %p\n", &*aPtr, *&aPtr);     //insert the address ...
}