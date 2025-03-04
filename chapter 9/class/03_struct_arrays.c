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
    struct employee facebook[3];
    facebook[0].code = 1001;
    facebook[1].code = 1002;
    facebook[2].code = 1003;
    strcpy(facebook[0].name, "1Aiman");
    strcpy(facebook[1].name, "1Harry");
    strcpy(facebook[2].name, "1Cuarl");
    facebook[0].salary = 14.11;
    facebook[1].salary = 14.22;
    facebook[2].salary = 14.33;

    struct employee instagram[3];
    instagram[0].code = 2001;
    instagram[1].code = 2002;
    instagram[2].code = 2003;
    strcpy(instagram[0].name, "2Aiman");
    strcpy(instagram[1].name, "2Harry");
    strcpy(instagram[2].name, "2Cuarl");
    instagram[0].salary = 24.11;
    instagram[1].salary = 24.22;
    instagram[2].salary = 24.33;

    struct employee youtube[3];
    youtube[0].code = 3001;
    youtube[1].code = 3002;
    youtube[2].code = 3003;
    strcpy(youtube[0].name, "3Aiman");
    strcpy(youtube[1].name, "3Harry");
    strcpy(youtube[2].name, "3Cuarl");
    youtube[0].salary = 34.11;
    youtube[1].salary = 34.22;
    youtube[2].salary = 34.33;

    printf("1) Facebook Employee Details:- \n");
    printf("code: %d | name: %s | salary: %.2f \n", facebook[0].code, facebook[0].name, facebook[0].salary);
    printf("code: %d | name: %s | salary: %.2f \n", facebook[1].code, facebook[1].name, facebook[1].salary);
    printf("code: %d | name: %s | salary: %.2f \n", facebook[2].code, facebook[2].name, facebook[2].salary);
    printf("1) Instagram Employee Details:- \n");
    printf("code: %d | name: %s | salary: %.2f \n", instagram[0].code, instagram[0].name, instagram[0].salary);
    printf("code: %d | name: %s | salary: %.2f \n", instagram[1].code, instagram[1].name, instagram[1].salary);
    printf("code: %d | name: %s | salary: %.2f \n", instagram[2].code, instagram[2].name, instagram[2].salary);
    printf("1) Youtube Employee Details:- \n");
    printf("code: %d | name: %s | salary: %.2f \n", youtube[0].code, youtube[0].name, youtube[0].salary);
    printf("code: %d | name: %s | salary: %.2f \n", youtube[1].code, youtube[1].name, youtube[1].salary);
    printf("code: %d | name: %s | salary: %.2f \n", youtube[2].code, youtube[2].name, youtube[2].salary);

    printf("\n");

    struct empDetails aiman = {1, "Aiman", 10.11};
    printf("%s Employee Detials:- \n", aiman.name);
    printf("code: %d \nname: %s \nsalary: %.2f \n\n", aiman.code, aiman.name, aiman.salary);
    struct empDetails harry = {2, "Harry", 20.22};
    printf("%s Employee Detials:- \n", harry.name);
    printf("code: %d \nname: %s \nsalary: %.2f \n\n", harry.code, harry.name, harry.salary);
    struct empDetails cuarl = {3, "Cuarl", 30.33};
    printf("%s Employee Detials:- \n", cuarl.name);
    printf("code: %d \nname: %s \nsalary: %.2f \n\n", cuarl.code, cuarl.name, cuarl.salary);

    return 0;
}