#include <stdio.h>
int main()
{
    int marks[4];
    int i = 0, number = 1;
    while (i < 4)
    {
        printf("Enter the marks of subject %d : ", i + 1);
        scanf("%d", &marks[i]);
        i++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Marks of subject %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}