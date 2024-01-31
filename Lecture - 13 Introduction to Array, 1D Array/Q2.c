// W.A.P. to find the Average of a 1D Array.
// Take the values of Size and Elements of Array from the User.

#include <stdio.h>
#include <conio.h>

// Main program beginning.

int main()

{
    int i, n, count = 0, sum = 0;

    printf("\nDeclare Size of the Array : ");
    scanf("%d", &n);

// Declaring the Array.

    int array[n];

// Assigning the Values in Array.

    for (i = 0, count; i < n; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }

// Values of Each component.

    printf("\n=/=/=/=/=/=/=/=/ Array Values =/=/=/=/=/=/=/=/=/=\n\n");

    for (i = 0, count; i < n; i++)
    {
        count++;
        printf("array[%d] : %d \n", i, array[i]);
    }
// Sum of Array.

    printf("\n=/=/=/=/=/=/=/=/ Array Addition =/=/=/=/=/=/=/=/=/=\n\n");

    
    for (i = 0, count; i < n; i++)
    {
        sum += array[i];
    }

    printf("sum of array values is : %d\n", sum);

    printf("Average of array values is : %d", sum / count);

    return 0;
}