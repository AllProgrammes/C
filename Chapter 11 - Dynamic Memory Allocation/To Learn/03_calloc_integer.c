#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *test;
    test = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d\n", i + 1, test[i]);
    }
    // This will return 0 because calloc is a way of memory allocation in which value of each space is intialized by 0
    return 0;
}