#include <stdio.h>
int main()
{
    int integers[10];
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter any integer %d : ", i + 1);
        scanf("%d", &integers[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        if (integers[j] > 0)
        {
            positive++;
        }
        else if (integers[j] < 0)
        {
            negative++;
        }
    }
    printf("Thier are %d positive and %d negative integers", positive, negative);
    return 0;
}