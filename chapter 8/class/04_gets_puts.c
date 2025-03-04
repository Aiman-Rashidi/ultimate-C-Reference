#include <stdio.h>

int main()
{
    char st[30];

    printf("Enter multi line string: ");
    gets(st);

    printf("%s", st);
    // puts(st);
    printf("next line");

    return 0;
}