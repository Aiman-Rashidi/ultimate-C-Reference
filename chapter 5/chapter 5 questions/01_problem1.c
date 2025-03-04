#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    int a, b, c;
    printf("First Number: ");
    scanf("%d", &a);
    printf("Second Number: ");
    scanf("%d", &b);
    printf("Third Number: ");
    scanf("%d", &c);

    float avg = average(a, b, c);
    printf("Average of %d, %d and %d is %f", a, b, c, avg);

    return 0;
}
// Write a program using function to find average of three numbers.