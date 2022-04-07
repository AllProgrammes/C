#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    // Allocating n numbers of memory dynamically
    ptr = (int *)malloc(n * (sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d\n", i + 1, ptr[i]);
    }
    printf("Want to enter more element ? How much more ?Enter your answer below \n");
    scanf("%d", &n);

    // Reallocating more n numbers of memory dynamically
    printf("Reallocate Success ! \n");
    ptr = realloc(ptr, n * (sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    printf("Memory Released !\n");
    return 0;
}