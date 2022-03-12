#include <stdio.h>
int main()
{
    int value = 1;
    while (value <= 10)
    {
        if (value == 5)
        {
            printf("OOPS ! Break condition stopped me at point 5 ;)");
            break;
        }
        printf("I am running...\n");
        value++;
    }

    return 0;
}