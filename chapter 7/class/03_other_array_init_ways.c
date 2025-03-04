#include <stdio.h>

int main()
{
    // int cgpa[3] = {9, 8, 8};
    int cpga[] = {9, 8, 8};
    float num[] = {9, 8, 8};
    char character[] = {'a', 'b', 'c'};

    for (int i = 0; i < 3; i++)
    {
        printf("cgpa at index %d is %d\n", i, cpga[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("num at index %d is %f\n", i, num[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("char at index %d is %c\n", i, character[i]);
    }

    return 0;
}