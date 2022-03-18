#include <stdio.h>
void printTable(int table[], int number);
void printTable(int table[], int number)
{
    for (int count = 1; count <= 10; count++)
    {
        table[count] = number * count;
    }
    for (int count = 1; count <= 10; count++)
    {
        printf("%d x %d = %d\n", number, count, table[count]);
    }
    printf("\n");
}
int main()
{
    int table[3][10];
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    printTable(table[0], number);
    return 0;
}