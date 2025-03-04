#include <stdio.h>

int main()
{

    int income;
    float tax;

    printf("Enter your Income: ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
        printf("No Tax Payable!");
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = ((income - 250000) * 0.05);
        printf("Tax Payable: %f", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = ((500000 - 250000) * 0.05) + ((income - 500000) * 0.2);
        printf("Tax Payable: %f", tax);
    }
    else if (income > 1000000)
    {
        tax = ((500000 - 250000) * 0.05) + ((1000000 - 500000) * 0.2) + ((income - 1000000) * 0.3);
        printf("Tax Payable: %f", tax);
    }

    return 0;
}