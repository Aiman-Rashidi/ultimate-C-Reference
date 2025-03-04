#include <stdio.h>

struct vector
{
    int i;
    int j;
};

int main()
{
    struct vector v = {3, 4};

    printf("Vector Value = (%di, %dj)\n", v.i, v.j);

    return 0;
}