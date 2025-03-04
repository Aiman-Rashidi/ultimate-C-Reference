#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    // float *ptr = (float *)malloc(n * sizeof(float));
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 11.101;
    ptr[1] = 22.220;
    ptr[2] = 33.331;
    ptr[3] = 44.447;
    ptr[4] = 55.555;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);

    return 0;
}