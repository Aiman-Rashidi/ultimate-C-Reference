#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the value for %d place: ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("value at %d palce: %d\n", (i + 1), ptr[i]);
    }

    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the value for %d place: ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("value at %d palce: %d\n", (i + 1), ptr[i]);
    }

    return 0;
}