// #include <stdio.h>

// typedef struct complexNum
// {
//     int real;
//     int imaginary;
// } complex;

// void display(complex numPassed);

// int main()
// {
//     complex num[3];

//     for (int i = 0; i < 3; i++)
//     {
//         printf("enter real part of %d: ", (i + 1));
//         scanf("%d", &num[i].real);
//         printf("enter imaginary part of %d: ", (i + 1));
//         scanf("%d", &num[i].imaginary);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         display(num[i]);
//     }

//     return 0;
// }

// void display(complex numPassed)
// {
//     printf("complex: (%d + %di)\n", numPassed.real, numPassed.imaginary);
// }

#include <stdio.h>

typedef struct complexNum
{
    int real;
    int imaginary;
} complex;

void display(complex numPassed);

int main()
{
    complex num[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter real part of %d: ", (i + 1));
        scanf("%d", &num[i].real);
        printf("enter imaginary part of %d: ", (i + 1));
        scanf("%d", &num[i].imaginary);
        printf("\n");
        display(num[i]);
        printf("\n");
    }

    return 0;
}

void display(complex numPassed)
{
    printf("complex: (%d + %di) \n", numPassed.real, numPassed.imaginary);
}