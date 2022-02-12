#include <stdio.h>
int main()
{
    int a, b; // taken 2 variables a and b further given their values//
    printf("Enter the 1st number : \n");
    scanf("%d", &a);                        // scanf is used to take input from the user
    printf("Enter the 2nd number : \n");    // \n = prints a new line
    scanf("%d", &b);                        // why &? because it is used to store the value taken from user to that variable we have taken at the first (in our case they are a and b)
    printf("%d + %d = %d \n", a, b, a + b); // not understood what i did here ? dont worry ! just see below
    printf("%d - %d = %d \n", a, b, a - b); // why 3%d? because i will have to print the user entered numbers thier
    printf("%d / %d = %d \n", a, b, a / b); // why a,b,a/b? because the %d's will print accorindly like if i do b,a,a/b then it will print b first then a then a divide b
    printf("%d * %d = %d \n", a, b, a * b); // hope u undertood :)

    return 0;
}