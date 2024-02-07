// W.A.P. to find Average and a Grade of a Student.
// Consider 5 Subjects. Assign out of 100 marks for each subject, Use conditions for evaluate grades based on average valuie.

#include <stdio.h>

int main()

{
    int english, maths, science, hindi, sanskrit, percentage, sum;
    float average;

// Injecting Marks of the Student.

    printf("Enter Marks for english : ");
    scanf("%d", &english);

    printf("Enter Marks for maths : ");
    scanf("%d", &maths);

    printf("Enter Marks for science : ");
    scanf("%d", &science);

    printf("Enter Marks for hindi : ");
    scanf("%d", &hindi);

    printf("Enter Marks for sanskrit : ");
    scanf("%d", &sanskrit);

    if (english > 100, maths > 100, science > 100, hindi > 100, sanskrit > 100)
    {
        printf("Please Enter marks in Required range.");
    }

    sum = (english + maths + science + hindi + sanskrit);

// Calculating the Average of Culmination of All Marks.

    average = sum / 5.0;
    printf("\nAverage of all Subjects is : %f\n", average);

// Calculating Overall Percentage of Student.

    percentage = (sum / 500.0) * 100;
    printf("\npercentage of Student is : %f\n", percentage);

// Deploying Conditions to Determine Grade of the Student.

    if (percentage >= 95)
    {
        printf("\nGrade of the Student is : A+\n");
    }
    else if (percentage >= 90)
    {
        printf("\nGrade of the Student is : A\n");
    }
    else if (percentage >= 80)
    {
        printf("\nGrade of the Student is : B\n");
    }
    else if (percentage >= 60)
    {
        printf("\nGrade of the Student is : C\n");
    }
    else if (percentage >= 50)
    {
        printf("\nGrade of the Student is : D\n");
    }
    else if (percentage <= 40)
    {
        printf("\nThe student has Failed the Exam");
    }

    return 0;
}