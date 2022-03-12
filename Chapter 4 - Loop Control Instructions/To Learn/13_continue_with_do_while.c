#include <stdio.h>
int main()
{
    int skip = 5;
    int help = 0;
    do
    {
        help++;
        if (help == skip)
        {
            printf("HEHE BOI I WAS SKIPPED XD)\n");
            continue;
        }

        else
        {
            printf("I am running...%d\n", help);
        }

    } while (help < 10);

    return 0;
}