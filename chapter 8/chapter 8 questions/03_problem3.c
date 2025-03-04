#include <stdio.h>

int strlen(char[]);

int strlen(char strPassed[])
{
    char c = strPassed[0];

    int i = 0;
    while (c != '\0')
    {
        c = strPassed[i];
        i++;
    }

    int count = i - 1;
    return count;
}

int main()
{
    char str[] = "AimanRashidi";

    printf("%d\n", strlen(str));

    return 0;
}