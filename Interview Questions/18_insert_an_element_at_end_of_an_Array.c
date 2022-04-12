#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int integer[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element%d  : ", i + 1);
        scanf("%d", &integer[i]);
    }
    printf("\nEnter the value which you want to insert at the end of this array : ");
    scanf("%d", &integer[size - 1]);
    for (int i = 0; i < size; i++)
    {
        printf("Value of element%d is %d\n", i + 1, integer[i]);
    }

    return 0;
}