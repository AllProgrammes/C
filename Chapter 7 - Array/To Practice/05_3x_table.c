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
    printTable(table[0], 2);
    printTable(table[1], 7);
    printTable(table[2], 9);
    return 0;
}