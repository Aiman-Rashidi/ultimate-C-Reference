#include <stdio.h>

int main()
{

    int i;

    for (i = 0; i < 7; i++)
    {
        if (i == 5)
        {
            // printf("break loop without saying anything!"); // exit the loop now
            // break;
            printf("5th one skipped\n"); // skip this itetration & continue to next itetration now
            continue;
        }

        printf("i is %d\n", i);
    }

    printf("For Loop is done now!");

    return 0;
}