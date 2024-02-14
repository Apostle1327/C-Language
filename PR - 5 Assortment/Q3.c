// W.A.P. to find the transpose matrix of a given 2D array.
// Take the Values of the Elements from the User.

#include <stdio.h>
#include <conio.h>

int main ()

{
    int rows, cols;

// Defining the Dimensions of the Array.
    printf("Declare the Size of Rows : ");
    scanf("%d", &rows);

    printf("Declare the Size of Coloumns : ");
    scanf("%d", &cols);

// Injecting Elements into the Array.
    printf("\n=/=/=/=/=/=/=/=/ Injecting Values into 2d Array =/=/=/=/=/=/=/=/=/=\n\n");

    int a2[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Array2[%d][%d] : ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }

// Printing the Array.
    printf("\n=/=/=/=/=/=/=/=/ Printing the Array =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %2d ", a2[i][j]);
        }
        printf("\n");
    }

// Transposing the Matrix.
    printf("\n=/=/=/=/=/=/=/=/ Transposing the Matrix =/=/=/=/=/=/=/=/=/=\n\n");

    for ( int i = 0; i < cols; i++)
    {
        for ( int j = 0; j < rows; j++)
        {
            printf(" %2d ", a2[j][i]);
        }
        printf("\n");
    }

    return 0;
}