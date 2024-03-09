// W.A.P. to create Student Record System for 5 students using structure.

#include <stdio.h>

// Defining the Structure.
struct student
{
    int stu_Id, stu_Age, stu_Standard;
    char stu_Name[50], stu_Course[50], stu_City[50], stu_Institute[50];
};

int main()

{

// Injecting Data in the Database
    struct student students[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the details of the Student %d : \n", i + 1);

        printf("Student ID : ");
        scanf("%d", &students[i].stu_Id);

        printf("Student Name : ");
        scanf("%s", &students[i].stu_Name);

        printf("Student Age : ");
        scanf("%d", &students[i].stu_Age);

        printf("Student Course : ");
        scanf("%s", &students[i].stu_Course);

        printf("Student City : ");
        scanf("%s", &students[i].stu_City);

        printf("Student Institute : ");
        scanf("%s", &students[i].stu_Institute);
    }

    printf("\n=/=/=/=/=/=/=/=/ Student Records =/=/=/=/=/=/=/=/=/=\n\n");
    int index ;
    printf("Enter the index : ");
    scanf("%d",&index);

    for (int i = index; i == index; i++)
        {
            printf("\nStudent : %d \n", i + 1);
            printf("ID : %d \n", students[i].stu_Id);
            printf("Name : %s \n", students[i].stu_Name);
            printf("Age : %d \n", students[i].stu_Age);
            printf("Course : %s \n", students[i].stu_Course);
            printf("City : %s \n", students[i].stu_City);
            printf("Institute : %s \n", students[i].stu_Institute);
        }

    return 0;
}