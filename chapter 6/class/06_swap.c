#include <stdio.h>

void swap(int *, int *);

void swap(int *a_passed, int *b_passed)
{
    int temp;
    temp = *a_passed;
    *a_passed = *b_passed;
    *b_passed = temp;
}

int main()
{
    int a = 4, b = 5;

    printf("before swapping(a:%d::b:%d)\n", a, b);
    swap(&a, &b);
    printf("before swapping(a:%d::b:%d)\n", a, b);

    return 0;
}

// #include <stdio.h>

// void *swap(int *, int *);

// void *swap(int *c, int *d)
// {
//     int temp;
//     temp = *c;
//     *c = *d;
//     *d = temp;
// }

// int main()
// {
//     int a = 4, b = 5;

//     printf("a = %d and b = %d (before swaping)\n", a, b);
//     swap(&a, &b);
//     printf("a = %d and b = %d (after swaping)\n", a, b);

//     return 0;
// }