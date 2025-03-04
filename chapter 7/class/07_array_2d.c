#include <stdio.h>

int main()
{
    int arr[3][2];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("enter value for (%d, %d): ", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    arr[2][0] = 5;
    arr[2][1] = 6;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    // to check the memory structure of 2D array in c
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ; %u\n", arr[i][j], &arr[i][j]);
        }
    }

    return 0;
}