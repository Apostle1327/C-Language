// W.A.P. to to find cubes of all elements from a given 2D array.
// Must use Pointer with UDF, Take the values of elements from the user.

#include <stdio.h>
#include <conio.h>

// Declaring the Cube Function.

int elemCube(int rows, int cols, int c2[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            c2[i][j] = c2[i][j] * c2[i][j] * c2[i][j];
        }
    }
}

int main()

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
    float arrayAvg = 0;

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

// Calling the Function in Program.
printf("\n=/=/=/=/=/=/=/=/ Array after Cube of each Element =/=/=/=/=/=/=/=/=/=\n\n");

    elemCube(rows, cols, a2);

    for (int i = 0; i < rows; i++)

    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %3d ", a2[i][j]);
        }
        printf("\n");
    }

    return 0;
}