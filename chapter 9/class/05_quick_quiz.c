#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

void show(struct employee e_passed);

int main()
{
    struct employee e;

    e.code = 100;
    strcpy(e.name, "Aiman");
    e.salary = 100.11;

    show(e);

    return 0;
}

void show(struct employee e_passed)
{
    printf("%s Employee Details:- \n", e_passed.name);
    printf("code: %d \nname: %s \nsalary: %.2f \n", e_passed.code, e_passed.name, e_passed.salary);
}