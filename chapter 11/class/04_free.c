#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int n;
    // printf("enter the number for array: ");
    // scanf("%d", &n);
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));

    // ptr[0] = 333;
    // ptr[1] = 444;

    // printf("Values befor free: \n");
    // printf("%d\n", ptr[0]);
    // printf("%d\n", ptr[1]);
    // printf("%d\n", ptr[2]);

    // free(ptr);

    // printf("Values after free: \n");
    // printf("%d\n", ptr[0]);
    // printf("%d\n", ptr[1]);
    // printf("%d\n", ptr[2]);

    int n;
    printf("enter the size for array: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 333;
    ptr[1] = 444;

    printf("values before free: \n");
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);

    free(ptr);

    printf("values after free: \n");
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);

    return 0;
}