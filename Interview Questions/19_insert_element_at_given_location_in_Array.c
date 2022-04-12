#include <stdio.h>
int main()
{
    int size, replace_location, new_value;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int integer[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element%d  : ", i + 1);
        scanf("%d", &integer[i]);
    }
    printf("Enter the location at which you want to insert new value : ");
    scanf("%d", &replace_location);
    if (replace_location > size)
    {
        printf("Enter a valid location !!");
    }
    else
    {
        printf("Enter new value : ");
        scanf("%d", &new_value);
        integer[replace_location - 1] = new_value;
        for (int i = 0; i < size; i++)
        {
            printf("Value of element%d is %d\n", i + 1, integer[i]);
        }
    }
    return 0;
}