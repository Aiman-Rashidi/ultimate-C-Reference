#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr = (int *)malloc(n * sizeof(int));
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    return 0;
}