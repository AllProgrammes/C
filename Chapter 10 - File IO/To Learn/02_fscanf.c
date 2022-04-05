#include <stdio.h>
int main()
{
    FILE *integer;
    int num;
    integer = fopen("integer.txt", "r");
    fscanf(integer, "%d", &num);
    printf("The number in that file is %d", num);
    return 0;
}