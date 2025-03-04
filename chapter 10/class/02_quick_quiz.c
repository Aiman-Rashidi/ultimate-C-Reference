#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("readFrom.txt", "r");

    if (ptr == NULL)
    {
        printf("404 : File not Found!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("value of num: %d\n", num);
        fprintf(ptr, "%d", &num);
        printf("value of num: %d\n", num);
    }

    fclose(ptr);

    return 0;
}