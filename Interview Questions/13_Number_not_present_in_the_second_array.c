#include <stdio.h>
int main()
{
    int array1[5], array2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number to be stored at place[%d] in array1: ", i + 1);
        scanf("%d", &array1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number to be stored at place[%d] in array2: ", i + 1);
        scanf("%d", &array2[i]);
    }
    printf("\n\nNumber not present in the second array :-\n");
    for (int forward = 0; forward < 5; forward++)
    {
        int count = 0;
        for (int reverse = 4; reverse >= 0; reverse--)
        {
            if (array1[forward] == array2[reverse])
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d \n", array1[forward]);
        }
    }
    return 0;
}