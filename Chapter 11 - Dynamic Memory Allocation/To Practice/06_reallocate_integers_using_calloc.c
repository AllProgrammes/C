#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *integer;
    integer = (int *)calloc(5, (sizeof(int)));
    for (int i = 0; i < 5; i++)
    {
        printf("Address of element%d is %d\n", i + 1, &integer[i]);
    }
    printf("\nSuccessfully created 5 memory blocks !\n");

    integer = realloc(integer, 10 * (sizeof(int)));
    for (int i = 5; i < 15; i++)
    {
        printf("Address of element%d is %d\n", i + 1, &integer[i]);
    }
    printf("\nSuccessfully created 10 more memory blocks !");
    free(integer);
    return 0;
}