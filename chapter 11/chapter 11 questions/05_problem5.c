#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table_of = 4;
    
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = table_of * (i + 1);
    }
    printf("Table: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("\n\n");

    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = table_of * (i + 1);
    }
    printf("Table: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}