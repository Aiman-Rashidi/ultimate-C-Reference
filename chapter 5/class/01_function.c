#include <stdio.h>

// Function Declaration
int addTwoNumbers(int a, int b);

int main()
{
    int num1, num2;
    printf("NUM1: ");
    scanf("%d", &num1);
    printf("NUM2: ");
    scanf("%d", &num2);

    // Function Call
    int sum = addTwoNumbers(num1, num2);
    printf("SUM: %d\n", sum);

    // printf("%d", addTwoNumbers(2, 3));  // can also do it in this manner

    return 0;
}

// Fucntion Defination
int addTwoNumbers(int a, int b)
{
    // Return the Sum
    return a + b;
}

// #include <stdio.h>

// int addTwoNumbers(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int num1, num2;
//     printf("NUM1: ");
//     scanf("%d", &num1);
//     printf("NUM2: ");
//     scanf("%d", &num2);

//     int sum = addTwoNumbers(num1, num2);
//     printf("SUM: %d\n", sum);

//     return 0;
// }