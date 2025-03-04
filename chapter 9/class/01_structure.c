#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1, e2;

    e1.code = 1;
    strcpy(e1.name, "Aiman");
    e1.salary = 100.11;

    e2.code = 2;
    strcpy(e2.name, "Harry");
    e2.salary = 200.22;

    printf("code: %d | name: %s | salary: %.2f \n", e1.code, e1.name, e1.salary);
    printf("code: %d | name: %s | salary: %.2f \n", e2.code, e2.name, e2.salary);

    return 0;
}

// #include <stdio.h>

// struct employee
// {
//     int code;
//     char name[10];
//     float salary;
// };

// int main()
// {
//     struct employee e = {0};

//     printf("code: %d | name: %s | salary: %.2f \n", e.code, e.name, e.salary);

//     return 0;
// }