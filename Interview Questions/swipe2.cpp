#include <stdio.h>
int main()
{
    int a, b;
    a = 5, b = 6;
    // now we have to print a=6 and b=5
    // see carefully now (take pen paper)
    a = a * b; // 5x6=30 so the new value of a will be 30 rather than 5
    b = a / b; // 30/6=5 which is the value of a XD
    a = a / b; // 30/5=6 which was the value of b XD
    printf("the value of a is now = %d\n", a);
    printf("the value of b is now = %d", b);
    // if you understood what I did here, well and good
    // if you couldn't follow what i did here then read again and again 4-5 times
    return 0;
}