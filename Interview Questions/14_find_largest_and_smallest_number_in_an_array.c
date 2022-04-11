#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("\n");
    int number[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of num%d : ", i + 1);
        scanf("%d", &number[i]);
    }
    int largest = number[0], smallest = number[0];
    for (int i = 0; i < size; i++)
    {
        if (largest < number[i])
        {
            largest = number[i];
        }
        if (smallest > number[i])
        {
            smallest = number[i];
        }
    }
    printf("\nThe largest number is %d and the smallest number is %d", largest, smallest);
    return 0;
}