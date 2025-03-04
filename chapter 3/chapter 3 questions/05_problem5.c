#include <stdio.h>

int main()
{

    char c;
    printf("Enter your Character: ");
    scanf("%c", &c);

    if (c >= 97 && c <= 122)    //use ASCII values
    {
        printf("It is a Lower Case(%c)", c);
    }
    else
    {
        printf("It is not a Lower Case");
    }

    return 0;
}