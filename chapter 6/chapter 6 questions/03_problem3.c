#include <stdio.h>

void change_to_ten_times(int *);

void change_to_ten_times(int *i_passed)
{
    *i_passed = *i_passed * 10;
}

int main()
{

    int i = 7;
    int *j = &i;

    printf("Value of i initially is %d\n", i);

    change_to_ten_times(&i);
    // change_to_ten_times(j);

    printf("Value of i finally (without reurning anything from function(but value at that addres changed.)) is %d\n", i);

    return 0;
}