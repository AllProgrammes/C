#include <stdio.h>
int main()
{
    int size, temp_size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("\n");
    temp_size = size - 1;
    int real_array[size], reverse[temp_size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element%d of Array : ", i + 1);
        scanf("%d", &real_array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        reverse[temp_size] = real_array[i];
        temp_size--;
    }
    printf("\nReverse Successfull ! \n\n");
    for (int i = 0; i < size; i++)
    {
        real_array[i] = reverse[i];
        printf("The value of element%d in Array is %d \n", i + 1, real_array[i]);
    }
    return 0;
}