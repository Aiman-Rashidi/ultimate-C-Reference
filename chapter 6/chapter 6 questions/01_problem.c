#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i;

    printf("Address of i is %u\n", j);
    printf("Address of i is %u\n", &i);

    printf("Value at address is %d\n", i);
    printf("Value at address is %d\n", *j);
    printf("Value at address is %d\n", *(&i));

    return 0;
}