#include <stdio.h>
#include <stdlib.h> //added library to nuke warning
#include <time.h>   //added library to nuke warning
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
            printf("\tTHIS IS A GUESS THE NUMBER GAME");
        }
        if (i == 1)
        {
            for (int space = 0; space < 6; space++)
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
int main()
{
    int number, attempt = 1;
    srand(time(0));
    number = rand() % 10 + 1;
    // This function generates a number of 5 digits so if we divide that number with 100then we get a remainder which is less than 100
    // similarly we can  make this game of 2 digit also by dividing by 10
    // I have done +1 because we can get a number 0 also , so to avoid that number we have done +1 so that it will start from 1 and end to 100
    int answer;
    welcome();
    printf("\nThe number is between 1 to 10\n");
    do
    {
        printf("\nWhat's the number ? Enter below\n");
        scanf("%d", &answer);
        if (answer < number)
        {
            if (attempt == 3)
            {
                printf("\nYOU LOST !!");
            }
            else
                printf("Hint ! The number is more than what you have entered");
        }
        else if (answer > number)
        {
            if (attempt == 3)
            {
                printf("\nYOU LOST !!");
            }
            else
                printf("Hint ! The number is less than what you have entered");
        }
        else if (answer == number)
        {
            if (attempt == 1)
            {
                printf("Are you from ILLUMINATI ?");
                break;
            }
            else
            {
                printf("You have guessed it in %d attempts ", attempt);
                break;
            }
        }
        attempt++;
    } while (attempt <= 3);
    // You can enter condition like while (attempt<= 10) to give 10 attempts
    return 0;
}