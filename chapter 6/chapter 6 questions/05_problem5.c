#include <stdio.h>

int *sum(int a, int b);
float *average(int a, int b);

int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("Sum is %d\n", s);
    return ptr;
    // return &s;
}

float *average(int a, int b)
{
    float avg = (a + b) / 2.0;    //typing casting also possible (example of type casteing: 2 is int :: 2.0 is float)
    float *ptr = &avg;
    printf("Averege is %f\n", avg);
    return ptr;
    // return &avg;
}

int main()
{
    int x = 4;
    int y = 6;
    int *ptr1;
    float *ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("Address of sum is %u and of average is %u\n", ptr1, ptr2);

    return 0;
}

// directrly returning address of variables is not possible becasue as the function returns the value it destroys the variable, Hence address of that variable is 0
// but if one want to return that address, he has to store that address in another variable within the function and return that variable(containing address)

