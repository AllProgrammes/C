#include <stdio.h>
typedef struct diff_of_dates
{
    int day;
    int month;
    int year;
} dates;
void compare(dates admission, dates pass_out)
{
    int diff_day = pass_out.day - admission.day;
    int diff_month = pass_out.month - admission.month;
    int diff_year = pass_out.year - admission.year;
    printf("\nYou have spent %d years ,%d months and %d days in this school.", diff_year, diff_month, diff_day);
}
int main()
{
    dates admission, pass_out;
    printf("Enter the date of your admission in DD MM YYYY format : ");
    scanf("%d %d %d", &admission.day, &admission.month, &admission.year);
    printf("Enter the date of your pass out in DD MM YYYY format : ");
    scanf("%d %d %d", &pass_out.day, &pass_out.month, &pass_out.year);
    compare(admission, pass_out);
    return 0;
}