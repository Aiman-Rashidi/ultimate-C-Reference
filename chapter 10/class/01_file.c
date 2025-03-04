#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("readFrom.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    printf("vlaue of num: %d\n", num);
    fscanf(ptr, "%d", &num);
    printf("new value of num: %d\n", num);

    fclose(ptr);

    return 0;
}