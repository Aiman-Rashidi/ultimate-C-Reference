#include <stdio.h>
#include <string.h>

int main()
{
    char st1[6];
    scanf("%s", st1);
    printf("%s\n", st1);
    fflush(stdin);

    char st2[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &st2[i]);
        fflush(stdin);
    }
    st2[5] = '\0';

    for (int i = 0; i < 6; i++)
    {
        printf("%dth indexed cahr is %c\n", i, st2[i]);
    }

    printf("\nLenght of %s is %d \nLength of %s is %d\n\n", st1, strlen(st1), st2, strlen(st2));

    return 0;
}