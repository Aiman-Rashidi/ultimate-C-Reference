#include <stdio.h>

int main()
{

    int i, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 10; i; i--) // i >= 1; also can be condition
    {
        int table = n * i;
        printf("%d\n", table);
    }

    return 0;
}