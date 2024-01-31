// W.A.P. to find the Length of an Array.
// Take the values of Size and Elements of Array from the User.

#include <stdio.h>
#include <conio.h>

// Main program beginning.

int main()

{
    int n, count = 0;

    printf("\nDeclare Size of the Array : ");
    scanf("%d", &n);

// Declaring the Array.

    int array[n];

// Assigning the Values in Array.

    for (int i = 0, count; i < n; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }

// Values of Each component.

    printf("\n=/=/=/=/=/=/=/=/ Array Values =/=/=/=/=/=/=/=/=/=/\n\n");

    for (int i = 0; i < n; i++)
    {
        count++;
        printf("array[%d] : %d \n", i, array[i]);
    }
// Length of Array.

    printf("\n=/=/=/=/=/=/=/=/ Array Length =/=/=/=/=/=/=/=/=/=/\n\n");

    printf("Length of Array : %d\n", count);

    return 0;
}
