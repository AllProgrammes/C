#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char company_name[10];
    int expereince;
    float salary;
};

int main()
{
    struct employee emp1;
    strcpy(emp1.name, "Biswajit");
    strcpy(emp1.company_name, "XDA");
    emp1.expereince = 5;
    emp1.salary = 1254.65;
    // the above information an also be given as --> struct employee emp1={"Biswajit","xda",5,45.56};
    printf("Hi %s !!,\n from %s with work experience of %d years with salary of %.2f $", emp1.name, emp1.company_name, emp1.expereince, emp1.salary);
    return 0;
}