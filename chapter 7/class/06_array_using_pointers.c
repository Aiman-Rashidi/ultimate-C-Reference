#include <stdio.h>

int main()
{
    int marks[] = {1, 2, 3, 4};
    int *ptr1 = &marks[0]; // same as int *ptr1 = marks;

    for (int i = 0; i < 4; i++)
    {
        // printf("marks at index %d is %d\n", i, marks[i]);
        printf("marks at index %d is %d\n", i, *ptr1);
        ptr1++;
    }

    // int *ptr2 = &marks[3];
    // for (int i = 3; i >= 0; i--)
    // {
    //     // printf("marks at index %d is %d\n", i, marks[i]);
    //     printf("marks at index %d is %d\n", i, *ptr2);
    //     ptr2--;
    // }


    return 0;
}