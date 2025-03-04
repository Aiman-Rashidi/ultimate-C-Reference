#include <stdio.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e;
    e.code = 100;
    struct employee *ptr = &e;
    // struct employee *ptr;
    // ptr = &e;

    printf("code: %d \n", e.code);
    printf("code: %d \n", (*ptr).code);
    printf("code: %d \n", ptr->code);

    return 0;
}