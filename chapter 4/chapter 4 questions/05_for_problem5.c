#include <stdio.h>

int main()
{
    int i, sum, till;
    // printf("Sum form 1 to : ");
    // scanf("%d", &till);

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("%d\n", sum);
    }

    printf("Total Sum is = %d", sum);

    return 0;
}