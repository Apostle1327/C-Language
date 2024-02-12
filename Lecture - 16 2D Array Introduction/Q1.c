// Q.1 W.A.P. to find the average of a given 2D array.
// Take the element values from the user.

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
            printf(" %d ", a2[i][j]);
        }
        printf("\n");
    }

// Finding the Average of all Array elements.

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arrayAvg += a2[i][j];
        }
    }

// Printing the Average.
    printf("\n=/=/=/=/=/=/=/=/ Average of Array Elements =/=/=/=/=/=/=/=/=/=\n");

    arrayAvg /= (rows * cols);

    printf("\nAverage of the given Array Elements is : %f", arrayAvg);

    return 0;
}