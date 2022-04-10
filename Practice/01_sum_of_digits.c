#include <stdio.h>
int main()
{
    int integer, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &integer);
    while (integer != 0)
    {
        sum = sum + integer % 10;
        integer = integer / 10;
    }
    printf("The sum of its digit is %d", sum);
    return 0;
}