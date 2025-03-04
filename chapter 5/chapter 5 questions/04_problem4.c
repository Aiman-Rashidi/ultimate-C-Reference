// #include <stdio.h>

// int fib(int n);

// int fib(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//     int n;
//     printf("Enter the Number: ");
//     scanf("%d", &n);

//     printf("Fib on %d place is %d", n, fib(n));

//     return 0;
// }

#include <stdio.h>

int fib(int n);

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    do
    {
        int n;
        printf("Enter the Number: ");
        scanf("%d", &n);

        printf("Fib at %d place is %d\n", n, fib(n));
    } while (1);

    return 0;
}

//  Write a program using recursion to calculate nth element of Fibonacci series.

// 0 1 1 2 3 5 8
// 1 2 3 4 5 6 7

// fib(6th) = fib(5th) + fib(4th)