#include <stdio.h>
#include <string.h>
int main()
{
    char greeting[100] = "Hello";
    char name[100] = "Biswajit";
    printf("%s! %s", greeting, name);
    strcat(greeting, name);
    printf("\nAfter doing 'strcat' the data in the string 'greeting' is %s", greeting);
    return 0;
}