#include <stdio.h>
int main()
{
    int number, reverse = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    int check = number;
    while (check != 0)
    {
        reverse = reverse * 10 + check % 10;
        check = check / 10;
    }
    if (number == reverse)
    {
        printf("%d is a palindrome number.", number);
    }
    else if (number != reverse)
    {
        printf("%d is not a palindrome number.", number);
    }
    return 0;
}