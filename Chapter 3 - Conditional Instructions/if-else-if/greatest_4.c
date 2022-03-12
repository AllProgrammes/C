#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("ENTER NUM 1 :\n");
    scanf("%d", &num1); // taking input as num1 and num2 from the user and storing the values to num1 and num2
    printf("ENTER NUM 2 :\n");
    scanf("%d", &num2); // taking input as num1 and num2 from the user and storing the values to num1 and num2
    printf("ENTER NUM 3 :\n");
    scanf("%d", &num3);
    printf("ENTER NUM 4 :\n");
    scanf("%d", &num4);
    // using if else condition to do the judgement
    if (num1 > num2 && num1 > num3 && num1 > num4) // do i need to explain this?
    {
        printf("%d is the greatest number", num1); // if the if condition becomes true then compiler will print this statement
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("%d is the greatest number", num2); // if the above if condition becomes false then print this
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("%d is the greatest number", num3); // if the above if condition becomes false then print this
    }
    else
    {
        printf("%d is the greatest number", num4); // if the above if condition becomes false then print this
    }
    return 0;
}