#include <stdio.h>

int main()
{

    int year;

    printf("Enter the Year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap Year!");
    }
    else if (year % 100 == 0)
    {
        printf("Normal Year!");
    }
    else if (year % 4 == 0)
    {
        printf("Leap Year!");
    }
    else
    {
        printf("Normal Year!");
    }

    return 0;
}