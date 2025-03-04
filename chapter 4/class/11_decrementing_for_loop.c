#include <stdio.h>

int main()
{

    int i, n = 5;

    for (i = n; i; i--) // i is +ve hence evaluted as true
    {
        printf("%d\n", i);
    }

    return 0;
}