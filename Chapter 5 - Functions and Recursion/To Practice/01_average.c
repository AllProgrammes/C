#include <stdio.h>
int average(int a, int b, int c);
int average(int a, int b, int c)
{
    int average = (a + b + c) / 3;
    return average;
}
int main()
{
    int a, b, c;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nThe average of 3 numbers is %d", average(a, b, c));
    return 0;
}