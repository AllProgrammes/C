#include <stdio.h>
int main()
{
    float income;
    printf("Enter your annual income in lakhs : ");
    scanf("%f", &income);
    if (income < 2.5)
    {
        printf("Your dont have to pay any tax !");
    }
    else if (income <= 4.99 && income >= 2.5)
    {
        printf("You have to pay Rs %.2f as income tax ", ((income * 100000) * 5 / 100));
    }
    else if (income <= 9.99 && income >= 5)
    {
        printf("You have to pay Rs %.2f as income tax ", ((income * 100000) * 20 / 100));
    }
    else if (income >= 10)
    {
        printf("You have to pay Rs %.2f as income tax ", ((income * 100000) * 30 / 100));
    }
    return 0;
}