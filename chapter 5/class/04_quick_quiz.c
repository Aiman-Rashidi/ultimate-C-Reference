#include <stdio.h>
#include <math.h>

int main()
{
    int side;

    printf("Side of Square: ");
    scanf("%d", &side);

    printf("Area of square with side %d is %.2f", side, pow(side, 2));
    // Pow function of Inbuilt Library <math.h> return float value

    return 0;
}