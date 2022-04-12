#include <stdio.h>
int main()
{
    int size, max_integer = 0, max_frequency = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int integer[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d  : ", i);
        scanf("%d", &integer[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (integer[i] == integer[j])
            {
                count++;
                if (count > max_frequency)
                {
                    max_frequency = count;
                    max_integer = integer[i];
                }
            }
        }
    }
    printf("\n\nThe number which has occured maximum times is %d with frequency of %d", max_integer, max_frequency);
    return 0;
}