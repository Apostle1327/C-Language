// W.A.P. To fild the greaest Number among 5 numbers.
// Take the Values of Numbers from the user, Must use Nested if-else.


#include<stdio.h>
#include<conio.h>

int main()

{
 int A, B, C, D, E;

 printf("Enter the Value of A : ");
 scanf("%d", &A);

 printf("Enter the Value of B : ");
 scanf("%d", &B);

 printf("Enter the Value of C : ");
 scanf("%d", &C);

 printf("Enter the Value of D : ");
 scanf("%d", &D);

 printf("Enter the Value of E : ");
 scanf("%d", &E);

 if(A>B)
 {
    if(A>C)
    {
        if(A>D)
        {
            if(A>E)
            {
                printf("\nThe Maximum Value is %d", A);
            }
            else
            {
                printf("\nThe Maximum Value is %d", E);
            }
        }
        else
        {
            if(D>E)
            {
                printf("\nThe Maximum Value is %d", D);
            }
            else
            {
                printf("The Maximum Value is %d", E);
            }
        }
    }
    else
    {
        if(C>D)
        {
            if(C>E)
            {
                printf("\nThe Maximum Value is %d", C);
            }
            else
            {
                printf("\nThe Maximum Value is %d", E);
            }
        }
        else
        {
            if(D>E)
            {
                printf("\nThe Maximum Value is %d", D);
            }
            else
            {
                printf("\nThe Maximum Value is %d", E);
            }
        }
    }
 } 
 else
 {
    if(B>C)
    {
        if(B>D)
        {
            if(B>E)
            {
                printf("\nThe Maximum Value is %d", B);
            }
            else
            {
                printf("\nThe Maximum Value is %d", E);
            }
        }
        else
        {
            if(D>E)
            {
                printf("\nThe Maximum Value is %d", D);
            }
            else
            {
                printf("\nThe Maximum Value is %d", E);
            }
        }
    }
    else
    {
        if (C>D)
        {
            if(C>E)
            {
                printf("\nThe Maximum Value is %d", C);
            }
            else
            {
                printf("\nThe Maximum Valus is %d", E);
            }
        }
        else
        {
            if(D>E)
            {
                printf("\nThe Maximum Valus is %d", D);
            }
            else
            {
                printf("\nThe Maximum Valus is %d", E);
            }
        }
        
    }
 }
 return 0;   
}