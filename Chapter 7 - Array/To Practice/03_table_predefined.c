#include <stdio.h>
int main()
{
    int number = 5;
    int value[10];
    for (int i = 1; i <= 10; i++)
    {
        value[i] = number * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, value[i]);
    }
    return 0;
}