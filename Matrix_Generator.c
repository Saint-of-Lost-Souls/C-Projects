#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Generate an empty matrix

void matrixMaker(const int rows, const int cols)
{
    int matrix[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int upperLimit = 10;
    int rows, cols;

    printf("Enter the number of rows (-1 to exit): ");
    scanf("%d", &rows);

    if (rows == -1 || rows > upperLimit)
    {
        printf("Number not in range");
        return EXIT_SUCCESS;
    }

    printf("Enter the number of columns (-1 to exit): ");
        scanf("%d", &cols);
    
    if (cols == -1 || cols > upperLimit)
    {
        printf("Number not in range");
        return EXIT_SUCCESS;
    }
    else
    {
        matrixMaker(rows, cols);
    }

    printf("\n\n");
    return EXIT_SUCCESS;
}
