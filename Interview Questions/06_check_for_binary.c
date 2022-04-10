#include <stdio.h>
int main()
{
    int number, temp = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    while (number > 0)
    {
        temp = number % 10;
        if (temp != 0 && temp != 1)
        {
            printf("This is not a binary number.");
            break;
        }
        number = number / 10;
        if (number == 0)
        {
            printf("The is a binary number.");
        }
    }
    return 0;
}