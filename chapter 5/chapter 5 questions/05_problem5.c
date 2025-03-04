#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);

    return 0;
}

//  What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);


// answer) some compilers evalute this type of stament form (left to right) and some evalutes (right to left)
// a = 4, ++a = 5, a++ = 5(but gets incremented)    (L to R)
// a++ = 4(but incremented 5), ++a = (5 incremented to 6 then printed), a = 6 printed  


// my compiler follows right to left evalution but prints in written manner 
// 6 6 4
