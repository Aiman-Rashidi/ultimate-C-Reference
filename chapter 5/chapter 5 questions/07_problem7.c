#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

// 0, 1, 3 (line index)
// 1, 3, 5 (odd number series)    n
// 1, 2, 3 (line number)          2n+1