#include <stdio.h>
int main()
{
    int i = 1;
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}