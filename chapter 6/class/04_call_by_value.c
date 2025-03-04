#include <stdio.h>

int change(int);

int change(int num_passed)
{
    printf("Passed number is %d\n", num_passed);
    num_passed = 7;
    printf("Value of num_passed in change function is %d\n", num_passed);
    printf("Address of num_passed in chnage function is %u\n", &num_passed);
}

int main()
{
    int num = 5;

    printf("Value of num before change function is %d\n", num);
    printf("Address of num before change function is %u\n", &num);

    change(num);

    printf("But Value of num after change function is %d\n", num);
    printf("Address of num before change function is %u\n", &num);

    return 0;
}

// call by value cant change values in main function as only copies of variable are sent to the function
// thats why both variables have different addresses