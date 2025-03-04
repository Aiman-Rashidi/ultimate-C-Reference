#include <stdio.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1, e2, e3;

    printf("enter 1st employee code: ");
    scanf("%d", &e1.code);
    printf("enter 1st employee name: ");
    scanf("%s", &e1.name);
    printf("enter 1st employee salary: ");
    scanf("%f", &e1.salary);

    printf("\n");

    printf("enter 2nd employee code: ");
    scanf("%d", &e2.code);
    printf("enter 2nd employee name: ");
    scanf("%s", &e2.name);
    printf("enter 2nd employee salary: ");
    scanf("%f", &e2.salary);

    printf("\n");

    printf("enter 3rd employee code: ");
    scanf("%d", &e3.code);
    printf("enter 3rd employee name: ");
    scanf("%s", &e3.name);
    printf("enter 3rd employee salary: ");
    scanf("%f", &e3.salary);

    printf("\n");

    printf("code: %d | name: %s | salary: %.2f \n", e1.code, e1.name, e1.salary);
    printf("code: %d | name: %s | salary: %.2f \n", e2.code, e2.name, e2.salary);
    printf("code: %d | name: %s | salary: %.2f \n", e3.code, e3.name, e3.salary);

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
//     struct employee e[3];

//     for (int i = 0; i < 3; i++)
//     {
//         printf("enter detials of employee e%d: \n", (i + 1));

//         printf("code: ");
//         scanf("%d", &e[i].code);
//         printf("name: ");
//         scanf("%s", &e[i].name);
//         printf("salary: ");
//         scanf("%f", &e[i].salary);

//         printf("\n");
//     }

//     printf("Employee Details:- \n");
//     for (int i = 0; i < 3; i++)
//     {
//         // printf("%s Employee Details:- \n", e[i].name);
//         printf("code: %d | name: %s | salary: %.2f \n", e[i].code, e[i].name, e[i].salary);
//     }

//     return 0;
// }