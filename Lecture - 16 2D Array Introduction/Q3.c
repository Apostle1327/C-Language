// W.A.P. to find the sum of diagonal elements from a given 2D array.
// Take the element values from the user.

#include <stdio.h>
#include <conio.h>

int main ()

{
    int rows, cols;
    float sum = 0.0;

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

// Identifying the Diagonal Elements of the Array & Performnig the Addition of all the Diagonal Elements.
    printf("\n=/=/=/=/=/=/=/=/ Diagonal Elements of the Array =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ( i == j )
            {
                printf("%d \t", a2[i][j]);
                sum += a2[i][j];
            }
        }
    }

// Performing Addition of the Diagonal Elements.
    printf("\n\n=/=/=/=/=/=/=/=/ Addition of All Diagonal Elements =/=/=/=/=/=/=/=/=/=\n\n");

            printf("The Addition of all the Diagonal Elements is : %f", sum);

    return 0;
}
