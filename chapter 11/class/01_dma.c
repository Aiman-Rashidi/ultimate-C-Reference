#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number for array: ");
    scanf("%d", &n);
    // int arr[n];  //not allowed by many compilers

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 333;
    ptr[1] = 444;
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]); //prints garbage vlaue because malloc used

    return 0;
}