#include <stdio.h>

int main()
{
    int i, sum;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + (8 * i);
        // printf("%d\n", sum);
    }

    printf("Sum is %d", sum);

    return 0;
}