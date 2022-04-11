#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int count = 0, missing[size];
    int integer[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of place%d in array : ", i + 1);
        scanf("%d", &integer[i]);
        if (integer[i] != (i + 1))
        {
            missing[count] = i + 1;
            count++;
        }
    }
    if (count == 1)
    {
        printf("\nThe missing value is ");
    }
    else
        printf("\nThe missing values are ");
    for (int i = 0; i < count; i++)
    {
        if (i == (count - 1) && count != 1)
        {
            printf("& %d.", missing[i]);
        }
        else if (i == (count - 1) && count == 1)
        {
            printf("%d.", missing[i]);
        }
        else if (i == (count - 2))
        {
            printf("%d ", missing[i]);
        }
        else if (i < (count - 2))
        {
            printf("%d,", missing[i]);
        }
    }
    return 0;
}