// Delete an element from an array by shifting the remaining elements.
// Take both the Injecting And Deleting Values from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, c, d;

    printf("Enter The size of Array : ");
    scanf("%d", &n);

// Injecting values in the Array.
    printf("\n=/=/=/=/=/=/=/=/ Injecting Values into Array A =/=/=/=/=/=/=/=/=/=\n\n");

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Array A[%d] : ", i);
        scanf("%d", &a[i]);
    }

//  Printing the Injected Values.
    printf("\n=/=/=/=/=/=/=/=/ Original Array =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Array A[%d] = %d\t", i, a[i]);
    }

//  Updating the Array.
    printf("\n\n=/=/=/=/=/=/=/=/ Array Updation =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter the Index to be Deleted : ");
    scanf("%d", &c);

    for (int i = c; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    a[n--];

//  Array after Deletion.
    printf("\n=/=/=/=/=/=/=/=/ Array After Deletion =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Array A[%d] = %d\n", i, a[i]);
    }

    return 0;
}
