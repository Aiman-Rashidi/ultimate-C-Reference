#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    // int *ptr = (int *)malloc(n * sizeof(int));
    int *ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;
    ptr[5] = 5;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}