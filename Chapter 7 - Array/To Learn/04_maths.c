#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    int *p = &a;
    int *q = &b;
    printf("%d\n", p);
    printf("%d\n", q);
    printf("The differnce of pointer p and q is %u\n", p - q); // idk why it is giving 1 (it should be 4)
    // printf("The sum of pointer p and q is %u", &a + &b); we cannot add two pointers

    return 0;
}