#include <stdio.h>
int check(char statement[], char search)
{
    int i = 0;
    int count = 0;
    while (statement[i] != '\0')
    {
        if (statement[i] == search)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char statement[100];
    char search;
    printf("Enter your sentance below :\n");
    gets(statement);
    printf("Enter the character you want to search for : ");
    scanf("%c", &search);
    printf("%c occured %d times in your statement", search, check(statement, search));
    return 0;
}