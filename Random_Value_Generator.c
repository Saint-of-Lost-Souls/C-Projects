#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Generate a fixed size matrix with random values

    int rows, cols, i, j;

    printf("Enter the rows of the matrix: ");
    scanf("%d", &rows);
    printf("\n");
    printf("Enter the columns of the matrix: ");
    scanf("%d", &cols);
    printf("\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("|%02d| ", rand() % 100);
        }
        printf("\n");
    }

    printf("\n\n");
    return EXIT_SUCCESS;
}
