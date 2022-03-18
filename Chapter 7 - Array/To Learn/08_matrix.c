#include <stdio.h>
int main()
{
    int matrix[3][2];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("Enter %d %d : ", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("%d\t", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}