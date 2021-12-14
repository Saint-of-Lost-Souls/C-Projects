#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array: an ordered collection of items of the same type

    int io_count = 0;
    const int max_io_count = 5;
    float io_array[max_io_count]; // 5 items in list

    for (io_count = 0; io_count < max_io_count; io_count++)
    {   
        float value;
        printf("Enter an amount of money (0 to end):\n");
        printf("[%d/%d]", io_count + 1, max_io_count); // first time, 1/5 then 2/5 etc.
        scanf("%f", &value);

        if (value == 0)
        {
            break;
        }
        io_array[io_count] = value;
    }

    printf("--------------------------------------\n");
    float sum = 0;

    for (int i = 0; i < io_count; i++) // io_count corresponds to the number of elements the user has used so far
    {
        sum+= io_array[i];
        printf(" %d | $%9.2f\n", i, io_array[i]);
    }
    printf("\n");
    printf("SUM   $%9.2f\n", sum);

    printf("\n\n");
    return EXIT_SUCCESS;
}
