#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];

    printf("value at place 1 is %d and its address is %u\n", arr[0], &arr[0]);
    printf("value at place 1 is %d and its address is %u\n", *ptr, ptr);

    printf("vlaue at place 3 is %d and its address is %u\n", *(ptr + 2), (ptr + 2));

    return 0;
}