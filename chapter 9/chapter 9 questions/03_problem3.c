#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[10];
    float salary;
} emp;

int main()
{
    emp e1;
    emp *ptr1 = &e1;
    e1.code = 100;
    strcpy(e1.name, "Aiman");
    e1.salary = 100.11;
    printf("code: %d | name: %s | salary: %.2f \n", e1.code, e1.name, e1.salary);
    printf("code: %d | name: %s | salary: %.2f \n", (*ptr1).code, (*ptr1).name, (*ptr1).salary);
    printf("code: %d | name: %s | salary: %.2f \n", ptr1->code, ptr1->name, ptr1->salary);

    emp e2;
    emp *ptr2 = &e2;

    e2.code = 200;
    strcpy(e2.name, "Harry");
    e2.salary = 200.22;

    // (*ptr2).code = 200;
    // strcpy((*ptr2).name, "Harry");
    // (*ptr2).salary = 200.22;

    // ptr2->code = 200;
    // strcpy(ptr2->name, "Harry");
    // ptr2->salary = 200.22;

    printf("code: %d | name: %s | salary: %.2f \n", e2.code, e2.name, e2.salary);
    printf("code: %d | name: %s | salary: %.2f \n", (*ptr2).code, (*ptr2).name, (*ptr2).salary);
    printf("code: %d | name: %s | salary: %.2f \n", ptr2->code, ptr2->name, ptr2->salary);

    return 0;
}