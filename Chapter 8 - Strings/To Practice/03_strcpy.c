#include <stdio.h>
int strcpy(char target[], char source[]);
int strcpy(char target[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }

    printf("After using the funtion strcpy the value of the string 'copy' is %s", source);
    return 0;
}
int main()
{
    char copy[30];
    char name[] = "Biswajit";
    strcpy(copy, name);
    return 0;
}