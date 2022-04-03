#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int age;
    char name[20];
    float salary;
} emp;
void display(emp fetch)
{
    printf("Name = %s\n", fetch.name);
    printf("Age = %d\n", fetch.age);
    printf("Salary = %.2f $\n", fetch.salary);
}
int main()
{
    // declaring count1 and pointer
    emp count1;
    emp *pointer;

    // saving the address of count1 in pointer
    // Pointing pointer to count1
    pointer = &count1;

    // Set the member values for count1
    pointer->age = 29;
    pointer->salary = 69.99;
    strcpy(pointer->name, "Biswajit");

    display(count1);
    return 0;
}