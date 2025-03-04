#include <stdio.h>

int main()
{

    int marks;
    char grade;

    printf("Enter your Marks: ");
    scanf("%d", &marks);

    if (marks > 100)
    {
        printf("Invalid Marks!");
    }
    else if (100 >= marks && marks >= 90)
    {
        printf("A\t");
        grade = 'A';
        printf("The Greade is: %c", grade);
    }
    else if (90 > marks && marks >= 80)
    {
        printf("B\t");
        grade = 'B';
        printf("The Greade is: %c", grade);
    }
    else if (80 > marks && marks >= 70)
    {
        printf("C\t");
        grade = 'C';
        printf("The Greade is: %c", grade);
    }
    else if (70 > marks && marks >= 60)
    {
        printf("D\t");
        grade = 'D';
        printf("The Greade is: %c", grade);
    }
    else if (60 > marks && marks >= 50)
    {
        printf("E\t");
        grade = 'E';
        printf("The Greade is: %c", grade);
    }
    else if (50 > marks && marks >= 0)
    {
        printf("F\t");
        grade = 'F';
        printf("The Greade is: %c", grade);
    }
    else
    {
        printf("There was no Negative Marking in paper!");
    }

    return 0;
}