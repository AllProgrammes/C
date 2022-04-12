#include <stdio.h>
int main()
{
    int size, odd_count = 0, even_count = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int integer[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element%d  : ", i + 1);
        scanf("%d", &integer[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (integer[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    printf("\n\nTotal Odd numbers are %d ,they are as follows:- \n", odd_count);
    for (int i = 0; i < size; i++)
    {
        if (integer[i] % 2 != 0)
        {
            printf("--> %d\n", integer[i]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (integer[i] % 2 == 0)
        {
            even_count++;
        }
    }
    printf("\n\nTotal Even numbers are %d ,they are as follows:- \n", even_count);
    for (int i = 0; i < size; i++)
    {
        if (integer[i] % 2 == 0)
        {
            printf("-> %d\n", integer[i]);
        }
    }
    return 0;
}