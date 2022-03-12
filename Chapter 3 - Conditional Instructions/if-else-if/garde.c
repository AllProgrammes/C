#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    if ((marks > 90) && (marks < 100))
        printf("You have acheived grade A !");
    else if ((marks > 80) && (marks < 90))
        printf("You have acheived grade A !");
    else if ((marks > 70) && (marks < 80))
        printf("You have acheived grade A !");
    else if ((marks > 60) && (marks < 70))
        printf("You have acheived grade A !");
    else
        printf("You have acheived grade F !");
    return 0;
}