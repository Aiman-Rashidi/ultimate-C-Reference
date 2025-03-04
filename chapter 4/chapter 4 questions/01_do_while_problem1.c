#include <stdio.h>

int main()
{

    int i = 1, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    do
    {
        int table = n * i;
        printf(" %d x %d = %d \n", n, i, table);
        i++;
    } while (i <= 10);

    return 0;
}