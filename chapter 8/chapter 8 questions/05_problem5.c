#include <stdio.h>

int mystrlen(char[]);
void mystrcpy(char[], char[]);

int mystrlen(char stPassed[])
{
    char c = stPassed[0];

    int i = 0;
    while (c != '\0')
    {
        c = stPassed[i];
        i++;
    }

    int count = i - 1;
    return count;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{
    char source[] = "Aiman";
    char target[6];
    mystrcpy(target, source);
    printf("%s and %s\n", target, source);
    return 0;
}