#include <stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("aiman.txt", "r");
    // char ch = fgetc(ptr);
    // printf("%c", ch);

    ptr = fopen("aiman.txt", "a");
    fputc('!', ptr);
    fputc('\n', ptr);
    fputc('I', ptr);

    fclose(ptr);

    return 0;
}