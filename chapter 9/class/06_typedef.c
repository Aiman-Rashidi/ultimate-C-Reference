#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

// typedef struct employee
// {
//     int code;
//     char name[10];
//     float salary;
// } emp;

int main()
{
    typedef int aiman;
    aiman a = 7;
    printf("value of a is %d\n", a);

    struct employee e;
    struct employee *ptr;
    ptr = &e;
    e.code = 100;
    strcpy(e.name, "aiman");
    e.salary = 100.11;
    printf("code: %d | name: %s | salary: %.2f \n", e.code, e.name, e.salary);
    printf("code: %d | name: %s | salary: %.2f \n", (*ptr).code, (*ptr).name, (*ptr).salary);
    printf("code: %d | name: %s | salary: %.2f \n", ptr->code, ptr->name, ptr->salary);

    // typedef struct employee emp;
    // emp e;
    // emp *ptr = &e;
    // e.code = 100;
    // strcpy(e.name, "Aiman");
    // e.salary = 100.11;
    // printf("code: %d | name: %s | salary: %.2f \n", e.code, e.name, e.salary);
    // printf("code: %d | name: %s | salary: %.2f \n", (*ptr).code, (*ptr).name, (*ptr).salary);
    // printf("code: %d | name: %s | salary: %.2f \n", ptr->code, ptr->name, ptr->salary);

    // emp e;
    // emp *ptr = &e;
    // e.code = 100;
    // strcpy(e.name, "Aiman");
    // e.salary = 100.11;
    // printf("code: %d | name: %s | salary: %.2f \n", e.code, e.name, e.salary);
    // printf("code: %d | name: %s | salary: %.2f \n", (*ptr).code, (*ptr).name, (*ptr).salary);
    // printf("code: %d | name: %s | salary: %.2f \n", ptr->code, ptr->name, ptr->salary);

    return 0;
}