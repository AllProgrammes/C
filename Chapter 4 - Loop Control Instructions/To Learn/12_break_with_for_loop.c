#include <stdio.h>
int main()
{
    int value = 1;
    for (value = 1; value <= 10; value++)
    {
        if (value == 5)
        {
            printf("OOPS ! Break condition stopped me at point 5 ;)");
            break;
        }
        printf("I am running...\n");
    }

    return 0;
}