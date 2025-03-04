#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Aiman";
    char c = 'A';
    int count = 0;

    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == c)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}