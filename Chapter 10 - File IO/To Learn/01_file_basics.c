#include <stdio.h>
int main()
{
    FILE *test;
    test = fopen("test.txt", "r");
    test = fopen("test.txt", "w"); // we can do either read or write with same pointer
    fclose(test);
    return 0;
}