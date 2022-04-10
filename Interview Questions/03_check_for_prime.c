#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        printf("%d is not a prime number.", number);
    }
    else
        printf("%d is a prime number.", number);
    return 0;
}