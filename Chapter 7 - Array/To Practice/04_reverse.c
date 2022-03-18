#include <stdio.h>
void reverse(int numbers[], int numTotal);
void reverse(int numbers[], int numTotal)
{
    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", numbers[i]);
    }
}
int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(numbers, 10);
    return 0;
}