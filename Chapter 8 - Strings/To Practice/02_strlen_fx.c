#include <stdio.h>
int strlen(char name[]);
int strlen(char name[])
{
    int len = 0, i = 0;
    char *Name = name;
    while (Name[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}
int main()
{
    char name[] = "Biswajit";
    printf("Length of this string is %d",strlen(name));
    return 0;
}