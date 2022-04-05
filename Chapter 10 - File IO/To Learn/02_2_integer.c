#include <stdio.h>
int main()
{
    FILE *integer;
    int num1, num2;
    integer = fopen("integer_2.txt", "r");
    fscanf(integer, "%d", &num1);
    fscanf(integer, "%d", &num2);
    printf("The value of num1 is %d\n", num1);
    printf("The value of num1 is %d", num2);
    return 0;
}