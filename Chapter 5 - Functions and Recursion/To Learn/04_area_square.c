#include <stdio.h>
#include <math.h> //for using function
int main()
{
    int side;
    printf("Enter the value of side : ");
    scanf("%d", &side);
    printf("\nThe area of the square is %0.2f", pow(side, 2));
    return 0;
}