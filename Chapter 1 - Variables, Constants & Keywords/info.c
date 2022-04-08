#include <stdio.h>
int main()
{
    char name[30], school_name[100], course[10], address[100], mobile_number[10];
    int pincode, class, roll_number;
    printf("Enter your name : ");
    gets(name);
    printf("Enter your class : ");
    scanf("%d", &class);
    printf("Enter your roll number : ");
    scanf("%d", &roll_number);
    fflush(stdin);
    printf("Enter your school name : ");
    gets(school_name);
    printf("Enter the course name : ");
    scanf("%s", &course);
    printf("Enter your mobile number : ");
    scanf("%s", &mobile_number);
    fflush(stdin);
    printf("Enter your Address : ");
    gets(address);
    printf("Enter your pincode : ");
    scanf("%d", &pincode);
    printf("NAME : %s\n", name);
    printf("CLASS : %d\n", class);
    printf("ROLL NUMBER : %d\n", roll_number);
    printf("SCHOOL NAME : %s\n", school_name);
    printf("COURSE : %s\n", course);
    printf("MOBILE NO. : %s\n", mobile_number);
    printf("ADDRESS : %s\n", address);
    printf("PINCODE : %d\n", pincode);
    return 0;
}