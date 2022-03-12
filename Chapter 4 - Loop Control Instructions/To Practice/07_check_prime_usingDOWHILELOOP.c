#include <stdio.h>
int main()
{
    int number, runner = 1, check = 0;
    printf("Enter the number to check for prime : ");
    scanf("%d", &number);
    do
    {
        if (number % runner == 0)
        {
            check++;
        }
        runner++;
    } while (runner <= number);
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