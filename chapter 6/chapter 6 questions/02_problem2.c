#include <stdio.h>

void display(int *);

void display(int *j_passed)
{
    printf("Value of j_passed is %d\n", j_passed);
    printf("Value at j_passed is %d\n", *j_passed);
    printf("Address of j_passed is %u\n", &j_passed); // pointer to pointer
}

int main()
{
    int i = 72;
    int *j = &i;

    printf("Address of i is %u\n", j);
    display(j);

    return 0;
}

