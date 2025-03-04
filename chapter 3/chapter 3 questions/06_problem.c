#include <stdio.h>

int main()
{

    int n1, n2, n3, n4;

    printf("Enter 1st Number: ");
    scanf("%d", &n1);
    printf("Enter 2nd Number: ");
    scanf("%d", &n2);
    printf("Enter 3rd Number: ");
    scanf("%d", &n3);
    printf("Enter 4th Number: ");
    scanf("%d", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("%d is Greatest!", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("%d is Greatest!", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("%d is Greatest!", n3);
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3)
    {
        printf("%d is Greatest!", n4);
    }

    return 0;
}