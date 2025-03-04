#include <stdio.h>

int main()
{
    int i = 1, sum;

    while (i <= 10)
    {
        sum = sum + i;
        printf("%d\n", sum);
        i++;
    }

    printf("Sum is %d", sum);

    return 0;
}