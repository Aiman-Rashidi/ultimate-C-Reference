#include <stdio.h>

int main()
{
    int n = 5;
    int not_prime = 0;

    if (n >= 0)
    {
        if (n == 0 || n == 1)
        {
            printf("%d is not prime", n);
            not_prime = 1;
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0 && n != 2)
                {
                    not_prime = 1;
                    break;
                }
            }
        }
    }
    else
    {
        printf("Enter number greater than 0!");
    }

    if (not_prime)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }

    return 0;
}







// #include <stdio.h>

// int main()
// {
//     int doIt = 1;

//     do
//     {

//         int n;
//         printf("Enter the Number: ");
//         scanf("%d", &n);
//         int not_prime = 0; // initially it is assumed that number is prime

//         if (n == 0 || n == 1)
//         {
//             not_prime = 1;
//         }
//         else if (n == -1)
//         {
//             printf("Process Deactivation...");
//             break;
//         }
//         else
//         {
//             for (int i = 2; i < n; i++)
//             {
//                 if (n % i == 0 && n != 2)
//                 {
//                     not_prime = 1;
//                 }
//             }
//         }

//         if (not_prime)
//         {
//             printf("%d is not prime\n\n", n);
//         }
//         else
//         {
//             printf("%d is prime\n\n", n);
//         }

//     } while (doIt = 1);
//     return 0;
// }