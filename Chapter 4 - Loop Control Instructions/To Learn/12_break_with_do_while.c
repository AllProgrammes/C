#include <stdio.h>
int main()
{
    int value = 1;
    do
    {
        if (value == 5)
        {
            printf("OOPS ! Break condition stopped me ;)");
            break;
        }
        value++;
        printf("I am running...\n");
    } while (value <= 10);

    return 0;
}