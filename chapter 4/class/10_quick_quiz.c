#include <stdio.h>

int main(){

    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for( int i = 1; i <= n; i++){
        printf("value of i is %d\n", i);
    }

    return 0;
}