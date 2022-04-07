#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *integer;
    integer = (int *)malloc(6 * (sizeof(int)));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : ", i + 1);
        scanf("%d", &integer[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Value of element%d is %d\n", i + 1, integer[i]);
    }
    free(integer);
    return 0;
}