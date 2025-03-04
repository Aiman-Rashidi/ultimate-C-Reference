#include <stdio.h>

int main(){

    if (1223){
        printf("Non Zeros are always considered as True\n");
    }
    if (3.333){
        printf("Non Zeros are always considered as True\n");
    }
    if ('c'){
        printf("Non Zeros are always considered as True\n");
    }
    if (0){
        printf("Non Zeros are always considered as True\n");
    }
    if (0.00){
        printf("Non Zeros are always considered as True\n");
    }


    return 0;
}