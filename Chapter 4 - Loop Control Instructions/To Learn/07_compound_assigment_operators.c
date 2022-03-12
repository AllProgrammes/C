#include <stdio.h>
int main()
{
    int a = 5;
    printf("The value of a+= is %d\n", a += 10); // it denotes a+10=
    printf("The value of a-= is %d\n", a -= 10); // it denotes a-10=
    printf("The value of a*= is %d\n", a *= 2);  // it denotes a*2=
    printf("The value of a/= is %d\n", a /= 2);  // it denotes a/2=
    printf("The value of a%= is %d\n", a %= 2);  // it denotes a%2=
    return 0;
}