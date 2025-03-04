#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

struct empDetails
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    // struct employee facebook[3];
    // facebook[0].code = 1001;
    // facebook[1].code = 1002;
    // facebook[2].code = 1003;
    // strcpy(facebook[0].name, "1Aiman");
    // strcpy(facebook[1].name, "1Harry");
    // strcpy(facebook[2].name, "1Cuarl");
    // facebook[0].salary = 14.11;
    // facebook[1].salary = 14.22;
    // facebook[2].salary = 14.33;
    struct employee facebook[3] = {{1001, "1Aiman", 14.11},
                                   {1002, "1Harry", 14.22},
                                   {1003, "1Cuarl", 14.33}};

    // struct employee instagram[3];
    // instagram[0].code = 2001;
    // instagram[1].code = 2002;
    // instagram[2].code = 2003;
    // strcpy(instagram[0].name, "2Aiman");
    // strcpy(instagram[1].name, "2Harry");
    // strcpy(instagram[2].name, "2Cuarl");
    // instagram[0].salary = 24.11;
    // instagram[1].salary = 24.22;
    // instagram[2].salary = 24.33;
    struct employee instagram[3] = {{2001, "2Aiman", 24.11},
                                    {2002, "2Harry", 24.22},
                                    {2003, "2Cuarl", 24.33}};

    // struct employee youtube[3];
    // youtube[0].code = 3001;
    // youtube[1].code = 3002;
    // youtube[2].code = 3003;
    // strcpy(youtube[0].name, "3Aiman");
    // strcpy(youtube[1].name, "3Harry");
    // strcpy(youtube[2].name, "3Cuarl");
    // youtube[0].salary = 34.11;
    // youtube[1].salary = 34.22;
    // youtube[2].salary = 34.33;
    struct employee youtube[3] = {{3001, "3Aiman", 34.11},
                                  {3002, "3Harry", 34.22},
                                  {3003, "3Cuarl", 34.33}};

    printf("1) Facebook Employee Details:- \n");
    // printf("code: %d | name: %s | salary: %.2f \n", facebook[0].code, facebook[0].name, facebook[0].salary);
    // printf("code: %d | name: %s | salary: %.2f \n", facebook[1].code, facebook[1].name, facebook[1].salary);
    // printf("code: %d | name: %s | salary: %.2f \n", facebook[2].code, facebook[2].name, facebook[2].salary);
    for (int i = 0; i < 3; i++)
    {
        printf("code: %d | name: %s | salary: %.2f \n", facebook[i].code, facebook[i].name, facebook[i].salary);
    }
    printf("2) Instagram Employee Details:- \n");
    // printf("code: %d | name: %s | salary: %.2f \n", instagram[0].code, instagram[0].name, instagram[0].salary);
    // printf("code: %d | name: %s | salary: %.2f \n", instagram[1].code, instagram[1].name, instagram[1].salary);
    // printf("code: %d | name: %s | salary: %.2f \n", instagram[2].code, instagram[2].name, instagram[2].salary);
    for (int i = 0; i < 3; i++)
    {
        printf("code: %d | name: %s | salary: %.2f \n", instagram[i].code, instagram[i].name, instagram[i].salary);
    }
    printf("3) Youtube Employee Details:- \n");
    // printf("code: %d | name: %s | salary: %.2f \n", youtube[0].code, youtube[0].name, youtube[0].salary);
    // printf("code: %d | name: %s | salary: %.2f \n", youtube[1].code, youtube[1].name, youtube[1].salary);
    // printf("code: %d | name: %s | salary: %.2f \n", youtube[2].code, youtube[2].name, youtube[2].salary);
    for (int i = 0; i < 3; i++)
    {
        printf("code: %d | name: %s | salary: %.2f\n", youtube[i].code, youtube[i].name, youtube[i].salary);
    }

    printf("\n");

    // struct empDetails harry = {100, "Harry", 100.1};
    // printf("%s Employee Details:- \n", harry.name);
    // printf("code: %d \nname: %s \nsalary: %.2f \n\n", harry.code, harry.name, harry.salary);
    // struct empDetails aiman = {100, "Aiman", 100.1};
    // printf("%s Employee Details:- \n", aiman.name);
    // printf("code: %d \nname: %s \nsalary: %.2f \n\n", aiman.code, aiman.name, aiman.salary);
    // struct empDetails Cuarl = {100, "Cuarl", 100.1};
    // printf("%s Employee Details:- \n", Cuarl.name);
    // printf("code: %d \nname: %s \nsalary: %.2f \n\n", Cuarl.code, Cuarl.name, Cuarl.salary);

    struct empDetails employees[] = {{1, "Aiman", 1.01},
                                     {2, "Harry", 2.02},
                                     {3, "Cuarl", 3.03}};

    int size = sizeof(employees) / sizeof(employees[0]);
    // printf("size of : %d", size);

    for (int i = 0; i < size; i++)
    {
        printf("%s Employee Details:- \n", employees[i].name);
        printf("code: %d \nname: %s \nsalary: %.2f \n\n", employees[i].code, employees[i].name, employees[i].salary);
    }

    return 0;
}

// #include <stdio.h>

// struct empDetails
// {
//     int code;
//     char name[10];
//     float salary;
// };

// int main()
// {
//     struct empDetails facebook[3] = {{101, "1Aiman", 100.11},
//                                    {102, "1Harry", 100.22},
//                                    {103, "1Cuarl", 100.33}};
//     struct empDetails instagram[3] = {{201, "2Aiman", 200.11},
//                                     {202, "2Harry", 200.22},
//                                     {203, "2Cuarl", 200.33}};
//     struct empDetails youtube[3] = {{301, "3Aiman", 300.11},
//                                   {302, "3Harry", 300.22},
//                                   {303, "3Cuarl", 300.33}};

//     printf("1) Facebook Employees Details:- \n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("code: %d | name: %s | salary: %.2f \n", facebook[i].code, facebook[i].name, facebook[i].salary);
//     }

//     printf("1) Instagram Employees Details:- \n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("code: %d | name: %s | salary: %.2f \n", instagram[i].code, instagram[i].name, instagram[i].salary);
//     }

//     printf("1) Youtube Employees Details:- \n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("code: %d | name: %s | salary: %.2f \n", youtube[i].code, youtube[i].name, youtube[i].salary);
//     }

//     printf("\n");

//     struct empDetails employees[] = {{1, "Aiman", 100.11},
//                                      {2, "Harry", 200.22},
//                                      {3, "Cuarl", 300.33}};

//     int size = sizeof(employees) / sizeof(employees[0]);

//     for (int i = 0; i < size; i++)
//     {
//         printf("%s Employee Details:- \n", employees[i].name);
//         printf("code: %d \nname: %s \nsalary: %.2f \n\n", employees[i].code, employees[i].name, employees[i].salary);
//     }

//     return 0;
// }