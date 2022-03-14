#include <stdio.h>
int main()
{
    int a = 1;
    printf("%d %d %d", a, ++a, a++);
    // what you think what will it print ?
    // if you think it will print --  1 2 2 -- YOU ARE WRONG XD (test yourself)
    return 0;
}