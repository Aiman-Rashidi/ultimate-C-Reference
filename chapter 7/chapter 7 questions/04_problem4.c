#include <stdio.h>

int main()
{
    int n, table[10];
    printf("enter number: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", table[i]);
    }

    return 0;
}