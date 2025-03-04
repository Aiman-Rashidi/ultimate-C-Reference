#include <stdio.h>

int main()
{

    int i = 10, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    while (i >= 1) // also only i can be written because when it get -ve means false hence loop will exit
    {
        int table = n * i;
        printf("%d\n", table);
        i--;
    }

    return 0;
}