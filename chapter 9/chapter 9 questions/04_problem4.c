#include <stdio.h>

typedef struct complexNumber
{
    int real;
    int imaginary;
} Complex;

int main()
{
    Complex num = {2, 5};

    printf("value of Complex number is (%d + %di) \n", num.real, num.imaginary);

    return 0;
}