#include <stdio.h>
int sum(int num);
int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return sum(num - 1) + num;
    }
}
int main()
{
    int num;
    printf("Enter the value of n : ");
    scanf("%d", &num);
    printf("The sum of 1 to %d is : %d", num, sum(num));
    return 0;
}