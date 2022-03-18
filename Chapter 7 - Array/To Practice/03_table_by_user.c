#include <stdio.h>
int main()
{
    int number;
    int value[10];
    printf("Enter the number : ");
    scanf("%d", &number);
    for (int i = 0; i < 10; i++)
    {
        value[i] = number * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", number, (i + 1), value[i]);
    }
    return 0;
}