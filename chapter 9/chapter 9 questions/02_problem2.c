#include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2);

int main()
{
    struct vector v1 = {3, 4};
    struct vector v2 = {4, 5};

    struct vector v3 = sumVector(v1, v2);

    printf("Vector Sum: (%di, %dj) + (%di, %dj) = (%di, %dj)\n", v1.i, v1.j, v2.i, v2.j, v3.i, v3.j);

    return 0;
}

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.i = v1.i + v2.i;
    result.j = v1.j + v2.j;
    return result;
}

// #include <stdio.h>

// typedef struct vector
// {
//     int i;
//     int j;
// } vector;

// vector sumVector(vector v1, vector v2);

// int main()
// {
//     vector v1 = {3, 4};
//     vector v2 = {4, 5};

//     vector v3 = sumVector(v1, v2);

//     printf("(%di, %dj) + (%di, %dj) = (%di, %dj) \n", v1.i, v1.j, v2.i, v2.j, v3.i, v3.j);

//     return 0;
// }

// vector sumVector(vector v1, vector v2)
// {
//     vector result;
//     result.i = v1.i + v2.i;
//     result.j = v2.i + v2.j;
//     return result;
// }