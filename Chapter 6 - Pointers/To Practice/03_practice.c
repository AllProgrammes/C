#include <stdio.h>
void pass(int *a);
void pass(int *a)
{
    int temp = *a * 10;
    printf("10 times the value of a is %d", temp);
}
int main()
{
    int i = 1, *p;
    printf("The value of i is %d\n", i);
    printf("The address of i is %d\n", &i);
    pass(&i);
    return 0;
}