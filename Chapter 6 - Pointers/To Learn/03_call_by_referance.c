#include <stdio.h>
void swap();
void swap(int *a, int *b)
{
    int temp;
    temp = *a; // temp will store the address of a
    *a = *b;   // a will store the value of b
    *b = temp; // then b will copy the address of a from temp (done above)
}
void wrong_swap();
void wrong_swap(int a, int b)
{
    int temp;
    temp = a; // copied the value of a into temp
    a = b;    // copied the value of b into a
    b = temp; // copied the value of temp into b
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a and b was %d and %d\n", a, b);
    wrong_swap(a, b);
    printf("The value of a and b after wrong swap is %d and %d\n", a, b);
    swap(&a, &b); // we took the  address of the a and b here in main function to swap function
    printf("The value of a and b after correct swap is %d and %d\n", a, b);
    return 0;
}