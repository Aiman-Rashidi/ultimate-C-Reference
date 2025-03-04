#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("writeTo.txt", "w");
    int num = 33;
    char ch = '\n';
    fprintf(ptr, "%d", num);
    fprintf(ptr, "%c", ch);
    int num1 = 44;
    fprintf(ptr, "%d", num1);
    fprintf(ptr, "%c", ch);
    float fl = 13.333;
    fprintf(ptr, "%.2f", fl);
    fprintf(ptr, "%c", ch);

    char name[] = "aiman";
    // int size = sizeof(name) - 1;
    for (int i = 0; i < 5; i++)
    {
        fprintf(ptr, "%c", name[i]);
    }
    fprintf(ptr, "%c", ch);
    fprintf(ptr, "%c", ch);

    // ptr = fopen("writeTO.txt", "a");
    // int num = 33;
    // char ch = '\n';
    // fprintf(ptr, "%d", num);
    // fprintf(ptr, "%c", ch);
    // int num1 = 44;
    // fprintf(ptr, "%d", num1);
    // fprintf(ptr, "%c", ch);
    // float fl = 13.333;
    // fprintf(ptr, "%.2f", fl);
    // fprintf(ptr, "%c", ch);

    // char name[] = "aiman";
    // // int size = sizeof(name) - 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     fprintf(ptr, "%c", name[i]);
    // }
    // fprintf(ptr, "%c", ch);
    // fprintf(ptr, "%c", ch);

    fclose(ptr);

    return 0;
}