#include <stdio.h>

int main()
{
    int i = 10, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    do
    {
        int table = n * i;
        printf("%d\n", table);
        i--;
    } while (i >= 1); // also only i can be written because when it get -ve means false hence loop will exit

    return 0;
}
