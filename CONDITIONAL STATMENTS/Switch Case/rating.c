#include <stdio.h>
int main()
{
    int rating;
    printf("Enter rating between (1-5) \n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("You gave 1 star !");
        break;
    case 2:
        printf("You gave 2 star !");
        break;
    case 3:
        printf("You gave 3 star !");
        break;
    case 4:
        printf("You gave 4 star !");
        break;
    case 5:
        printf("You gave 5 star !");
        break;
    default:
        printf("Please a value between 1 to 5");
        break;
    }
    return 0;
}