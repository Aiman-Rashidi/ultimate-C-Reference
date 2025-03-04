#include <stdio.h>

int main()
{
    FILE *ptr1;
    ptr1 = fopen("file3_1.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("file3_2.txt", "w");

    char ch;
    while (1)
    {
        ch = fgetc(ptr1);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}