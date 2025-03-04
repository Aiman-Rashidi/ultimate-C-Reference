#include <stdio.h>

int main(){

    int age = 15;

    if ( age > 10 ){
        printf("Your age is greater than 10!\n");
    }
    if ( age % 5 == 0){
        printf("Your age is multiple of 5!");
    }
    else {
        printf("Your age is not the multiple of 5!");
    }

    return 0;
}