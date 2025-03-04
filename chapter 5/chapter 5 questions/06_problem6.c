#include <stdio.h>

int sum_natural(int n);

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum_natural(n - 1);
}

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("Sum till %d is %d", n, sum_natural(n));

    return 0;
}

// #include <stdio.h>

// int sum_natural(int n);

// int sum_natural(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + sum_natural(n - 1);
// }

// int main()
// {
//     do
//     {
//         int n;
//         printf("Enter the Number: ");
//         scanf("%d", &n);

//         printf("Sum till %d is %d\n", n, sum_natural(n));
//     } while (1);

//     return 0;
// }

// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

// 1 2 3 4  5  6  7
// 1 3 6 10 15 21 28

// sum(n) = sum(n-1) + n;