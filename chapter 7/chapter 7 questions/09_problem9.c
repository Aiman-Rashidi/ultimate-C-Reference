// #include <stdio.h>

// int main()
// {

//     int arr[2][2][2];

//     // for (int i = 0; i < 2; i++)
//     // {
//     //     for (int j = 0; j < 2; j++)
//     //     {
//     //         for (int k = 0; k < 2; k++)
//     //         {
//     //             printf("enter value for (%d, %d, %d): ", i, j, k);
//     //             scanf("%d", &arr[i][j][k]);
//     //         }
//     //     }
//     // }

//     arr[0][0][0] = 1;
//     arr[0][0][1] = 2;
//     arr[0][1][0] = 3;
//     arr[0][1][1] = 4;
//     arr[1][0][0] = 5;
//     arr[1][0][1] = 6;
//     arr[1][1][0] = 7;
//     arr[1][1][1] = 8;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 printf("value of (%d, %d, %d) is %d with address %u\n", i, j, k, arr[i][j][k], &arr[i][j][k]);
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[2][3][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}