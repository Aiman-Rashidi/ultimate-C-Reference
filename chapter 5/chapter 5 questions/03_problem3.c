#include <stdio.h>

float force(float mass);

float force(float mass)
{
    return mass * 9.8;
}

int main()
{
    float mass;
    printf("Enter Mass : ");
    scanf("%f", &mass);

    printf("Force exerted by the mass %.2fKg is %.2fN\n", mass, force(mass));

    return 0;
}
// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2.