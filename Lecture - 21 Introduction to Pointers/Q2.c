// W.A.P. to swap two variables using Pointers.
// Must use Pointers, Take the values of variables from the user.

#include <stdio.h>

int main()

{
    int x, y;

    printf("Enter the value of X : ");
    scanf("%d", &x);

    printf("Enter the value of Y : ");
    scanf("%d", &y);

    int *ptr;
    ptr = &x;
    int z = *ptr;
    *ptr = y;
    y = z;

    printf("\n=/=/=/=/=/=/=/=/ After Swapping =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Value of X after swapping : %d", x);
    printf("\nValue of Y after swapping : %d", y);

    return 0;
}