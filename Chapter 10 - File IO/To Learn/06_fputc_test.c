#include <stdio.h>
int main()
{
    FILE *target, *noob;
    target = fopen("fputc_target.txt", "w");
    noob = fopen("noob.txt", "r");
    char copy = fgetc(noob);
    while (copy != EOF)
    {
        fputc(copy, target);
        copy = fgetc(noob);
    }
    printf("Successfully copied the content into target file");
    return 0;
}