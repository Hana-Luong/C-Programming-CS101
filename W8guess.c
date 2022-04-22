#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretN = 5;
    int guessedN; 
    int guessCount = 0;
    int guessLimit = 3;
    
    while(guessedN != secretN && guessCount < guessLimit)
    {
        printf("Please guess a number: ");
        scanf("%d", &guessedN);  
        guessCount++;           
        if (guessCount == guessLimit) 
        {
            printf("Sorry, you have run out of guesses!");
        }  
        if(guessedN == secretN){
            printf("You are correct, the secretN is %d", guessedN);
        }   
    }
    
    return 0;
}

