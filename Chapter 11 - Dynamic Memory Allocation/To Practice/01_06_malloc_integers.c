#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *integer;
    integer = (int *)malloc(6 * (sizeof(int)));
    for (int i = 0; i < 6; i++)
    {
        printf("Address of element%d is %d\n", i + 1, &integer[i]);
    }
    printf("Successfully created 6 memory blocks !");
    free(integer);
    return 0;
}