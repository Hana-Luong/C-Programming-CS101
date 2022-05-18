#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //new here, but not new
#define SIZE 7      //new for this chapter

// function main begins program execution
int main(void)
{
    unsigned int frequency[SIZE] = {0}; // initialize all as zero

    srand(time(NULL)); // seed random number generator

    // roll die 60,000,000 times. Do this until 60,000,000 to complete the array
    for (unsigned int roll = 1; roll <= 60000000; ++roll) 
    {
        size_t face = 1 + rand() % 6;
        ++frequency[face];
    }
    printf("%s%17s\n", "Face", "Frequency");
    

    // output frequency elements 1-6 in tabular format
    //This is to iterate through the array
    for (size_t face = 1; face < SIZE; ++face) 
    {
        printf("%4d%17d\n", face, frequency[face]);
    } 
} 
    
