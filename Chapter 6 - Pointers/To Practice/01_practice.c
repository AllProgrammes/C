#include <stdio.h>
int main()
{
    int a = 3, *p;
    p = &a;
    printf("The address of a using ampercent a is %d\n", &a);
    printf("The address of a using pointer is %d\n", p);
    printf("The value of a using pointer is %d", *p); //*p here comes in help when we wan to know whats the value of that address
    return 0;
}