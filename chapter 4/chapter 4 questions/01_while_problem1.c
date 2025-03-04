#include <stdio.h>

int main()
{

    int i = 1, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        int table = n * i;
        printf(" %d x %d = %d \n", n, i, table);
        i++;
    }

    return 0;
}