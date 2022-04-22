#include <stdio.h>
#include <stdlib.h>
//pROBLEM
int main()
{
    //FILE * fpointer = fopen("employees.txt", "w");  //FILE a datapoint
                                                    //fpointer = memory address to store
//fprintf(fpointer, "Jim, salesman\nPam, Receptionist\nOscar, Accountant\n");
    FILE * fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "Larry, Engineer\n");
    fclose(fpointer);
    return 0;
}

