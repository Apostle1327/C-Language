// W.A.P. to Find Even elements from the Array.
// Must use Pointer, Take the Values of Elements from the User.

#include <stdio.h>

int main ()

{
    int s;

    printf("Enter the Size of the Array : ");
    scanf("%d", &s);

    int a[s];

    printf("\nEnter the Elements of the Array : \n");
    
    for (int i = 0 ; i < s ; i++)
    {
        printf("Enter the Element %d : ", i);
        scanf("%d", &a[i]);
    }

    int *b;

    b = &a[0];

    printf("\nEven Elements in the Array are : \n");

    for (int i = 0; i < s ; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            printf("%d \n", *(a + i));
        }
    }

    return 0;
}
