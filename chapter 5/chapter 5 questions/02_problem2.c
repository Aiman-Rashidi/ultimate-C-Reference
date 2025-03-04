#include <stdio.h>

float c2f(float c);

float c2f(float c)
{
    return ((9.0 * c) / 5.0) + 32;
}

int main()
{
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    // printf("%.2f", c);

    printf("%f Celsius is %.2f Fahrenheit\n", c, c2f(c));

    return 0;
}
// Write a function to convert Celsius temperature into Fahrenheit.