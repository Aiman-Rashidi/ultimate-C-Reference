#include <stdio.h>

int main(){

    int int_value;
    float float_value;

    printf("Enter the Integer: ");
    scanf("%d", &int_value);
    printf("Integer is %d\n", int_value);

    printf("Enter the Float: ");
    scanf("%f", &float_value);
    printf("Integer is %f\n", float_value);
    printf("Integer is %.3f", float_value);

    return 0;
}