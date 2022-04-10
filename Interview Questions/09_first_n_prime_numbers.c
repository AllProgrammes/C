#include <stdio.h>
int main()
{
    int n, prime = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int number_count = 2; number_count <= n; number_count++)
    {
        for (int check = 1; check <= number_count; check++)
        {
            if (number_count % check == 0)
            {
                prime++;
            }
        }
        if (prime == 2)
        {
            printf("%d\n", number_count);
        }
        prime = 0;
    }
    return 0;
}