#include <stdio.h>
typedef struct compare_dates
{
    int year;
    int months;
    int days;
    int hrs;
    int min;
    int sec;
} dates;
int compare(dates data1, dates data2)
{
    if (data1.year > data2.year)
    {
        return 1;
    }
    if (data1.year < data2.year)
    {
        return -1;
    }
    if (data1.months > data2.months)
    {
        return 1;
    }
    if (data1.months < data2.months)
    {
        return -1;
    }
    if (data1.days > data2.days)
    {
        return 1;
    }
    if (data1.days < data2.days)
    {
        return -1;
    }
    if (data1.hrs > data2.hrs)
    {
        return 1;
    }
    if (data1.hrs < data2.hrs)
    {
        return -1;
    }
    if (data1.min > data2.min)
    {
        return 1;
    }
    if (data1.min < data2.min)
    {
        return -1;
    }
    if (data1.sec > data2.sec)
    {
        return 1;
    }
    if (data1.sec < data2.sec)
    {
        return -1;
    }
    return 0;
}
void display(dates data1, dates data2)
{
    printf("Data 1 in YYYY MM DD HRS MIN SEC is %d-%d-%d  %d:%d:%d", data1.year, data1.months, data1.days, data1.hrs, data1.min, data1.sec);
    printf("\nData 2 in YYYY MM DD HRS MIN SEC is %d-%d-%d  %d:%d:%d", data2.year, data2.months, data2.days, data2.hrs, data2.min, data2.sec);
}
int main()
{
    dates data1, data2;
    data1.year = 2001;
    data1.months = 5;
    data1.days = 1;
    data1.hrs = 14;
    data1.min = 45;
    data1.sec = 24;

    data2.year = 2001;
    data2.months = 5;
    data2.days = 10;
    data2.hrs = 14;
    data2.min = 45;
    data2.sec = 24;

    display(data1, data2);
    printf("\nAfter comparision of data1 with data2 the result is %d", compare(data1, data2));
    return 0;
}