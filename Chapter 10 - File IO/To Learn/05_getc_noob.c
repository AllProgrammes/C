#include <stdio.h>
int main()
{
    FILE *noob;
    noob = fopen("noob.txt", "r");
    for (int i = 0; i < 47; i++)
    {
        printf("The %d character is %c\n", i, fgetc(noob));
    }
    return 0;
}