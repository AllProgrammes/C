#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *integer, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    integer = (int *)malloc(n * (sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d : ", i + 1);
        scanf("%d", &integer[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of element%d is %d\n", i + 1, integer[i]);
    }
    return 0;
}