#include <stdio.h>

int main()
{
    int i = 1, sum;

    do
    {
        sum = sum + (8 * i);
        // printf("%d\n", sum);
        i++;
    } while (i <= 10);

    printf("Sum is %d", sum);

    return 0;
}