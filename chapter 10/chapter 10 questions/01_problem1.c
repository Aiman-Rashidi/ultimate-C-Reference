#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r");

    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("value of num: %d, %d and %d\n", num1, num2, num3);

    fclose(ptr);

    return 0;
}