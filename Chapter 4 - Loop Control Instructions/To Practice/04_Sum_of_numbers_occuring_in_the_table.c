#include <stdio.h>
int main()
{
    int i = 1;
    int number, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++)
    {
        sum = sum + (number * i);
    }
    printf("Sum of %dx1....%dx10 is %d", number, number, sum);
    return 0;
}