#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int conditions(char computer, char human)
{
    // Equal conditions i.e ---> SS WW GG condition
    if (computer == human)
    {
        return 0;
    }
    // SW and WS condition
    if (computer == 's' && human == 'w')
    {
        return -1;
    }
    else if (computer == 'w' && human == 's')
    {
        return 1;
    }
    // SG ang GS condition
    if (computer == 's' && human == 'g')
    {
        return 1;
    }
    else if (computer == 'g' && human == 's')
    {
        return -1;
    }
    // WG and GW condition
    if (computer == 'w' && human == 'g')
    {
        return -1;
    }
    else if (computer == 'g' && human == 'w')
    {
        return 1;
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
            printf("\tTHIS IS A SNAKE , WATER , GUN GAME");
        }
        if (i == 1)
        {
            for (int space = 0; space < 3; space++)
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
void result(int score, char computer, char human)
{
    if (score == 1)
    {
        printf("You Won !\nComputer took '%c' and you choose '%c'", computer, human);
    }
    else if (score == -1)
    {
        printf("You Lost !\nComputer took '%c' and you choose '%c'", computer, human);
    }
    else
    {
        printf("Match Draw !\nComputer took '%c' and you choose '%c'", computer, human);
    }
}
int main()
{
    int number;
    char computer, human;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        computer = 's';
    }
    else if (number < 66 && number > 33)
    {
        computer = 'w';
    }
    else if (number > 66)
    {
        computer = 'g';
    }
    welcome();
    printf("\nSNAKE='s'\nWATER='w'\nGUN='g'\n");
    printf("Enter your choice here : ");
    scanf("%c", &human);
    int score = conditions(computer, human);
    result(score, computer, human);
    return 0;
}
