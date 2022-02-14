#include <stdio.h>
int main()
{
    int a;
    printf("ENTER ANY MONTH NUMBER : ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("%d of 12 month is JANUARY", a);
    }
    else if (a == 2)
    {
        printf("%d of 12 month is FEBRUARY", a);
    }
    else if (a == 3)
    {
        printf("%d of 12 month is MARCH", a);
    }
    else if (a == 4)
    {
        printf("%d of 12 month is APRIL", a);
    }
    else if (a == 5)
    {
        printf("%d of 12 month is MAY", a);
    }
    else if (a == 6)
    {
        printf("%d of 12 month is JUNE", a);
    }
    else if (a == 7)
    {
        printf("%d of 12 month is JULY", a);
    }
    else if (a == 8)
    {
        printf("%d of 12 month is AUGUST", a);
    }
    else if (a == 9)
    {
        printf("%d of 12 month is SEPTEMBER", a);
    }
    else if (a == 10)
    {
        printf("%d of 12 month is OCTOBER", a);
    }
    else if (a == 11)
    {
        printf("%d of 12 month is NOVEMBER", a);
    }
    else if (a == 12)
    {
        printf("%d of 12 month is DECEMBER", a);
    }
    else
    {
        printf("DUDE ! A YEAR HAVE 12 MONTHS ONLY .");
    }
    return 0;
}