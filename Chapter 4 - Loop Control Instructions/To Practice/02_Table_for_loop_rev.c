#include <stdio.h>
int main()
{
    int i = 1;
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}