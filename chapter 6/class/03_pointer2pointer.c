#include <stdio.h>

int main()
{
    int i = 7;
    int *j = &i;
    int **k = &j;

    printf("Value of i is %d\n", i);
    printf("Address of i is %u\n", &i);
    printf("Address of i is %d\n", j);
    printf("Value of i is %d\n", *j);

    printf("Value of i is %d\n", *(&i));

    printf("Value of i is %d\n", **(k));
    printf("Value of i is %d\n", **(&j));

    return 0;
}

