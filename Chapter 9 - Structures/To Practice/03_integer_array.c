#include <stdio.h>
typedef struct marks
{
    int marks_of_students;
} marks;

int main()
{
    marks marks[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the total marks of student %d : ", i + 1);
        scanf("%d", &marks[i].marks_of_students);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("Total Marks of student %d is -> %d.\n", i + 1, marks[i].marks_of_students);
    }

    return 0;
}