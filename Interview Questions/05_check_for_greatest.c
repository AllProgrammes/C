#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    printf("Enter num3 : ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the greatest among all.", num1);
    }
    else if (num1 < num2 && num2 > num3)
    {
        printf("%d is the greatest among all.", num2);
    }
    else if (num1 < num3 && num2 < num3)
    {
        printf("%d is the greatest among all.", num3);
    }
    return 0;
}