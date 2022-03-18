#include <stdio.h>
int main()
{
    int a = 4;
    int *p = &a;
    printf("\n\nThe value of pointer p aka address of int a is %d", p);
    p++; // it will increase the value of p by 4
    printf("\nThe value of pointer p aka address of int a after doing p++ is %d", p);
    p--; // it will decrease the value of p by 4
    printf("\nThe value of pointer p aka address of int a after doing p-- is %d", p);

    char b = 'a';
    char *c = &b;
    printf("\n\nThe value of pointer c aka address of char b is %d", c);
    c++; // it will increase the value of p by 1
    printf("\nThe value of pointer c aka address of char b after doing c++ is %d", c);
    c--; // it will decrease the value of p by 1
    printf("\nThe value of pointer c aka address of char a after doing c-- is %d", c);

    float d = 69.69;
    float *e = &d;
    printf("\n\nThe value of pointer e aka address of float d is %d", e);
    e++; // it will increase the value of e by 4
    printf("\nThe value of pointer e aka address of float d after doing e++ is %d", e);
    e--; // it will decrease the value of e by 4
    printf("\nThe value of pointer e aka address of float d after doing e-- is %d", e);
    return 0;
}