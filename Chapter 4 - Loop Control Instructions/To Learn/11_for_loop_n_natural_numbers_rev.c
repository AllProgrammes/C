#include <stdio.h>
int main()
{
    // PRINT FIRST n NATURAL NUMBERS IN REVERSE ORDER
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}