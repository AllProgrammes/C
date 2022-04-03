#include <stdio.h>
typedef struct bank_accounts
{
    char name[100];
    int account_number;
    float balance;
} acc;
void accounts_intput(acc *accounts, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\nAccount %d\n", i + 1);
        fflush(stdin);
        printf("Enter the name : ");
        gets(accounts[i].name);
        // scanf("%s", accounts[i].name);
        printf("Enter the account number : ");
        scanf("%d", &accounts[i].account_number);
        printf("Enter bank balance : ");
        scanf("%f", &accounts[i].balance);
    }
}
void accounts_output(acc *accounts, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Name : %s\n", accounts[i].name);
        printf("Account number : %d\n", accounts[i].account_number);
        printf("Avl.Bal = %.2f\n", accounts[i].balance);
    }
}
int main()
{
    acc accounts[100];
    int count;
    printf("Enter the number of account holder : ");
    scanf("%d", &count);
    accounts_intput(accounts, count);
    accounts_output(accounts, count);
    return 0;
}