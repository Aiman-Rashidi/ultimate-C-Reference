#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;

    ptr = fopen("file5.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("file5.txt", "w");
    fprintf(ptr, "%d", (num * 2));
    fclose(ptr);
    
    return 0;
}