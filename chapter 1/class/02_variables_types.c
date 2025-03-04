#include <stdio.h>
#define print_type(var) _Generic((var), \
    int: "int",                         \
    float: "float",                     \
    char: "char",                       \
    default: "unknown")

int main()
{

    int a = 7;
    float b = 7.799;
    char c = 'c';

    printf("Value of a is %d\n", a);
    printf("Value of b is %f\n", b);
    printf("Value of b is %.3f\n", b);
    printf("Value of c is %c\n", c);

    printf("Type of a: %s\n", print_type(a));
    printf("Type of b: %s\n", print_type(b));
    printf("Type of c: %s\n", print_type(c));

    return 0;
}