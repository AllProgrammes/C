#include <stdio.h>
int factorial(int x);
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return factorial(x - 1) * x;
    }
}
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("The factorial of %d is %d", number, factorial(number));
    return 0;
}