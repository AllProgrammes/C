#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *element;
    element = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of element%d :", i + 1);
        scanf("%d", &element[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The value of element%d is %d\n", i + 1, element[i]);
    }
    printf("Success !\n");
    free(element);
    printf("Memory Released !\n");
    printf("Now the value of element1 is %d,which is a vauge value.", element[1]);
    return 0;
}