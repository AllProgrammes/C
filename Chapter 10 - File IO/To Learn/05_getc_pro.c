#include <stdio.h>
int main()
{
    FILE *noob;
    noob = fopen("noob.txt", "r");
    char c = fgetc(noob);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(noob);
    }
    return 0;
}