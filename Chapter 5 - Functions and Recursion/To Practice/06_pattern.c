#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int c = 1; c <= ((i * 2) - 1); c++)
        {
            printf("x ");
        }
        printf("\n");
    }

    return 0;
}