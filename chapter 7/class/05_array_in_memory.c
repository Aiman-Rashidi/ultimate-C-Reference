#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter marks at index %d: ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("address of index %d is %u\n", i, &marks[i]);
    }

    return 0;
}