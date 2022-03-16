#include <stdio.h>
void pass(int a);
void pass(int a)
{
    printf("The address of a in this pass fucntion is %d\n", &a);
}
int main()
{
    int i = 1, *p;
    printf("The address of i is %d\n", &i);
    printf("The address of i is %d\n", &i);
    pass(i);
    return 0;
}