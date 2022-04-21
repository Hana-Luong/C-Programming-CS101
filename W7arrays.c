#include <stdio.h>
#include <stdlib.h>


int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d", luckyNumbers[1]);

    char unLuckyLetters[10];
    unLuckyLetters[0] = 'U';//????
    
    printf("%s", unLuckyLetters[0]);

    return 0;
}