#include <stdio.h>
int main()
{
    int a;
    printf("ENTER ANY DAY NUMBER : ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("%d of 7 days of a week is MONDAY", a);
    }
    else if (a == 2)
    {
        printf("%d of 7 days of a week is TUESDAY", a);
    }
    else if (a == 3)
    {
        printf("%d of 7 days of a week is WEDNESDAY", a);
    }
    else if (a == 4)
    {
        printf("%d of 7 days of a week is THURSDAY", a);
    }
    else if (a == 5)
    {
        printf("%d of 7 days of a week is FRIDAY", a);
    }
    else if (a == 6)
    {
        printf("%d of 7 days of a week is SATURDAY", a);
    }
    else if (a == 7)
    {
        printf("%d of 7 days of a week is SUNDAY", a);
    }
    else
    {
        printf("DUDE ! A WEEK HAVE 7 DAYS ONLY .");
    }
    return 0;
}