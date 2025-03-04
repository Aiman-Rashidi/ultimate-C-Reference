#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

int compareDates(date d1, date d2);

int main()
{
    date date1 = {15, 8, 2025};
    date date2 = {12, 8, 2025};

    int result = compareDates(date1, date2);

    if (result == 1)
    {
        printf("date 1 is after date 2\n");
    }
    else if (result == -1)
    {
        printf("date 1 is before date 2\n");
    }
    else
    {
        printf("Both dates are same\n");
    }

    return 0;
}

int compareDates(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else
    {
        if (d1.month > d2.month)
        {
            return 1;
        }
        else if (d1.month < d2.month)
        {
            return -1;
        }
        else
        {
            if (d1.day > d2.day)
            {
                return 1;
            }
            else if (d1.day < d2.day)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}