#include <stdio.h>

int main(){

    int i = 72;
    int *j = &i;
    int **k = &j;

    printf("Value of i is %d\n", i);
    printf("Value of i is %d\n", *j);
    printf("Value of i is %d\n", **k);

    return 0;
}
