#include <stdio.h>
int main()
{
    char name[20];
    float salary;
    FILE *employee;
    employee = fopen("data_employee.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("\n\nEmployee %d\n", i + 1);
        printf("Name : ");
        gets(name);
        printf("Salary : ");
        scanf("%f", &salary);
        fprintf(employee, "Employee %d\n", i + 1);
        fprintf(employee, "Name : %s\n", name);
        fprintf(employee, "Salary : %.2f $\n\n", salary);
    }
    printf("Employee data entry succeed !");
    fclose(employee);
    return 0;
}