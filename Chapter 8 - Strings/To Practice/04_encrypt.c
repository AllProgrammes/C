#include <stdio.h>
void encrypt(char data[])
{
    printf("Original Data is %s", data);
    int i = 0;
    while (data[i] != '\0')
    {
        data[i] = data[i] - 30;
        i++;
    }
    printf("\nEncrypted data is %s", data);
}
int main()
{
    char data[100];
    printf("Enter the data which you want to encrypt : ");
    gets(data);
    encrypt(data);
    return 0;
}