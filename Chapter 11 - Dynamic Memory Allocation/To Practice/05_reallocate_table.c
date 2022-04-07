#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *table, num = 7;
    table = (int *)malloc(10 * (sizeof(int)));
    for (int i = 1; i <= 10; i++)
    {
        table[i] = num * i;
        printf("%d x %d = %d\n", num, i, table[i]);
    }
    table = realloc(table, 5 * sizeof(int));
    printf("Reallocate Success ! \n");
    for (int i = 11; i <= 15; i++)
    {
        table[i] = num * i;
        printf("%d x %d = %d\n", num, i, table[i]);
    }
    printf("Successfully printed table till 15\n");
    free(table);
    printf("Now cleaning the memory !");
    return 0;
}