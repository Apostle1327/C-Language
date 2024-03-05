// W.A.P. to create an Employee Record System.
// Use an Array of objects for a given N number of employees using structure.

#include <stdio.h>

// Defining the Structure.
struct Employee
{
    int emp_Id, emp_Age, emp_Experience;
    char emp_Name[50], emp_Role[50], emp_City[50], emp_Institution[50];
};

int main()

{
    int empNum;

    printf("Enter the Number of Employees you want to Feed in the System : ");
    scanf("%d", &empNum);

// Injecting data in the Database.
    struct Employee employees[empNum];

    for (int i = 0; i < empNum; i++)
    {
        printf("\nEnter the details of Employee %d : \n", i + 1);

        printf("Employee ID : ");
        scanf("%d", &employees[i].emp_Id);

        printf("Employee Name : ");
        scanf("%s", &employees[i].emp_Name);

        printf("Employee Age : ");
        scanf("%d", &employees[i].emp_Age);

        printf("Employee Role : ");
        scanf("%s", &employees[i].emp_Role);

        printf("Employee Experience : ");
        scanf("%d", &employees[i].emp_Experience);

        printf("Employee City : ");
        scanf("%s", &employees[i].emp_City);

        printf("Employee Institution : ");
        scanf("%s", &employees[i].emp_Institution);
    }

    printf("\n=/=/=/=/=/=/=/=/ Employee Records =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < empNum; i++)
    {
        printf("\nEmployee : %d \n", i + 1);
        printf("ID : %d \n", employees[i].emp_Id);
        printf("Name : %s \n", employees[i].emp_Name);
        printf("Age : %d \n", employees[i].emp_Age);
        printf("Role : %s \n", employees[i].emp_Role);
        printf("Experience : %d \n", employees[i].emp_Experience);
        printf("City : %s \n", employees[i].emp_City);
        printf("Institution : %s \n", employees[i].emp_Institution);
    }

    return 0;
}