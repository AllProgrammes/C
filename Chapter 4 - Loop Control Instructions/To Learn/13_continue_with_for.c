#include <stdio.h>
int main()
{
    int skip = 5;
    for (int i = 1; i <= 10; i++)
    {
        if (i == skip)
        {
            printf("HEHE BOI I WAS SKIPPED XD)\n");
            continue;
        }
        printf("I am running...%d\n", i);
    }

    return 0;
}