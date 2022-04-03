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
    struct employee emp1, emp2, emp3;
    printf("Enter the name of employee 1 : ");
    gets(emp1.name);
    printf("Enter the company name of employee 1 : ");
    gets(emp1.company_name);
    printf("Enter the expereince of employee 1 : ");
    scanf("%d", &emp1.expereince);
    fflush(stdin);
    printf("Enter the name of employee 2 : ");
    gets(emp2.name);
    printf("Enter the company name of employee 2 : ");
    gets(emp2.company_name);
    printf("Enter the expereince of employee 2 : ");
    scanf("%d", &emp2.expereince);
    fflush(stdin);
    printf("Enter the name of employee 3 : ");
    gets(emp3.name);
    printf("Enter the company name of employee 3 : ");
    gets(emp3.company_name);
    printf("Enter the expereince of employee 3 : ");
    scanf("%d", &emp3.expereince);
    printf("\nHi %s !!\tfrom %s with work experience of %d years\n", emp1.name, emp1.company_name, emp1.expereince);
    printf("Hi %s !!\tfrom %s with work experience of %d years\n", emp2.name, emp2.company_name, emp2.expereince);
    printf("Hi %s !!\tfrom %s with work experience of %d years\n", emp3.name, emp3.company_name, emp3.expereince);
    return 0;
}