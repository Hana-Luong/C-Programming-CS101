 #include <stdio.h>
//MUST INITIALIZE AN ARRAY
// any remaining elements => give them zero
// first element has to be 0 in order to initialize all the rest zero
//nt n[] = {1, 2, 3, 4, 5}; This is OK.

// function main begins program execution
int main(void)
{
    // use initializer list to initialize array n
    int n[5] = {32, 27, 64, 18, 95};

    printf("%s%13s\n", "Element", "Value");

    // output contents of array in tabular format
    for (size_t i = 0; i < 5; ++i) {
    printf("%7u%13d\n", i, n[i]);
    } 
} 