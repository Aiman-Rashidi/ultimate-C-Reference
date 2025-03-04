// question does void function can get values because it doesnt return anythin

#include <stdio.h>

void display(int a, int b);

int main()
{
    int n1 = 3, n2 = 12;
    display(n1, n2);

    return 0;
}

void display(int a, int b)
{
    printf("Sum is : %d", a + b);
    int main( a);
}

// hence answer is yes
// void fn cant return any value
// but it can take any input from main and process it and can show output