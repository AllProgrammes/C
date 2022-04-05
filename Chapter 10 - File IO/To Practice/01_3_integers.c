#include <stdio.h>
int main()
{
    FILE *take_integer, *give_integer;
    take_integer = fopen("integer.txt", "w");
    give_integer = fopen("integer.txt", "r");
    int take_num[3];
    int give_num[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d number : ", i + 1);
        scanf("%d", &take_num[i]);
        fprintf(take_integer, "%d ", take_num[i]);
    }
    fclose(take_integer);
    for (int i = 0; i < 3; i++)
    {
        fscanf(give_integer, "%d", &give_num[i]);
        printf("Your %d integer is %d\n", i + 1, give_num[i]);
    }
    return 0;
}