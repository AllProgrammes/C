#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    b = b * a;
    a = b / a;
    b = b / a;
    printf("a = %d and b = %d", a, b);
    return 0;
}