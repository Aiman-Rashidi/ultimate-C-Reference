#include <stdio.h>

int main()
{

    int i = 0;

    do
    {
        printf("value of i is %d\n", i);
        i++; // increment till 4
    } while (i < 4);

    do
    {
        printf("Atleast Run once!\n");
        i++; // increment once gives 5
    } while (i > 10); // dont get executed again

    printf("value of i is %d\n", i); // print 5 in end

    return 0;
}