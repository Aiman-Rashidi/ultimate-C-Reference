#include <stdio.h>

int main()
{

    int i = 5;
    printf("value of i is %d\n", i);

    i = i + 5;
    printf("value of i is %d\n", i);

    printf("value of i is %d\n", i++);
    printf("value of i is %d\n", i);

    // i++ prints i first and then increment i (post increment operator)
    //++i increment i first and then prints i (pre increment operator)

    i += 2;                          // same as i = i + 2
    printf("value of i is %d\n", i); // 13

    i--;                               // 12
    printf("value of i is %d\n", i);   // 12
    printf("value of i is %d\n", i--); // prints 12 but decrement
    printf("value of i is %d\n", i);   // prints 11

    // -=, *=, /=, %=    also exists same working

    return 0;
}