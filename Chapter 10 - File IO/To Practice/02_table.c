#include <stdio.h>
int main()
{
    FILE *table;
    table = fopen("table.txt", "w");
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        if (i == 10)
        {
            fprintf(table, "%d x %d = %d", num, i, num * i);
        }
        else
            fprintf(table, "%d x %d = %d\n", num, i, num * i);
    }
    printf("Success ! ");
    fclose(table);
    return 0;
}