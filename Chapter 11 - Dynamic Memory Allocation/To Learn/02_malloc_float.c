#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *salary;
    salary = (float *)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter salary of employee %d : ", i + 1);
        scanf("%f", &salary[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Salary of employee %d is %.2f$\n", i + 1, salary[i]);
    }

    return 0;
}