#include <stdio.h>
int main()
{
    for (int row = 1; row <= 3; row++)
    {
        for (int column = 1; column <= (row * 2) - 1; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}