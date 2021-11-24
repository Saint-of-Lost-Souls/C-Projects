#include <stdio.h>
#include <stdlib.h>

#define LEN 5 // talking to the pre-processor, will find ever ocurrance of LEN and replace it with 5
// int y[LEN] = {1, 2, 3}  // An array with a variable cannot be intialised, must be defined- see above^

int main()
{

    // Declare array with 5 elements

    int a[LEN];

    // Before moving on, we need 'a' to contain all 1's
    for (int i = 0; i < LEN; i++)
    {
        a[i] = 1; // Set all [indexes] to 1
    }

    // Array initialisation from brace-closed lists

    int x[] = {1, 2, 3, 4, 5}; // x has type int[5] and holds {1, 2, 3, 4, 5}
    int y[LEN] = {1, 2, 3};    // y has type int[5] and holds {1, 2, 3, 0, 0}
    int z[LEN] = {0};          // z has type int[5] and holds {0, 0, 0, 0, 0}

    // Array intialisation with designators (sparse array)

    int w[LEN] = {[1] = 1, [3] = 1};              // w has type int[5] and holds {0, 1, 0, 1, 0}
    int q[LEN] = {[1] = 3, [LEN - 1] = 5};        // q has type int[5] and holds {0, 3, 0, 0, 5}
    int t[10] = {[0] = 5, 4, [10 - 3] = 3, 2, 1}; // t has type int[5] and holds {5, 4, 0, 3, 2, 1}

    printf("T Array= %d", t[7]);

    printf("\n\n");
    return EXIT_SUCCESS;
}
