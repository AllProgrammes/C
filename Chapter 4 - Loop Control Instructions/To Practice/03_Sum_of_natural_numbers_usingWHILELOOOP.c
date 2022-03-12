#include <stdio.h>
int main()
{
    int sum = 0, i;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of %d natural numbers is %d", i, sum);
    return 0;
}