#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr = (int *)malloc(n * sizeof(int));   // creates space for 5 arrays
    ptr = (int *)realloc(ptr, 10 * sizeof(int)); // modifies space for 5 arrays
    return 0;
}