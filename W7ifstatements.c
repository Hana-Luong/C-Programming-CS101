#include <stdio.h>
#include <stdlib.h>

int maxFunction(int num1, int num2)
{
    int result;
    if(num1 > num2)
    {
        result = num1;
    } else
    {
        result = num2;
    }
}
int main()
{
    printf("%d", maxFunction(4,10));
    return 0;
}


