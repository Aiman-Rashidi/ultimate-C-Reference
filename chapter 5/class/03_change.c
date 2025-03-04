#include <stdio.h>

int change(int a);

int main()
{
    int b = 22;
    change(b); // misnomer because it is not changing the value of b because a copy of b is passed to function change
    printf("b is still %d\n", b);

    return 0;
}

int change(int a)
{
    a = 77;
    // printf("a is %d\n", a);
    // return 0;
    return a;
}