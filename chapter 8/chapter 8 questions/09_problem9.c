#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Aiman";
    char c = 'A';
    int present = 0; // initially does not contains!

    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == c)
        {
            present = 1;
            break;
        }
    }

    if (present)
    {
        printf("YES! present!");
    }
    else
    {
        printf("NO! not present!");
    }

    return 0;
}