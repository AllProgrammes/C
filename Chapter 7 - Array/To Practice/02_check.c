#include <stdio.h>
int main()
{
    int numbers[] = {1, 2, 3};
    int *p = &numbers;
    printf("The value of 3rd element is %d", numbers[2]);
    printf("\nThe current value of pointer p is %d", p);
    printf("\nThe 3rd element of the array 'numbers' is %d", *(p + 3)); // not works because the array numbersdo not have 4 elements it have only  3 elements
    printf("\nThe 3rd element of the array 'numbers' is %d", *(p + 2)); // this will work
    return 0;
}