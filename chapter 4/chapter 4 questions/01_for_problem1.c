#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        int table = n * i;
        printf(" %d x %d = %d \n", n, i, table);

        // printf(" %d x %d = %d \n", n, i, n * i);
    }

    return 0;
}