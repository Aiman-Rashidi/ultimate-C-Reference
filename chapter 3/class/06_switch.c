#include <stdio.h>

int main()
{

    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("4\n");
        break;
    default:
        printf("Nothing Matched");
    }

    return 0;
}