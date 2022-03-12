#include <stdio.h>
int main()
{
    // PRINT FIRST n NATURAL NUMBERS
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}