#include <stdio.h>
int main()
{
    int numbers[] = {1, 2, 3};
    int *p = &numbers;
    printf("The value of 3rd element is %d", numbers[2]);
    printf("\nThe current value of pointer p is %d", p);
    p = p + 2;
    printf("\nThe value of pointer p aka address of numbers after doing a increment of 2 (p+2) is %d", *p);
    return 0;
}