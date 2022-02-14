// DISCLAIMER :
// AS THESE  ARE MY PERSONAL PROJECTS SO I CAN'T/WILL NOT EXPLAIN THESE :)
// SORRY !

// YOU CAN CALCULATE YOUR AGE BY RUNNING THIS PROGRAMME
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("ENTER TODAY'S DATE IN YYYY MM DD FORMAT : \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("ENTER YOUR D.O.B IN YYYY MM DD FORMAT : \n");
    scanf("%d%d%d", &d, &e, &f);

    if (d > a)
    {
        printf(" ARE U DOING TIME TRAVEL ?");
    }
    else if (c >= f)
    {
        printf("You are %d days, ", c - f);
    }
    else
    {
        printf("You are %d days, ", ((31 + c) - f));
        --b;
    }

    if (d > a)
    {
        printf(" ARE U DOING TIME TRAVEL ?");
    }
    else if (b >= e)
    {
        printf(" %d months, ", b - e);
    }
    else
    {
        printf(" %d months, ", ((12 + b) - e));
        --a;
    }

    if (a >= d)
    {
        printf("and %d years old ", a - d);
    }
    else if (d > a)
    {
        printf(" ARE U DOING TIME TRAVEL ?");
    }

    return 0;
}