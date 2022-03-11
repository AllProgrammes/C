#include <stdio.h>
int main()
{
    int num1, num2;
    printf("ENTER NUM 1 :\n");
    scanf("%d", &num1); // taking input as num1 and num2 from the user and storing the values to num1 and num2
    printf("ENTER NUM 2 :\n");
    scanf("%d", &num2); // taking input as num1 and num2 from the user and storing the values to num1 and num2
    // using if else condition to do the judgement
    if (num1 > num2) // do i need to explain this?
    {
        printf("%d is the greater number", num1); // if the if condition becomes true then compiler will print this statement
    }
    else
    {
        printf("%d is the greater number", num2); // if the above if condition becomes false then print this
    }
    return 0;
}