#include <stdio.h>
int main()
{
    // ASCII value of a-z is 97-122
    // ASCII value of A-Z  is 65-90
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("This is lowercase.");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("This is uppercase.");
    }
    return 0;
}