#include <stdio.h>

char *slice(char[], int, int);

char *slice(char st[], int m, int n)
{
    char *ptr1 = &st[m];
    char *ptr2 = &st[n];

    // printf("value at ptr1 is %c\n", *ptr1);
    // printf("value at ptr2 is %c\n", *ptr2);
    // printf("%d\n", n);

    st = ptr1;
    st[n] = '\0';
    return st;
}

int main()
{
    char st[] = "AimanRashidi";

    printf("%s\n", slice(st, 1, 7));

    return 0;
}