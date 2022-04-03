#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char company_name[10];
    int expereince;
};
void display(struct employee fetch)
{
    printf("Name = %s\n", fetch.name);
    printf("Company_Name = %s\n", fetch.company_name);
    printf("Expereince = %d\n", fetch.expereince);
}

int main()
{
    struct employee emp1;
    struct employee *ptr;
    ptr = &emp1;
    //(*ptr).expereince=13;
    // it can be also written as -->    ptr->expereince=100;
    ptr->expereince = 100;
    strcpy(ptr->company_name, "XDA");
    strcpy(ptr->name, "Biswajit");
    display(emp1);
    return 0;
}