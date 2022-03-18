#include <stdio.h>
int main()
{
    int students = 3, subjects = 5;
    int marks[3][5];
    for (students = 0; students < 3; students++)
    {
        printf("\nEnter the marks of student %d \n\n", students + 1);
        for (subjects = 0; subjects < 5; subjects++)
        {
            printf("Subject %d : ", subjects + 1);
            scanf("%d", &marks[students][subjects]);
        }
    }
    for (students = 0; students < 3; students++)
    {
        printf("\n\nMarks of student %d are as follows :-\n\n", students + 1);
        for (subjects = 0; subjects < 5; subjects++)
        {
            printf("Subject %d = %d \n", subjects + 1, marks[students][subjects]);
        }
    }
    return 0;
}