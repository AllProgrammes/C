#include <stdio.h>
int main()
{
    int number, check = 0;
    printf("Enter the number to check for prime : ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            check++;
        }
    }
    if (check == 2)
    {
        printf("%d is a prime number.", number);
    }
    else
    {
        printf("%d is not a prime number.", number);
    }
    return 0;
}