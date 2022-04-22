#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);
    //how to read the whole document
    //different line? 

    fclose(fpointer); 
    return 0;
}

