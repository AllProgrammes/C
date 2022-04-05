#include <stdio.h>
int main()
{
    FILE *check;
    check = fopen("File_not_present.txt", "r");
    if (check == NULL)
    {
        printf("ERROR 404 !\nFile not found");
    }
    else
        printf("Requested file found.");
    fclose(check);
    return 0;
}