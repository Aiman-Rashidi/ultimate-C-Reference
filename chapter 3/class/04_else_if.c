#include <stdio.h>

int main(){

    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);

    if ( age > 60 ){
        printf("Drive Saftely as you are a senior citizen");
    }
    else if ( age > 18 && age < 50 ){
        printf("Go and Drive Crazy!");
    }
    else if ( age > 10 ){
        printf("You should wait as you are not an Adult");
    }
    else {
        printf("You are not grown enough");
    }

    return 0;
}