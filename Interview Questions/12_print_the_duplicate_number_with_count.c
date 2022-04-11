#include <stdio.h>
int main()
{
    int number[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number to be stored at place[%d] : ", i + 1);
        scanf("%d", &number[i]);
    }
    for (int forward = 0; forward < 10; forward++)
    {
        int count = 0;
        for (int reverse = 9; reverse >= 0; reverse--)
        {
            if (number[forward] == number[reverse])
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("%d have occured %d times.\n", number[forward], count);
        }
    }
    return 0;
}