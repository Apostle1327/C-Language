// W.A.P. to print and find the sum of all elements of a given row & column from a 2D array.
// Take the Values of the Elements from the User.

#include <stdio.h>
#include <conio.h>

int main()

{
    int rows, cols, rowsNum, colsNum, rowsSum = 0, colsSum = 0;

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

// Getting the Row Num.
    printf("\n=/=/=/=/=/=/=/=/ Row =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter the Value of Row : ");
    scanf("%d", &rowsNum);

    if (rowsNum > rows)
    {
        printf("Enter Values within limit.");
    }

    printf("\nElements of the Said row : ");
    for ( int i = 0; i < cols; i++)
    {
        printf("%d ", a2[rowsNum][i]);
        rowsSum += a2[rowsNum][i];
    }

    printf("\nSum of The said Row is : %d", rowsSum);

    printf("\n=/=/=/=/=/=/=/=/ Coloum =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter the Value of Coloumn : ");
    scanf("%d", &colsNum);

    if (colsNum > cols)
    {
        printf("Enter Values within limit.");
    }

    printf("\nElements of the Said Coloumn : ");
    for ( int i = 0; i < rows; i++)
    {
        printf("%d ", a2[i][colsNum]);
        colsSum += a2[i][colsNum];
    }

    printf("\nSum of The said Coloumn is : %d", colsSum);


    return 0;
}
