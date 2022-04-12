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
    printf("\n\nOdd numbers are :- \n");
    for (int i = 0; i < size; i++)
    {
        if (integer[i] % 2 != 0)
        {
            printf("%d\n", integer[i]);
        }
    }
    printf("\n\nEven numbers are :- \n");
    for (int i = 0; i < size; i++)
    {
        if (integer[i] % 2 == 0)
        {
            printf("%d\n", integer[i]);
        }
    }
    return 0;
}