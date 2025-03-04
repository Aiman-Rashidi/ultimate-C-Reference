#include <stdio.h>

int main()
{
    char st[] = {'H', 'A', 'R', 'R', 'Y', '\0'};
    for (int i = 0; i < 5; i++)
    {
        printf("%d indexed character is %c\n", i, st[i]);
    }

    return 0;
}