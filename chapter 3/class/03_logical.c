#include <stdio.h>

int main(){

    int a = 10, b = 1;

    if ( a == 10 && b ==1){
        printf("a and b are 10 and 1\n");
    }

    if ( a == 10 ){
        printf("a is 10\n");
        if ( b == 1 ){
            printf("a and b are 10 and 1\n");
        }
        else {
            printf("a is 10 but b is not 1");
        }
    }


    int c = 3, d = 5;

    if ( c == 3 || d == 4 ){
        printf("either c is 3 or d is 4\n");
    }

    if ( c != 100 ){
        printf("C is not 100");
    }

    return 0;
}