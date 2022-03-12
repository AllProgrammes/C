#include <stdio.h>
int main()
{
    int factorial = 1, number;
    printf("Enter the number : ");
    scanf("%d", &number);
    int i = 1;
    while (i <= number)
    {
        factorial = factorial * number;
        i++;
    }
    printf("%d! is = %d", number, factorial);
    return 0;
}