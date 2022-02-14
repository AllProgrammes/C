#include <stdio.h>
int main()
{
    int a;
    printf("ENTER NUMBER :");
    scanf("%d", &a);
    if (a % 2 == 0) // we divided a with 2 and if after that the remainder is 0 then it will print even and if not then if will move to else condition and print odd
    {
        printf("%d is an even number.", a);
    }
    else
    {
        printf("%d is an odd number.", a);
    }
    return 0;
}