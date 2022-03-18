#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter the marks of student 1 : ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of student 2 : ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of student 3 : ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of student 4 : ");
    scanf("%d", &marks[3]);
    printf("Enter the marks of student 5 : ");
    scanf("%d", &marks[4]);
    printf("\nMarks of 5 students are %d %d %d %d and %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}