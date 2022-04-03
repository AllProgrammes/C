#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char company_name[10];
    int expereince;
    // float salary;
};

int main()
{
    struct employee emp[100];
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Enter the name of employee %d : ", i + 1);
        gets(emp[i].name);
        printf("Enter the company name of employee %d : ", i + 1);
        gets(emp[i].company_name);
        printf("Enter the expereince of employee %d : ", i + 1);
        scanf("%d", &emp[i].expereince);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Hi %s !! from %s with work experience of %d years\n", emp[i].name, emp[i].company_name, emp[i].expereince);
    }

    // printf("Hi %s !!\tfrom %s with work experience of %d years\n", emp2.name, emp2.company_name, emp2.expereince);
    // printf("Hi %s !!\tfrom %s with work experience of %d years\n", emp3.name, emp3.company_name, emp3.expereince);
    return 0;
}