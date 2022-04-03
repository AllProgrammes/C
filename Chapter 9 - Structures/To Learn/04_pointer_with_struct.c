#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char company_name[10];
    int expereince;
};

int main()
{
    struct employee emp1;
    struct employee *ptr;
    ptr = &emp1;
    //(*ptr).expereince=13;
    // it can be also written as -->    ptr->expereince=100;
    ptr->expereince = 100;
    printf("%d", emp1.expereince);
    return 0;
}