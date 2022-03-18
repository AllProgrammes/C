#include <stdio.h>
int main()
{
    int marks[3];
    int *p = &marks[0];
    // int *p = marks; can be written as this also
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of subject %d : ", i + 1);
        scanf("%d", p);
        p++;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Marks of subject is %d\n", marks[i]);
    }

    return 0;
}