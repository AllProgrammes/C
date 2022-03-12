#include <stdio.h>
int main()
{
    // A small programme to incrmant and print the n 10 times
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}