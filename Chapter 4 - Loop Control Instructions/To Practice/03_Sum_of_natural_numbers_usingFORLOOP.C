#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        if (i == 10)
        {
            break; // did this just to print the correct value of i in my statement
        }
    }
    printf("Sum of %d natural numbers is %d", i, sum);
    return 0;
}