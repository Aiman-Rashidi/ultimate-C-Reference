#include <stdio.h>

#define print_type(var) _Generic((var), \
    int: "int", \
    float: "float", \
    char: "char", \
    default: "unknown")

int main(){

    int a = 10, b = 20;
    float c = 4.55, d = 3.75;

    float e = (int) c + (int) d;
    printf("Value of e is %f\n", e);
    printf("Type of e: %s\n", print_type(e));



    int n = 45;
    float m = 32.23;

    n = (int) m; // convert the data type to int
    printf("%d\n", n);

    return 0;
}