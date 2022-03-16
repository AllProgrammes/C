#include <stdio.h>
int sum(int a, int b);
int sum(int a, int b)
{
    int c = a + b;
    a = 22, b = 23;
    return c;
}
int main()
{
    int a = 6, b = 5;
    printf("The value of a and b before function call will be %d and %d\n", a, b);
    printf("The value of 5+5 is %d \n", sum(a, b)); // this method of passing the values to the function is called CALL BY VALUE
    printf("The value of a and b after function call will be %d and %d\n", a, b);
    return 0;
}