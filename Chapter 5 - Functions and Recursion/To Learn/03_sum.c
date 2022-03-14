#include <stdio.h>
int sum(int a, int b);
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main()
{
    int a, b;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d", sum(a, b));
    return 0;
}