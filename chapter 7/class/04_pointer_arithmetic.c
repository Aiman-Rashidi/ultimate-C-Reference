#include <stdio.h>

int main()
{
    // // POINTER AIRTHEMATIC USING INTEGER
    // int a = 5;
    // int *ptr = &a;
    // printf("Value of a is %d\n", a);
    // printf("Address of a is %u\n", ptr);
    // printf("Address of a is %u\n", &a);
    // ptr++;
    // printf("Incremented ptr is %u\n", ptr);
    // printf("But address of a is still %u\n", &a);

    // // POINTER AIRTHEMATIC USING FLOAT
    // float a = 5;
    // float *ptr = &a;
    // printf("Value of a is %f\n", a);
    // printf("Address of a is %u\n", ptr);
    // printf("Address of a is %u\n", &a);
    // ptr++;
    // printf("Incremented ptr is %u\n", ptr);
    // printf("But address of a is still %u\n", &a);

    // POINTER AIRTHEMATIC USING CHAR
    char a = 'A';
    char *ptr = &a;
    printf("Value of a is %c\n", a);
    printf("Address of a is %u\n", ptr);
    printf("Address of a is %u\n", &a);
    ptr++;
    printf("Incremented ptr is %u\n", ptr);
    printf("But address of ptr is still %u\n", &a);

    return 0;
}