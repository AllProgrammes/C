#include <stdio.h>
int main()
{
    FILE *read_integer, *write_integer;
    int num;
    read_integer = fopen("integer_test.txt", "r");
    fscanf(read_integer, "%d", &num);
    fclose(read_integer);
    write_integer = fopen("integer_test.txt", "w");
    fprintf(write_integer, "%d", num * 2);
    fclose(write_integer);
    printf("Successfully made the integer double");
    return 0;
}