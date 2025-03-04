#include <stdio.h>

int main()
{

    int marks1, marks2, marks3;

    printf("Enter the Marks(1): ");
    scanf("%d", &marks1);
    printf("Enter the Marks(2): ");
    scanf("%d", &marks2);
    printf("Enter the Marks(3): ");
    scanf("%d", &marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are Fail! Because less than 33 rule.");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You are Fail! Because of less than 40%% rule.");
    }
    else
    {
        printf("You are Pass!");
    }

    return 0;
}