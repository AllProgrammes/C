#include <stdio.h>
void decrypt(char data[])
{
    printf("Data is %s", data);
    int i = 0;
    while (data[i] != '\0')
    {
        data[i] = data[i] + 30;
        i++;
    }
    printf("\nDecrypted data is %s", data);
}
int main()
{
    char data[100];
    printf("Enter the code that you have got : ");
    scanf("%s", data);
    decrypt(data);
    return 0;
}