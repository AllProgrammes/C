#include <stdio.h>
int main()
{
    FILE *loop;
    loop = fopen("integer_loop.txt", "r");
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        fscanf(loop, "%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d integer is : %d\n", i + 1, num[i]);
    }
    fclose(loop);
    return 0;
}