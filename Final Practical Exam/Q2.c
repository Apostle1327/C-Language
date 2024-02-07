// W.A.P. to find the Average of all Elements in a 2D array.
// Use a Function to add the values, Take the values of all Operands from the User.

#include <stdio.h>

// Defining the Function.

float avg(int row, int column)
    {

// Injectinig values in the Array.

        int array[row][column];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Array[%d][%d]: ", i, j);
                scanf("%d", &array[i][j]);
            }
        }

// Printing the Injected Values.

        printf("Array:\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d\t", array[i][j]);
            }
            printf("\n");
        }

// Performing addition of The Injected Values.

        int total = row * column;
        int sum = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                sum += array[i][j];
            }
        }

        return (float)sum / total;
    }

int main()
{
    int rows, columns;

// Defining the Size of Array.

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

// Calling the Funtion.

    printf("Average: %.2f\n", avg(rows, columns));

    return 0;
}
