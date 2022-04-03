#include <stdio.h>
typedef struct tax
{
    float tax_in_dollars;
} tax;

int main()
{
    tax home;
    tax *ptr;
    ptr = &home;
    ptr->tax_in_dollars = 45.56;
    printf("Your home tax is %.2f$", ptr->tax_in_dollars);
    return 0;
}