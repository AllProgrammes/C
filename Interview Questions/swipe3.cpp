#include <stdio.h>
int main()
{
    int a, b, c;
    a = 5, b = 6;
    // now we have to print a=6 and b=5
    // see carefully now (take pen paper)
    c = b; // stored the value of b into c (NOTE: b is empty at this point)
    b = a; // stored the value of a into b (NOTE: a is empty now but b is no more empty)
    a = c; // stored the value of c(which was the value of'b' at starting)
    printf("the value of a is now = %d\n", a);
    printf("the value of b is now = %d", b);

    // learning form this:
    //  the variable C did the work of a helper and made our work easy
    //  but what if we swipe using a and b variable only ?
    //  think about it
    return 0;
}