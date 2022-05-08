#include <stdio.h>
#include <stdlib.h>
void welcome();
void food_list();
void ask();
void option();
int runtime = 0;
int counter = 0;
int main()
{
    ask();
    return 0;
}
void ask()
{
    int password;
    printf("Hint : Enter the last bill amount you paid\n");
    printf("Enter the password to access this program : ");
    scanf("%d", &password);
    if (password == 550)
    {
        welcome();
        food_list();
    }
    else
    {
        if (counter == 3)
        {
            printf("\nCome back later with correct password kid ^_^\n\n");
            exit(0);
        }
        else
        {
            printf("Invalid Password !! You have %d attempts left\n\n", 3 - counter);
            counter++;
            ask();
        }
    }
}
void option()
{
    char choice;
    if (runtime % 5 == 0)
    {
        printf("Want to exit the program ? Press 'y/Y' to exit, else press 'n/N' : ");
        scanf("%c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            exit(0);
        }
        else if (choice == 'n' || choice == 'N')
        {
            food_list();
        }
        else
        {
            printf("Enter valid code !!\n");
            option();
        }
    }
}
void food_list()
{
    runtime++;
    option();
    int index;
    printf("\nFood Items Tried Till Now :- ");
    printf("\n1. Paneer Masala\n2. Chicken Role \n3. Chowmin \n4. Naan\n");
    printf("Enter the Index number of the Food Iteam to know the price : ");
    scanf("%d", &index);
    switch (index)
    {
    case 1:
        printf("\nPrice is Rs 140 per plate.\n");
        food_list();
        break;
    case 2:
        printf("\nPrice is Rs 80 (full).\n");
        food_list();
        break;
    case 3:
        printf("\nPrice is Rs 80 per plate.\n");
        food_list();
        break;
    case 4:
        printf("\nPrice is Rs 30 per piece.\n");
        food_list();
        break;
    default:
        printf("\nPlease enter a valid index !\n");
        food_list();
        break;
    }
}
void welcome()
{
    for (int i = 0; i < 43; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 43; i++)
    {
        printf("x");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int space = 0; space < 43; space++)
        {
            printf(" ");
        }
        for (int x = 0; x < 1; x++)
        {
            printf("x");
        }
        if (i == 1)
        {
            printf("\t  WELCOME TO YOUR FOOD LEDGER");
        }
        if (i == 1)
        {
            for (int space = 0; space < 8; space++)
            {
                printf(" ");
            }
        }
        else
        {
            for (int space = 0; space < 41; space++)
            {
                printf(" ");
            }
        }
        for (int x = 0; x < 1; x++)
        {
            printf("x");
        }
        printf("\n");
    }
    for (int i = 0; i < 43; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < 43; i++)
    {
        printf("x");
    }
}