#include <stdio.h>
int main()
{
    char name[] = "Raju";
    printf("Address of '%c' is %u\n", name[0], &name[0]);
    printf("Address of '%c' is %u\n", name[1], &name[1]);
    printf("Address of '%c' is %u\n", name[2], &name[2]);
    printf("Address of '%c' is %u\n", name[3], &name[3]);
    printf("Address of '%d' is %u\n", name[4], &name[4]); // this is the place at which  \0  is stored
    return 0;
}