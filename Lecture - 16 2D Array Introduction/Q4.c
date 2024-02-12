// Q.4 Write a Program to print and find the sum of all boundary elements from a given 2D array.
// Take the element values from the user.

#include <Stdio.h>
#include <conio.h>

int main()
{
    int rows, cols;
    int sum = 0;

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

// Identifying the Outer Border Elements of the Array.
    printf("\n=/=/=/=/=/=/=/=/ Outer Border Elements of The Array =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ( i == 0 || i == (rows, cols) - 1 || j == 0 || j == (rows, cols) - 1)
            {
                printf("%2d ", a2[i][j]);
                sum += a2[i][j];
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

// Printing addition of the Outer border Elements.

    printf("\nAddition of all the Outer elements is : %d", sum);

    return 0;
}
