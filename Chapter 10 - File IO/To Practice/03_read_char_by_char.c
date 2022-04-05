#include <stdio.h>
int main()
{
    FILE *test1, *test2;
    test1 = fopen("test1.txt", "r");
    test2 = fopen("test2.txt", "w");
    char copy;
    copy = fgetc(test1);
    while (copy != EOF)
    {
        fprintf(test2, "%c", copy);
        copy = fgetc(test1);
    }
    fprintf(test2, "\n");
    fclose(test1);
    test1 = fopen("test1.txt", "r");
    copy = fgetc(test1);
    while (copy != EOF)
    {
        fprintf(test2, "%c", copy);
        copy = fgetc(test1);
    }
    printf("Success !");
    fclose(test1);
    fclose(test2);
    return 0;
}