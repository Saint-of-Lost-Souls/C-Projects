#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int x[] = {1, 2, 3, 4, 5};
    printf("sizeof(x):       %3llu\n", sizeof(x)); // Find the size in total memory
    printf("sizeof(x[0]):    %3llu\n", sizeof(x[0])); // Find the size of each element
    printf("sizeof(int):     %3llu\n", sizeof(int));
    printf("Array length:    %3llu\n\n", sizeof(x) / sizeof(x[0])); // Find the number of elements

    int8_t y[] = {1, 2, 3, 4, 5};
    printf("sizeof(y):       %3llu\n", sizeof(y));
    printf("sizeof(y[0]):    %3llu\n", sizeof(y[0])); 
    printf("sizeof(int8_t):  %3llu\n", sizeof(int8_t));
    printf("Array length:    %3llu\n\n", sizeof(y) / sizeof(y[0]));

    printf("\n\n");
    return EXIT_SUCCESS;
}
