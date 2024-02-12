// Q.1 W.A.P. to perform the addition operation of two 2D arrays & store it in another array.
// Keep in mind that both array sizes must be the same, Take the element values from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int rows, cols;

// Defining the Dimensions of the Array.

    printf("Declare the Size of Rows : ");
    scanf("%d", &rows);

    printf("Declare the Size of Coloumns : ");
    scanf("%d", &cols);

// Injecting Elements into the Array.
    printf("\n=/=/=/=/=/=/=/=/ Injecting Values into Array 1 =/=/=/=/=/=/=/=/=/=\n\n");

    int A1[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Array1[%d][%d] : ", i, j);
            scanf("%d", &A1[i][j]);
        }
    }

    printf("\n=/=/=/=/=/=/=/=/ Injecting Values into Array 2 =/=/=/=/=/=/=/=/=/=\n\n");

    int A2[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Array2[%d][%d] : ", i, j);
            scanf("%d", &A2[i][j]);
        }
    }

// Printing the Arrays.
    printf("\n=/=/=/=/=/=/=/=/ Printing Array 1 =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ", A1[i][j]);
        }
        printf("\n");
    }

    printf("\n=/=/=/=/=/=/=/=/ Printing Array 2 =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ", A2[i][j]);
        }
        printf("\n");
    }

// Performing Addition of Both the Arrays.

    int A3[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            A3[i][j] = A1[i][j] + A2[i][j];
        }
        printf("\n");
    }

    printf("=/=/=/=/=/=/=/=/ Printing Array 3 (Addition of Both the Arrays) =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ", A3[i][j]);
        }
        printf("\n");
    }
}
