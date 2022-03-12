#include <stdio.h>
int main()
{
    int skip = 5, help = 0;
    while (help <= 10)
    {
        help++;
        if (help == skip)
        {
            printf("HEHE BOI I WAS SKIPPED XD)\n");
            continue;
        }
        printf("I am running...%d\n", help);
    }

    return 0;
}