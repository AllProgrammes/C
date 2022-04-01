#include <stdio.h>
#include <string.h>
int main()
{
    char name1[30];
    char name2[30];
    char c;
    int i = 0;
    printf("Enter the value in  name1 : ");
    scanf("%s", name1);
    printf("Enter the value in  name2 : ");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        name2[i] = c;
        i++;
    }
    name2[i - 1] = '\0';
    printf("The data stored in string 'name1' is %s\n", name1);
    printf("The data stored in string 'name2' is %s", name2);
    printf("\nstrcmp for these strings is %d", strcmp(name1, name2));
    return 0;
}