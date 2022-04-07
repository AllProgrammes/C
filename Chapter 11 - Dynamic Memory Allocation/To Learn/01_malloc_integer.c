#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *integer;
    // printf("The size of int in my computer is %d",sizeof(int));
    integer = (int *)malloc(6 * sizeof(int)); // This helps us to dynamically allocate 6 integer in my memory
    // here i have got 6 integer space but it will not occupy space unless used
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : ", i + 1);
        scanf("%d", &integer[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i + 1, integer[i]);
    }

    return 0;
}